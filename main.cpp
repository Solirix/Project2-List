/* Filename:  main.cpp

   Programmer:  Aiden Buterbaugh

   Date:  September 28, 2022

   Last Modified:  October 2, 2022

   This program prompts the user to enter a positive, base 10 integer and converts it to base 16 (0 is used to exit).

   Tested with:
      g++ in Linux
*/

#include "lststack.hpp"


int main(void) {
   LstStackClass Stack;
   int userNum = 1;

   while (userNum != 0) {
      cout << "Please enter a positive base 10 integer: \n";
      cin >> userNum;
   }   

   return 0;
}