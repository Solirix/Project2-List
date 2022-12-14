/* Filename:  lststack.cpp

   Programmer:  Br. David Carlson

   Date:  August 8, 1998

   Modified:  July 12, 2000

   This file implements the functions of the LstStackClass found in LstStack.h.
*/

#include "lststack.hpp"


/* Given:  Nothing (other than the implicit LstStackClass object).
   Task:   To check whether this object is empty.
   Return: true if it is empty, false otherwise.
*/
bool LstStackClass::Empty(void) const
   {
   return List.Empty();   // Note the use of 2 different Empty functions!
   }


/* Given:  Item   A data item.
   Task:   To push item onto the stack (the implicit object).
   Return: Nothing directly, but the implicit object is modified.
*/
void LstStackClass::Push(const ItemType & Item)
   {
   List.InsertFront(Item);
   }


/* Given:  Nothing.
   Task:   To pop the top item from the stack (the implicit object).
   Return: Item   The item popped from the stack.
*/
void LstStackClass::Pop(ItemType & Item)
   {
   Item = List.RemoveFront();   // assumes that = works on this type
   }


