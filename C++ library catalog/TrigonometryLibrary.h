#pragma once

#include <iosatream>

using namespace std;


double Sin(double value, double accurancy, int& count);


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

