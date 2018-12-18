#pragma once

#include <iosatream>

using namespace std;


double Sin(double value, double accurancy, int& count);

bool PointOfCircle(double x0, double y0, double x, double y, double radious);

bool PointOfCircleSector(double xLowerBound, double xUpperBound, double yLowerBound, double yUpperBound, double, double, double, double, double);


double Sin(double x, double accurancy, int& n)
{
	double term = x;

	double sinus = term;

	int i = 1;
	while (fabs(term) > accurancy)
	{
		term *= -(x * x) / (2 * i) / (2 * i + 1);
		sinus += term;
		i++;

	}

	n = i;

	return sinus;
}


bool PointOfCircle(double x0, double y0, double x, double y, double radious)
{
	if (((x - x0)*(x - x0) - (y - y0)*(y - y0)) <= radious * radious)
		return 1;

	return 0;
}

bool PointOfCircleSector(double xLowerBound, double xUpperBound, double yLowerBound, double yUpperBound, double x0, double y0, double x, double y, double radious)
{
	if ((xLowerBound <= x && x >= xUpperBound) && (y >= yLowerBound && y <= yUpperBound))
	{
		if (PointOfCircle(x0, y0, x, y, radious))
		{
			return 1;
		}
	}

	return 0;
}

