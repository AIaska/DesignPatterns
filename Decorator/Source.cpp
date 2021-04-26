/*
A decorator gives a class additional functionality while adhering to the OCP. Decorator can be dynamic, static or functional.
Dynamic - can store references or entire values of the decorated objects and provide dynamic (runtime) composability, at the
expense of not being able to access the underlying objects’ own members.
Static - use inheritance from template parameter to compose decorators at compile-time. No runtime flexibility (you cannot 
recompose objects) but you can access the underlying object’s members.
Functional - applied not to classes but to blocks of code or particular functions to allow composition of behaviors.

example from Design Patterns in Modern C++ — Dmitri Nesteruk 'Design patterns in modern C'
p.119-132 (Decorator) - info
p.124-126 - code (static decorator)
*/

#include <iostream>
#include "Shape.h"

int main() {
	ColoredShape<TransparentShape<Square>> sq = { "red", 0.1, 5 };
	std::cout << sq.str() << std::endl;

	TransparentShape<Circle> c = { 0.8, 3.3 };
	c.resize(2);
	std::cout << c.str() << std::endl;

	system("pause");
	return 0;
}