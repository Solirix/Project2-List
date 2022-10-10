/* Filename:  main.cpp

   Programmer:  Aiden Buterbaugh

   Date:  September 28, 2022

   Last Modified:  October 8, 2022

   This program prompts the user to enter a positive, base 10 integer and converts it to base 16 (0 is used to exit).

   Tested with:
      g++ in Linux
*/

#include "lststack.hpp"


char convertToHex(int numToConvert);

int main(void) {
   LstStackClass Stack; 
   int userNum = 0;
   int remainder = 0;

/*
getting remainders, putting them on the stack, then popping them off the stack

user enters any numeber, you divide that mumber by 16 to convert to hex, until you get a quotient of 0. THat is when it stops

ex.
 3470     SECRET: JUST DO 3470 mod 16 to get 14!! the remainder!!! (don't forget the next step is 216 mod 16... so on)
 divide by 16
 rounds down to 216
 now take 216, and multiply it by 16 since you divided by 16
 3470 - ANSWER to get remainder
 14 is remainder for this one. this gets pushed onto the stack - nothing else is done with it
 
   now take 216, divide by 16..

   do this repeatedly until it rounds down to 0, finish it, and do nothing after. that's it!

   now just pop everything off the stack!


   NOTE: in hex, 0 through 9 is just the number, but 10 is A, 11 is B, so on... CONVERT ANY DOUBLE DIGIT NUMS TO HEX BEFORE DISPLAYING (all on one line too)

when quotient is 0, remiander ends up being 13.. so most recent stack push should be 13 when finished
*/


   for (int i = 0; i >= 0; ++i) {
      std::cout << "Please enter a positive base 10 integer (or 0 to end the program)\n";

      std::cin >> userNum;

      remainder = userNum % 16;

   }




   return 0;
}

char convertToHex(int numToConvert) {
   if (numToConvert == 10) {
      return 'A';
   }
   else if (numToConvert == 11) {
      return 'B';
   }
   else if (numToConvert == 12) {
      return 'C';
   }
   else if (numToConvert == 13) {
      return 'D';
   }
   else if (numToConvert == 14) {
      return 'E';
   }
   else if (numToConvert == 15) {
      return 'F';
   }
   else {
      std::cout << "ERROR - Remainder is not within the 0-15 range to be converted\n";
      return 'Z';
   }
}