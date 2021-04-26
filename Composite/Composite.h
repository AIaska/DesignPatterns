#pragma once

#include <vector>

#include "Primitive.h" 

//key logic here
class Composite : public Component
{
	vector <Component*> children;
	int value;

public:
	Composite(int val)
	{
		value = val;
	}
	
	void add(Component *c)
	{
		children.push_back(c);
	}

	void traverse()
	{
		cout << value << "  ";
		for (int i = 0; i < children.size(); i++)
			children[i]->traverse();
	}
};
