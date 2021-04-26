/*
Prototype is about deep copying of objects; instead of full initialization you copy a premade object, change it a bit, and use it independently from the original.

example from Design Patterns in Modern C++ — Dmitri Nesteruk
p.63-74 (Prototype) - info
p.64-67, 72-73 - code
*/

#include "EmployeeFactory.h"

int main()
{
	auto john = EmployeeFactory::NewAuxOfficeEmployee("John Doe", 123);
	auto jane = EmployeeFactory::NewMainOfficeEmployee("Jane Doe", 125);

	john->address->city = "Lviv";
	jane->address->street = "Bandery";

	cin.get();
	return 0;
}
