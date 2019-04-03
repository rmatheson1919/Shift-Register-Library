/*
	ShiftRegister.h - Arduino librery for controling SN74HC595 Shift Register in both 3 and 5 pin modes
	Created by Ryan C. Matheson, April 2, 2019
	Released into public doamain
*/

#include "Arduino.h"
#include "ShiftRegister.h"

//5 PIN MODE-----------------------------------------------------------------------------------------------------------
//setup 5 pin mode
 
SN74HC595_5pin::SN74HC595_5pin(int numOfRegisters, int serPin, int oePin, int rclkPin, int srclkPin, int srclrPin)
{
	_numOfPins = numOfRegisters * 8;
	_serPin = serPin;
	_oePin = oePin;
	_rclkPin = rclkPin;
	_srclkPin = srclkPin;
	_srclrPin = srclrPin;
	
	pinMode(_serPin, OUTPUT);
	pinMode(_oePin, OUTPUT);
	pinMode(_rclkPin, OUTPUT);
	pinMode(_srclkPin, OUTPUT);
	pinMode(_srclrPin, OUTPUT);
	
	digitalWrite(_serPin,LOW);
	digitalWrite(_oePin,LOW);
	digitalWrite(_rclkPin,LOW);
	digitalWrite(_srclkPin,LOW);
	digitalWrite(_srclrPin,HIGH);

}

//output value and bump all other values down
void SN74HC595_5pin::display(int i)
{
	digitalWrite(_serPin,i);
	delay(1);
	digitalWrite(_srclkPin,HIGH);
	delay(1);
	digitalWrite(_srclkPin,LOW);
	delay(1);
	digitalWrite(_serPin,LOW);
	delay(1);
	digitalWrite(_rclkPin,HIGH);
	delay(1);
	digitalWrite(_rclkPin,LOW);
}

//write value to internal register
void SN74HC595_5pin::writeReg(int i)
{
	digitalWrite(_serPin,i);
	delay(1);
	digitalWrite(_srclkPin,HIGH);
	delay(1);
	digitalWrite(_srclkPin,LOW);
	delay(1);
	digitalWrite(_serPin,LOW);
}
	
//display internal register		
void SN74HC595_5pin::displayReg()
{
	digitalWrite(_rclkPin,HIGH);
	delay(1);
	digitalWrite(_rclkPin,LOW);
}	

//clear internal register
void SN74HC595_5pin::clearReg()
{
	digitalWrite(_srclrPin,LOW);
	delay(1);
	digitalWrite(_srclrPin,HIGH);
}

//clear display pins
void SN74HC595_5pin::clearDisplay()
{
	digitalWrite(_srclrPin,LOW);
	delay(1);
	digitalWrite(_srclrPin,HIGH);
	delay(1);
	digitalWrite(_rclkPin,HIGH);
	delay(1);
	digitalWrite(_rclkPin,LOW);
	
}

//enable output
void SN74HC595_5pin::enable()
{
	digitalWrite(_oePin,LOW);
}

//disable output
void SN74HC595_5pin::disable()
{
	digitalWrite(_oePin,HIGH);
}
//---------------------------------------------------------------------------------------------------------------------
	
	
	
//3 PIN MODE-----------------------------------------------------------------------------------------------------------	
//setup 3 pin mode

SN74HC595_3pin::SN74HC595_3pin(int numOfRegisters, int serPin, int rclkPin, int srclkPin)
{
	_numOfPins = numOfRegisters * 8;
	_serPin = serPin;
	_rclkPin = rclkPin;
	_srclkPin = srclkPin;
	
	pinMode(_serPin, OUTPUT);
	pinMode(_rclkPin, OUTPUT);
	pinMode(_srclkPin, OUTPUT);
	
	digitalWrite(_serPin,LOW);
	digitalWrite(_rclkPin,LOW);
	digitalWrite(_srclkPin,LOW);

}

//output value and bump all other values down
void SN74HC595_3pin::display(int i)
{
	digitalWrite(_serPin,i);
	delay(1);
	digitalWrite(_srclkPin,HIGH);
	delay(1);
	digitalWrite(_srclkPin,LOW);
	delay(1);
	digitalWrite(_serPin,LOW);
	delay(1);
	digitalWrite(_rclkPin,HIGH);
	delay(1);
	digitalWrite(_rclkPin,LOW);
}

//write value to internal register
void SN74HC595_3pin::writeReg(int i)
{
	digitalWrite(_serPin,i);
	delay(1);
	digitalWrite(_srclkPin,HIGH);
	delay(1);
	digitalWrite(_srclkPin,LOW);
	delay(1);
	digitalWrite(_serPin,LOW);
}
	
//display internal register		
void SN74HC595_3pin::displayReg()
{
	digitalWrite(_rclkPin,HIGH);
	delay(1);
	digitalWrite(_rclkPin,LOW);
}	

//clear display pins
void SN74HC595_3pin::clearDisplay()
{
	for(int i=_numOfPins - 1;i >= 0; i--)
	{
		digitalWrite(_serPin,0);
		delay(1);
		digitalWrite(_srclkPin,HIGH);
		delay(1);
		digitalWrite(_srclkPin,LOW);
		delay(1);
		digitalWrite(_serPin,LOW);
		delay(1);
		digitalWrite(_rclkPin,HIGH);
		delay(1);
		digitalWrite(_rclkPin,LOW);
	}
}
	
//clear internal register
void SN74HC595_3pin::clearReg()
{
	for(int i=_numOfPins - 1;i >= 0; i--)
	{
		digitalWrite(_serPin,0);
		delay(1);
		digitalWrite(_srclkPin,HIGH);
		delay(1);
		digitalWrite(_srclkPin,LOW);
		delay(1);
		digitalWrite(_serPin,LOW);
	}
}
//---------------------------------------------------------------------------------------------------------------------
	
	
	
	
	
	
	
	
	
	
	
