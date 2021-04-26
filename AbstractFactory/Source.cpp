/*
An abstract factory is an abstract class that can be inherited by concrete classes that offer a family of types. Abstract factories are rare in the wild.

example from sourcemaking.com
https://sourcemaking.com/design_patterns/abstract_factory - info
https://sourcemaking.com/design_patterns/abstract_factory/cpp/2 - code
*/

#include "Factory.h"
#include "Shape.h"


int main()
{
	Factory* factory = new RobustShapeFactory;
	Shape* shapes[3];

	shapes[0] = factory->createCurvedInstance();   // shapes[0] = new Ellipse;
	shapes[1] = factory->createStraightInstance(); // shapes[1] = new Rectangle;
	shapes[2] = factory->createCurvedInstance();   // shapes[2] = new Ellipse;

	for (int i = 0; i < 3; i++)
	{
		shapes[i]->draw();
	}

	std::cin.get();
	return 0;
}

