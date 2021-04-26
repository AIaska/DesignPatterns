#pragma once

#include <iostream>

using namespace std;

class Address
{
public:

	string street;
	string city;
	int suite;

	Address(const string& street, const string& city, const int suite) : street{ street }, city{ city }, suite{ suite }
	{

	}
};
