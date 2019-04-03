/* ShiftRegister.h
   Libery for controling SN74HC595 shift register
   Created By Ryan Matheson on 4/2/19
   Arduino Version - 1.8.9

   Example - using arrays to control outputs
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
SN74HC595_5pin reg(1, 12, 11, 10, 9, 8); // UNCOMMENT THIS LINE FOR 5 PIN MODE--------------------------5 PIN--------------------------

int numOfPins = 8; //number of outputs on the shift register

void setup() {
}

void loop() {

  int value[] = {1, 0, 1, 1, 0, 0, 1, 0}; //contains the 8 bits we will program into the shift register

  //writes the values to the shift register based on what is contained in the value[] array
  for (int i = numOfPins - 1; i >= 0; i--) {
    reg.display(value[i]);
    //delay(750); //this line
  }

  /*You may have noticed that this code sends the shift register the values from "value[]" backwards. (sending it from postion 7 to 0 insted of 0 to 7)
     This is because as we write data to the outputs, each new bit that goes into the register, it moves all other bits down one spot
     if you uncomment the delay() statement inside the for loops, you will be able to see this happen.
  */

  delay(1000); // waits one second

  int value2[] = {0, 1, 0, 0, 1, 1, 0, 1}; //sets the 8 bits to the opposite of whats above

  //writes the values to the shift register based on what is contained in the value2[] array
  for (int i = numOfPins - 1; i >= 0; i--) {
    reg.display(value2[i]);
    //delay(750); //this line
  }

  delay(1000); // waits one second

}
