/* Filename:  main.cpp

   Programmer:  Aiden Buterbaugh

   Date:  September 28, 2022

   Last Modified:  October 8, 2022

   This program prompts the user to enter a positive, base 10 integer and converts it to base 16 (0 is used to exit).

   Tested with:
      g++ in Linux
*/

#include "lststack.hpp"


void standardStackDriver(int userInput);
int standardStack(int originalQuotient);

int main(void) {
   LstStackClass Stack;
   int userNum = 1; 

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

   return 0;
}