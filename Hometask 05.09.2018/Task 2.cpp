#include <iostream>

using namespace std;


bool PointOfCircle(double x0, double y0, double x, double y, double radious);

bool PointOfCircleSector(double xLowerBound, double xUpperBound, double yLowerBound, double yUpperBound);



int main()
{
	char esc = 'y';
	double a, b, c;

	while (esc == 'y' || esc == 'Y')
	{
		double xLowerBound, xUpperBound, yLowerBound, yUpperBound, x0, y0, x, y, radious;

		cout << "Enter the cordinates of the circle center" << endl;
		cin >> x0;
		cin >> y0;

		cout << "Enter the cordinates of the point" << endl;
		cin >> x;
		cin >> y;

		cout << "Enter the interval of the Ox cordinate of the sector" << endl;
		cin >> xLowerBound;
		cin >> xUpperBound;

		cout << "Enter the interval of the Oy cordinate of the sector" << endl;
		cin >> yLowerBound;
		cin >> yUpperBound;

		cout << "Enter the radious of the circle" << endl;
		cin >> radious;

		if (PointOfCircleSector( xLowerBound, xUpperBound, yLowerBound, yUpperBound, x0, y0, x, y, radious))
			cout << "This point is in this circle sector" << endl;
		else
			cout << "This point is not in this circle sector" << endl;

		cout << "To continue enter the y or Y";
		cin >> esc;
		system("cls");
	}

	return 0;
}


bool PointOfCircle(double x0, double y0, double x, double y, double radious)
{
	if (((x - x0)*(x - x0) - (y - y0)*(y - y0)) == radious * radious)
		return 1;

	return 0;
}

bool PointOfCircleSector(double xLowerBound, double xUpperBound, double yLowerBound, double yUpperBound, double x0, double y0, double x, double y, double radious)
{
	if(xLowerBound<=x && x>= xUpperBound && y>=yLowerBound && y<=yUpperBound)
	{
		if (PointOfCircle(x0, y0, x, y, radious))
		{
			return 1;
		}
	}

	return 0;
}



