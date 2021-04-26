#pragma once

#include "Builder.h"
#include "DistrWorkPackage.h"

class VmsBuilder : public Builder
{
public:
	VmsBuilder()
	{
		_result = new DistrWorkPackage("Vms");
	}
	void configureFile(char *name)
	{
		_result->setFile("ISAM", name);
	}
	void configureQueue(char *queue)
	{
		_result->setQueue("priority", queue);
	}
	void configurePathway(char *type)
	{
		_result->setPathway("LWP", type);
	}
};
