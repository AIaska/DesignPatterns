#pragma once

#include "Composite.h"

//2nd "container" class
class Column : public Composite
{
public:
	Column(int val) : Composite(val) {}
	void traverse()
	{
		cout << "Col";
		Composite::traverse();
	}
};
