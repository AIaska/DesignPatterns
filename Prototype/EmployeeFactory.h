#pragma once

#include "Contact.h"

class EmployeeFactory
{
public:
	static unique_ptr<Contact> NewMainOfficeEmployee(string name, int suite)
	{
		return NewEmployee(name, suite, main);
	}

	static unique_ptr<Contact> NewAuxOfficeEmployee(string name, int suite)
	{
		return NewEmployee(name, suite, aux);
	}

private:
	static Contact main;
	static Contact aux;

	static unique_ptr<Contact> NewEmployee(string name, int suite, Contact& proto)
	{
		auto result = make_unique<Contact>(proto);
		result->name = name;
		result->address->suite = suite;
		return result;
	}
};

Contact EmployeeFactory::main = Contact("prototype", new Address{ "prototype", "prototype", 0 });
Contact EmployeeFactory::aux = Contact("prototype", new Address{ "prototype", "prototype", 0 });
