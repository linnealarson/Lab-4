/*
 * LCD.h
 *
 *  Created on: Oct 22, 2013
 *      Author: C15Linnea.Larson
 */
#include <msp430.h>
#ifndef LCD_H_
#define LCD_H_

void InitSPI ();
void LCDInit ();
void LCDClear ();
void Line1Message ();
void Line2Message ();
void WriteChar ();
void WriteMsg ();
void ScrollMsg ();


#endif /* LCD_H_ */
