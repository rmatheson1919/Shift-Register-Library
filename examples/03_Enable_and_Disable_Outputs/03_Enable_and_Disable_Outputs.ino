/* ShiftRegister.h
   Libery for controling SN74HC595 shift register
   Created By Ryan Matheson on 4/2/19
   Arduino Version - 1.8.9

   Example - Using the enable and disable functions
   Mode - 5-pin

   Circuit diagram in "extras" folder in libery diagram
*/

#include <ShiftRegister.h> //include the librery

//5 pin mode -- parameters (number of shift registers, serPin, oePin, rclkPin, srclkPin, srclrPin)
SN74HC595_5pin reg(1, 12, 11, 10, 9, 8); // UNCOMMENT THIS LINE FOR 5 PIN MODE--------------------------5 PIN--------------------------

void setup() {
  //change the bit values of the code below to change the combonation of lights that are on and off
  reg.display(1);
  reg.display(0);
  reg.display(0);
  reg.display(1);
  reg.display(1);
  reg.display(0);
  reg.display(1);
  reg.display(1);
}

void loop() {

  //Flashes the leds 
  
  reg.enable(); //turns on the outputs
  delay(1000); //waits one second
  reg.disable(); //turns off the outputs
  delay(1000); //waits 1 second




}
