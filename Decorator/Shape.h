#pragma once

#include <string>
#include <sstream>

struct Shape
{
	virtual std::string str() const = 0;
};

struct Circle : Shape
{
	float radius;

	explicit Circle(const float radius) : radius{ radius } {}

	void resize(float factor) { radius *= factor; }

	std::string str() const override
	{
		std::ostringstream oss;
		oss << "A circle of radius " << radius;
		return oss.str();
	}
};

struct Square : Shape
{
	float side_length;

	explicit Square(const float side_length) : side_length{ side_length } {}

	void resize(float factor) { side_length *= factor; }

	std::string str() const override
	{
		std::ostringstream oss;
		oss << "A square with side length " << side_length;
		return oss.str();
	}
};

template <typename T> struct ColoredShape : T
{
	static_assert(std::is_base_of<Shape, T>::value, "Template argument must be a Shape");
	std::string color;

	template <typename...Args> ColoredShape(const std::string color, Args ...args) :
		T(std::forward<Args>(args)...),
		color {	color } {}
	std::string str() const override
	{
		std::ostringstream oss;
		oss << T::str() << " has the color " << color;
		return oss.str();
	}
};

template <typename T> struct TransparentShape : T
{
	static_assert(std::is_base_of<Shape, T>::value, "Template argument must be a Shape");
	float transparency;

	template <typename...Args> TransparentShape(const float transparency, Args ...args) :
		T(std::forward<Args>(args)...),
		transparency { transparency } {}
		std::string str() const override
		{
			std::ostringstream oss;
			oss << T::str() << " has the transparency " << transparency;
			return oss.str();
		}
};
