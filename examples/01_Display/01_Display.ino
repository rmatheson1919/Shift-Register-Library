/* ShiftRegister.h
   Libery for controling SN74HC595 shift register
   Created By Ryan Matheson on 4/2/19
   Arduino Version - 1.8.9

   Example - Display
   Mode - 3-pin or 5-pin

   Circuit diagram in "extras" folder in libery diagram
*/

#include <ShiftRegister.h> //include the librery

//============================================
//UNCOMMENT ONE LINE BELOW FOR 3 OR 5 PIN MODE
//============================================

//3 pin mode -- parameters (number of shift registers, serPin, rclkPin, srclkPin)
//SN74HC595_3pin reg(1, 12, 10, 9); //UNCOMMENT THIS LINE FOR 3 PIN MODE----------------------------------3 PIN--------------------------
//5 pin mode -- parameters (number of shift registers, serPin, oePin, rclkPin, srclkPin, srclrPin)
//SN74HC595_5pin reg(1, 12, 11, 10, 9, 8); // UNCOMMENT THIS LINE FOR 5 PIN MODE--------------------------5 PIN--------------------------

int numOfPins = 8; //number of outputs on the shift register

void setup() {
}

void loop() {
  //note: Can be simplied into for loops
  //note: parameter of the display() function can be changed on the rising side to get a differnt combonation of lights 

  //turns on one led at a time
  reg.display(1);
  delay(750);
  reg.display(1);
  delay(750);
  reg.display(1);
  delay(750);
  reg.display(1);
  delay(750);
  reg.display(1);
  delay(750);
  reg.display(1);
  delay(750);
  reg.display(1);
  delay(750);
  reg.display(1);

  delay(2000); //holds for 2 seconds

  //turns off one led at at a time. Simplifed into a for loop
  for (int i = numOfPins; i > 0; i--) {
    reg.display(0);
    delay(750);
  }

  delay(2000); // holds for 2 seconds
}
