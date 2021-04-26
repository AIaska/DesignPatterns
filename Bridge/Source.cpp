/*
The Bridge is  connecting two pieces together. The use of interfaces allows components to interact with one another without being aware of the concrete implementations.

example from Design Patterns in Modern C++ — Dmitri Nesteruk
p.63-74 (Prototype) - info
p.64-67, 72-73 - code
*/

#include "Shape.h"

int main()
{
	RasterRenderer rr; 
	Circle raster_circle{ rr, 5,5,5 }; 
	raster_circle.draw(); 
	raster_circle.resize(2); 
	raster_circle.draw();

	cin.get();
	return 0;
}
