/*
 * Author: João Moreira
 * GitHub: /joaomlfa
 * Date: 2022-01-28
 */
#ifndef	FourDis_SevenSeg_h
#define FourDis_SevenSeg_h

#include <Arduino.h>

 class FourDis_SevenSeg{
  public:
	FourDis_SevenSeg( uint8_t display_pin[], uint8_t segment_pin[]);
	void showNumber(int32_t number);
  private:
    uint8_t dis_pin[4];
	uint8_t seg_pin[8];
	void showDigit(int32_t digit, int32_t display);
	void showDisplay(int32_t display);
	void clearDigits();
 };
 
 #endif
