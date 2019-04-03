/* ShiftRegister.h
   Libery for controling SN74HC595 shift register
   Created By Ryan Matheson on 4/2/19
   Arduino Version - 1.8.9

   Example - Write and Display Internal Register
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


void setup() {
}

void loop() {

  //writes alternating 1's and 0's to the internal register
  reg.writeReg(1);
  reg.writeReg(0);
  reg.writeReg(1);
  reg.writeReg(0);
  reg.writeReg(1);
  reg.writeReg(0);
  reg.writeReg(1);
  reg.writeReg(0);
  
  //moves value from internal register to display
  reg.displayReg();
 
  delay(1000); // waits 1 second

  reg.clearReg(); // clears internal Register
  reg.clearDisplay(); // clears display and internal register

  delay(1000); // waits 1 second
}
