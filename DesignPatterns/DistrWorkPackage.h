#pragma once

class DistrWorkPackage
{
public:
	DistrWorkPackage(const char *type)
	{
		sprintf_s(_desc, "Distributed Work Package for: %s", type);
	}
	void setFile(const char *f, const char *v)
	{
		sprintf_s(_temp, "\n  File(%s): %s", f, v);
		strcat_s(_desc, _temp);
	}
	void setQueue(const char *q, const char *v)
	{
		sprintf_s(_temp, "\n  Queue(%s): %s", q, v);
		strcat_s(_desc, _temp);
	}
	void setPathway(const char *p, const char *v)
	{
		sprintf_s(_temp, "\n  Pathway(%s): %s", p, v);
		strcat_s(_desc, _temp);
	}
	const char *getState()
	{
		return _desc;
	}
private:
	char _desc[250], _temp[80];
};
