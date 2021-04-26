#pragma once

#include "Time.h"

class CivilianTimeImp : public TimeImp
{
public:
	CivilianTimeImp(int hr, int min, int pm) : TimeImp(hr, min)
	{
		pm ? strcpy_s(m_whichM, " PM") : strcpy_s(m_whichM, " AM");
	}

	void tell() override
	{
		cout << "time is " << m_hr << ":" << m_min << m_whichM << endl;
	}

protected:
	char m_whichM[4];
}; 

class CivilianTime : public Time
{
public:
	CivilianTime(int hr, int min, int pm)
	{
		time_impl = new CivilianTimeImp(hr, min, pm);
	}
};