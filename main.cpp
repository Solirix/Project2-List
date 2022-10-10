/* Filename:  main.cpp

   Programmer:  Aiden Buterbaugh

   Date:  September 28, 2022

   Last Modified:  October 10, 2022

   This program prompts the user to enter a positive, base 10 integer and converts it to base 16 (0 is used to exit).

   Tested with:
      g++ in Linux
*/

#include "lststack.hpp"

//Given: a remainder greater than 9
//Task: convert that number to it's hex value
//Return: alphanumeric character associated with that value
char convertToHex(int numToConvert);

//Given: initial quotient
//Task: calculate the modulo 16 to find the remainder
//Return: the remainder after division and subtraction
int calculateRemainder(int parentQuotient);

//Given: nothing
//Task: Print the stack and determine if a remainder needs converted
//Return: the list of remainders in reverse order
void popAndPrint(LstStackClass& Stack);

int main(void) {
   LstStackClass Stack; 
   int userNum = 0;
   int remainder = 0;                                   // variable initialization
   int quotient, nextQuotient = 0;


   for (int i = 0; i >= 0; ++i) {  // infinite loop (break is applied if user enters 0)
      std::cout << "Please enter a positive base 10 integer (or 0 to end the program)\n"; // prompt
      std::cin >> userNum;    

         if (userNum == 0) {  // checks for userinput of 0
            break;           // breaks out of the loop if true
         }
         else if (userNum < 0) {       // Checking for negative input and ending the program if true
            std::cout << "Please do not enter a negative integer.\n";
            std::cout << "The program will now end\n";
            break;                  // breaks if the user entered a negative integer
         }
         else {
            quotient = userNum;             // if the user entered a positive, base 10 integer, set quotient equal to userNum (for easier loop usage later)
         }


      do {

         remainder = calculateRemainder(quotient);          
         
         Stack.Push(remainder);       // push the current remainder onto the stack

         nextQuotient = quotient / 16;
         quotient = nextQuotient;        //preparing for the next iteration of the loop

      } while (quotient != 0);   // continue until the quotient becomes 0

      popAndPrint(Stack);    // output everything in the stack
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
      std::cout << "ERROR - Remainder is not within the 0-15 range to be converted\n";  // case just in case an integer ends up incorrect
      return 'Z';
   }
}

int calculateRemainder(int quotient) {
   int remainder = 0;

   remainder = quotient % 16; // calculate the remainder of the user input 
      /*
      This does 

      quotient / 16 = X
      quotient - X = remainder
      
      and this works because of the way integer division rounds down
      */

     return remainder;
}

void popAndPrint(LstStackClass& Stack) {
   ItemType Item;
   char remainderAsHex = 'A'; 
   std::cout << "All remainders as hex: \n";

   while (Stack.Empty() != true) {        // continue until the stack is empty
      Stack.Pop(Item);        // pop the most previous item to convert or display
      
      if (Item > 9) {       // convert the item to hex if needed
         remainderAsHex = convertToHex(Item);
         std::cout << remainderAsHex << endl;
      }
      else {              // unless it isn't needed, then just output it
         std::cout << Item << endl;
      }
   }
}