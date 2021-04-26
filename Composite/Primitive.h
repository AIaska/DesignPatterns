#pragma once

#include <iostream>

#include "Component.h" 

using namespace std;

class Primitive : public Component
{
	int value;

public:
	Primitive(int val)
	{
		value = val;
	}

	void traverse()
	{
		cout << value << "  ";
	}
};
