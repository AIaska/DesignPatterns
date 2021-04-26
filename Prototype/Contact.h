#pragma once

#include "Address.h"
	
class Contact
{
public:
	friend class EmployeeFactory;

	string name;
	Address* address;

	Contact(const string& name_value, Address* address_value) : name(name_value), address(address_value)
	{

	}

	Contact(const Contact& other) : name{ other.name }, address{ new Address{*other.address} }
	{

	}

	Contact& operator=(const Contact& other)
	{
		if (this == &other)
			return *this;

		name = other.name;
		address = other.address;
		return *this;
	}
};
