#pragma once

#include "Renderer.h"

class Shape
{
protected:
	Renderer& renderer; // this is a bridge
	Shape(Renderer& renderer) : renderer{ renderer }
	{

	}

public:
	virtual void draw() = 0;
	virtual void resize(float factor) = 0;
};

class Circle : public Shape
{
public:
	Circle(Renderer& renderer, float x, float y, float radius) : Shape{ renderer }, x{ x }, y{ y }, radius{ radius }
	{

	}

	float x, y, radius;

	void draw() override
	{
		renderer.render_circle(x, y, radius);
	}

	void resize(float factor) override
	{
		radius *= factor;
	}
};
