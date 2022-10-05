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



*/

   return 0;
}


void standardStackDriver(int userInput) {
    int quotient=userInput;
    int remainder =-1;

    while (quotient != 0) {
        quotient = standardStack(quotient);
        //push the remainder into the stack
    }
}

int standardStack(int originalQuotient) {
    int remainder;
    int quotient;
    quotient = originalQuotient/16;
    if (quotient == 1) {
        remainder = 0;
    }
    else {
        remainder = originalQuotient - (quotient * 16);
    }
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;
    std::cout << endl;
    //push remainder here!
    return quotient;
}