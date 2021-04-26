#pragma once

class Database
{
protected:
	Database()
	{
		/* load database */
		data = 148;
	}

	static int data;

public:
	static Database& get_db()
	{
		// thread-safe in C++11 
		static Database database;
		return database;
	}

	Database(Database const&) = delete;
	Database(Database&&) = delete;
	Database& operator=(Database const&) = delete;
	Database& operator=(Database &&) = delete;

	static int get_info()
	{
		return data;
	}

};

int Database::data = 0;