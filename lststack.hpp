/* Filename:  lststack.h

   Programmer:  Br. David Carlson

   Date:  March 28, 1998
   
   Revised:  March 7, 2014 to not use an abstract base class.

   This is the header file to accompany LstStack.cpp.  They provide the
   LstStackClass, a list-based implementation of a stack.
*/
#pragma once

#include "list.hpp"


class LstStackClass
   {
   public:
      // No constructor is mentioned here.  We instead use the default
      // constructor automatically supplied by the compiler.
      bool Empty(void) const;
      void Push(const ItemType & Item);
      void Pop(ItemType & Item);
   private:
      ListClass List;   // an embedded List object
   };


