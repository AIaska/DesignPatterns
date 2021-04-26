/*
The Composite design pattern allows us to provide identical interfaces for individual objects and collections of objects.

example from sourcemaking.com
https://sourcemaking.com/design_patterns/composite - info
https://sourcemaking.com/design_patterns/composite/cpp/2 - code
*/

#include "Row.h"
#include "Column.h"

int main()
{
	Row first(1);                 // Row1
	Column second(2);             //   |
	Column third(3);              //   +-- Col2
	Row fourth(4);                //   |     |
	Row fifth(5);                 //   |     +-- 7
	first.add(&second);           //   +-- Col3
	first.add(&third);            //   |     |
	third.add(&fourth);           //   |     +-- Row4
	third.add(&fifth);            //   |     |     |
	first.add(&Primitive(6));     //   |     |     +-- 9
	second.add(&Primitive(7));    //   |     +-- Row5
	third.add(&Primitive(8));     //   |     |     |
	fourth.add(&Primitive(9));    //   |     |     +-- 10
	fifth.add(&Primitive(10));    //   |     +-- 8
								  //   +-- 6
	first.traverse();             

	cin.get();
	return 0;
}
