/*
The Singleton design pattern grew out of a very simple idea that you should only have one instance of a particular component in your application.

example from Design Patterns in Modern C++ — Dmitri Nesteruk
p.75-86 (Singleton) - info
p.77-78 - code
*/

#include "Database.h"


int main()
{
	Database::get_db();

	auto data = Database::get_info();

	return 0;
}
