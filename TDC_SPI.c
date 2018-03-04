/*
 * File:   TDC_SPI.c
 * Author: Miguel
 *
 * Created on March 4, 2018, 6:12 PM
 */


#include <xc.h>

#include "global.h"
#include "TDC_SPI.h"

void TDC_SPISetup(void)
{


	TDC1000_CSn_PxDIR |= TDC1000_CSn_PIN;

	
	UCB1_PxSEL0 |= UCB1_SIMO_PIN + UCB1_SOMI_PIN + UCB1_UCLK_PIN;
	UCB1_PxSEL1 &= ~(UCB1_SIMO_PIN + UCB1_SOMI_PIN + UCB1_UCLK_PIN);
	
	UCB1CTLW0 |= UCSWRST;
	
	// 3-pin, 8-bit SPI master
	// Clock polarity high, MSB
	// Clock Source: SMCLK
	UCB1CTLW0 |= UCMST + UCSYNC + UCCKPL + UCMSB + UCSSEL_2;
	
	UCB1BRW = 0;

}

void TDC1000_SPIByteWriteReg(uint8_t addr, uint8_t value)
{
	addr |= TDC1000_WRITE_BIT;			// for write make sure bit6 is 1 
	
	TDC1000_CS_EN;
	
	UCB1IFG		&= ~UCRXIFG;
	UCB1IE		|= UCRXIE;
	UCB1TXBUF	= addr;
	LPM0;
	
	UCB1IFG		&= ~UCRXIFG;
	UCB1TXBUF	= value;
	LPM0;
	UCB1IE		&= ~UCRXIE;

	TDC1000_CS_DIS;
}

uint8_t TDC1000_SPIByteReadReg(uint8_t addr)
{
	uint8_t value;
	
	TDC1000_CS_EN;

	addr &= ~TDC1000_WRITE_BIT;
	
	value		= UCB1RXBUF;
	UCB1IE		|= UCRXIE;
	UCB1TXBUF	= addr;
	LPM0;
	value		= UCB1RXBUF;

	UCB1TXBUF	= 0;
	LPM0;
	value		= UCB1RXBUF;

	UCB1IE		&= ~UCRXIE;
	TDC1000_CS_DIS;
	
	return value;
}



#pragma vector=USCI_B1_VECTOR
__interrupt void USCI_B1_ISR(void)
{
	switch (__even_in_range(UCB1IV, USCI_SPI_UCTXIFG))
	{
		case USCI_SPI_UCRXIFG:		//Vector 2 - RXIFG
			LPM0_EXIT;
			break;
		case USCI_SPI_UCTXIFG:		//Vector 2 - TXIFG
			LPM0_EXIT;
			break;
		
		default: break;
	}
}
