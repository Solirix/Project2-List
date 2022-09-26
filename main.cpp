/* Filename:  reverse.cpp

   Programmer:  Br. David Carlson

   Date:  March 28, 1998

   Last Modified:  March 14, 2014

   This program prompts the user to enter a sequence of numbers (floats)
   and then prints them in reverse order.  (Change the CTRL z to CTRL d
   for Linux.)

   Tested with:
      Microsoft Visual Studio 2008
      Microsoft Visual Studio 2010
      g++ in Linux
*/

#include "lststack.h"


int main(void)
   {
   LstStackClass Stack;
   ItemType Number, Item;

   // Change CTRL z to CTRL d for Linux:
   cout << "Enter a number (CTRL z to end): ";
   cin >> Number;

   while (! cin.fail())
      {
      Stack.Push(Number);
      // Change CTRL z to CTRL d for Linux:
      cout << "Enter another number (CTRL z to end): ";
      cin >> Number;
      }

   if (Stack.Empty())
      cout << endl << endl << "Stack is empty" << endl;
   else
      {
      cout << endl << endl << "Numbers in reverse order are:" << endl;
      while (! Stack.Empty())
         {
         Stack.Pop(Item);
         cout << Item << endl;
         }
      }

   return 0;
   }

