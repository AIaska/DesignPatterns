#pragma once

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class TimeImp
{
public:
	TimeImp(int hr, int min)
	{
		m_hr = hr;
		m_min = min;
	}
	virtual void tell()
	{
		cout << "time is " << setw(2) << m_hr << m_min << endl;
	}
protected:
	int m_hr, m_min;
};

class Time
{
public:
	Time()
	{

	}

	Time(int hr, int min)
	{
		time_impl = new TimeImp(hr, min);
	}

	virtual void tell()
	{
		time_impl->tell();
	}

protected:
	TimeImp *time_impl;
};