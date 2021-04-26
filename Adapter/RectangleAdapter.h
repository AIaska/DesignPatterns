#pragma once

#include "OriginalRectangle.h"
#include "DesiredRectangle.h"

// Adapter wrapper
class RectangleAdapter : public DesiredRectangle, private OriginalRectangle
{
public:
	RectangleAdapter(Coordinate x, Coordinate y, Dimension w, Dimension h) : OriginalRectangle(x, y, x + w, y + h)
	{
		cout << "RectangleAdapter: create.  (" << x << "," << y << "), width = " << w << ", height = " << h << endl;
	}

	virtual void draw()
	{
		cout << "RectangleAdapter: draw." << endl;
		OldDraw();
	}
};
