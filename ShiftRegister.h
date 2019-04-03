/*
	ShiftRegister.h - Arduino librery for controling SN74HC595 Shift Register in both 3 and 5 pin modes
	Created by Ryan C. Matheson, April 2, 2019
	Released into public doamain
*/

#ifndef ShiftRegister_h
#define ShiftRegister_h

#include "Arduino.h"

class SN74HC595_5pin
{
	public:
		SN74HC595_5pin(int numOfRegisters, int serPin, int oePin, int rclkPin, int srclkPin, int srclrPin);
		void display(int i );
		void writeReg(int i);
		void displayReg();
		void clearReg();
		void clearDisplay();
		void enable();
		void disable();
	private:
		int _numOfPins;
		int _serPin;
		int _oePin;
		int _rclkPin;
		int _srclkPin;
		int _srclrPin;
};

class SN74HC595_3pin
{
	public:
		SN74HC595_3pin(int numOfRegisters, int serPin, int rclkPin, int srclkPin);
		void display(int i );
		void writeReg(int i);
		void displayReg();
		void clearReg();
		void clearDisplay();
	private:
		int _numOfPins;
		int _serPin;
		int _rclkPin;
		int _srclkPin;
};
#endif
