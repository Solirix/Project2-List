/* Filename:  itemtype.h

   Programmer:  Br. David Carlson

   Date:  October 7, 1997

   Modified:  August 8, 1998

   Modified:  June 27, 2000

   This header file is used to define ItemType.  Modify this file to 
   define the kind of data you wish to place in your linked list.  If the
   data type does not have == and > operators, you will need to provide
   overloaded ones, perhaps by using a class for this data type.
*/

// The following keeps ItemType.h from being included more than once:
#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>
using namespace std;

typedef float ItemType;

#endif


