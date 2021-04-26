#pragma once

#include <iostream>

using namespace::std;

class Shape
{
public:
	Shape()
	{
		id_ = total_++;
	}
	virtual void draw() = 0;
protected:
	int id_;
	static int total_;
};

int Shape::total_ = 0;

class Circle : public Shape
{
public:
	void draw()
	{
		cout << "circle " << id_ << ": draw" << endl;
	}
};

class Square : public Shape
{
public:
	void draw()
	{
		cout << "square " << id_ << ": draw" << endl;
	}
};

class Ellipse : public Shape
{
public:
	void draw()
	{
		cout << "ellipse " << id_ << ": draw" << endl;
	}
};

class Rectangle : public Shape 
{
public:
	void draw()
	{
		cout << "rectangle " << id_ << ": draw" << endl;
	}
};