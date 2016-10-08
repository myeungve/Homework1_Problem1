#pragma once

#include "Draw.h"

class Circle
{
public:
	int x, y, r;

	Circle(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 1.0f, 0.0f, 0.0f);
	}
};

class Doughnut
{
public:
	int x, y, r;

	Doughnut(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawDoughnut(x, y, r, 1.0f, 0.0f, 0.0f);
	}
};