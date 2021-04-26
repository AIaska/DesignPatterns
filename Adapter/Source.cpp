/*
We are given an interface, but we want a different one, and building an adapter over the interface is what gets us to where we want to be.
Adapter is a very simple concept : it allows you to adapt the interface you have to the interface you need.

example from sourcemaking.com
https://sourcemaking.com/design_patterns/adapter - info
https://sourcemaking.com/design_patterns/adapter/cpp/1 - code
*/

#include "RectangleAdapter.h"

int main()
{
	DesiredRectangle *r = new RectangleAdapter(120, 200, 60, 40);
	r->draw();

	cin.get();
	return 0;
}