#pragma once

#include <iostream>

using namespace std;

//renderers "draws" shapes (only circle here as an example) on the screen in 2 forms: vector and raster
class Renderer
{
public:
	virtual void render_circle(float x, float y, float radius) = 0;
};

class VectorRenderer : public Renderer
{
public:
	void render_circle(float x, float y, float radius) override

	{
		cout << "Rasterizing circle of radius " << radius << endl;
	}
};

class RasterRenderer : public Renderer
{
public:
	void render_circle(float x, float y, float radius) override
	{
		cout << "Drawing a vector circle of radius " << radius << endl;
	}
};
