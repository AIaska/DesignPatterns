#pragma once

#include "Shape.h"

class Factory
{
public:
	virtual Shape* createCurvedInstance() = 0;
	virtual Shape* createStraightInstance() = 0;
};

class SimpleShapeFactory : public Factory
{
public:
	Shape* createCurvedInstance()
	{
		return new Circle;
	}
	Shape* createStraightInstance()
	{
		return new Square;
	}
};

class RobustShapeFactory : public Factory
{
public:
	Shape* createCurvedInstance()
	{
		return new Ellipse;
	}
	Shape* createStraightInstance()
	{
		return new Rectangle;
	}
};
