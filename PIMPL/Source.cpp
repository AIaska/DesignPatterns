/*
Pimpl is a illustration of the Bridge.
A larger proportion of the class implementation is hidden. Modifying the data members of the hidden Impl class does not affect binary compatibility.
The header file only needs to include the header files needed for the declaration, not the implementation.

example from sourcemaking.com
https://sourcemaking.com/design_patterns/bridge - info
https://sourcemaking.com/design_patterns/bridge/cpp/1 - code
*/


#include "CivilianTime.h"
#include "ZuluTime.h"

int main()
{
	Time *times[3];
	times[0] = new Time(14, 30);
	times[1] = new CivilianTime(2, 30, 1);
	times[2] = new ZuluTime(14, 30, 6);
	for (int i = 0; i < 3; i++)
		times[i]->tell();

	cin.get();
	return 0;
}