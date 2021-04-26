#pragma once

#include "Composite.h"

//1st "container" class
class Row : public Composite
{
public:
	Row(int val) : Composite(val) {}

	void traverse()
	{
		cout << "Row";
		Composite::traverse();
	}
};
