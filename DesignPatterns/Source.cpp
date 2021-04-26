/*
The goal of the Builder pattern is to define a component dedicated entirely to piecewise construction of a complicated object or set of objects.

example from sourcemaking.com
https://sourcemaking.com/design_patterns/builder - info
https://sourcemaking.com/design_patterns/builder/cpp/1 - code
*/


#include <iostream>
#include <stdio.h>

#include "Builder.h"
#include "UnixBuilder.h"
#include "VmsBuilder.h"
#include "Reader.h"
#include "DistrWorkPackage.h"

using namespace std;

int main()
{
	UnixBuilder unixBuilder;
	VmsBuilder vmsBuilder;
	Reader reader;

	reader.setBuilder(&unixBuilder);
	reader.construct(input, NUM_ENTRIES);
	cout << unixBuilder.getResult()->getState() << endl;

	reader.setBuilder(&vmsBuilder);
	reader.construct(input, NUM_ENTRIES);
	cout << vmsBuilder.getResult()->getState() << endl;

	cin.get();
	return 0;
}