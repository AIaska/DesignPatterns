/*
Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.
Factory is different from Builder in that, with a Factory, you typically create an object in one go, whereas with Builder,
you construct the object piecewise by providing information in parts.

example from Design Patterns in Modern C++ — Dmitri Nesteruk
p.52 (Factory) - info
p.52-53 - code
*/

#include <iostream>

 class Point
 {
 public:
	 float x, y;
	 friend class PointFactory;

	 friend std::ostream& operator<<(std::ostream& output, const Point& p)
	 {
		 output << "Point coordinates " << p.x << " " << p.y << std::endl;
		 return output;
	 }

 private:
	 Point(float x, float y) : x(x), y(y)
	 {

	 }
 };


 class PointFactory
 {
 public:
	 static Point NewCartesian(float x, float y)
	 {
		 return Point{ x,y };
	 }

	 static Point NewPolar(float r, float theta)
	 {
		 return Point{ r*cos(theta), r*sin(theta) };
	 }
 };


 int main()
 {
	 Point my_cartesian_point = PointFactory::NewCartesian(3, 4);
	 Point my_polar_point = PointFactory::NewPolar(3, 4);

	 std::cout << my_cartesian_point << my_polar_point;

	 std::cin.get();
	 return 0;
 }

