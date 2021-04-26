#pragma once

#include "Time.h"

class ZuluTimeImp : public TimeImp
{
public:
	ZuluTimeImp(int hr, int min, int zone) : TimeImp(hr, min)
	{
		if (zone == 5)
			strcpy_s(m_zone, " Eastern Standard Time");
		else if (zone == 6)
			strcpy_s(m_zone, " Central Standard Time");
	}

	void tell() override
	{
		cout << "time is " << setw(2) << m_hr << m_min << m_zone <<
			endl;
	}
protected:
	char m_zone[30];
}; 

class ZuluTime : public Time
{
public:
	ZuluTime(int hr, int min, int zone)
	{
		time_impl = new ZuluTimeImp(hr, min, zone);
	}
};