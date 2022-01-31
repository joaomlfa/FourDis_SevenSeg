/* 
* Author: João Moreira
* GitHub: /joaomlfa
* Date: 2022-01-28
*/
#include "FourDis_SevenSeg.h"

static const uint8_t digitCodeMap[]  = 
{
	0b00111111, // 0            
	0b00000110, // 1           
	0b01011011, // 2           
	0b01001111, // 3            
	0b01100110, // 4           
	0b01101101, // 5           
	0b01111101, // 6            
	0b00000111, // 7  
	0b01111111, // 8   
	0b01101111, // 9   
};
FourDis_SevenSeg::FourDis_SevenSeg(  uint8_t display_pin[],  uint8_t segment_pin[])
{

	for(int i; i < 8; i++)
	{	
		seg_pin[i] = segment_pin[i];
		pinMode(seg_pin[i], OUTPUT);
		if(i < 4)
		{	
			dis_pin[i] = display_pin[i];
			pinMode(dis_pin[i], OUTPUT);
		}
	}
}

void FourDis_SevenSeg::showNumber(int32_t number)
{
	int32_t digit, display = 3;

		do
		{
			digit = number%10;
			clearDigits();
			showDigit(digit, display);
			number = number/10;
			display--;	
		}while(number != 0);
}

void FourDis_SevenSeg::showDigit(int32_t digit, int32_t display)
{
	showDisplay(display);	
	int32_t digitMap = digitCodeMap[digit];
	int32_t bitVerification = 0b00000001;
	for(int i=0; i < 8; i++){
	int acender = digitMap & bitVerification; 
    digitalWrite(seg_pin[i], acender);
    bitVerification <<= 1;
   }
}

void FourDis_SevenSeg::showDisplay(int32_t display)
{
	for(int i = 0; i < 4; i++)
	{
		digitalWrite(dis_pin[i], HIGH);
		if(i == display)
		{
			digitalWrite(dis_pin[i], LOW);
		}
	}
}

void FourDis_SevenSeg::clearDigits(){
	for(int i = 0; i < 8; i++)
	{
		digitalWrite(seg_pin[i], LOW);
	}
}