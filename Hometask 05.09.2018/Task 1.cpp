#include <iostream>

using namespace std;


int TypeOfTriangle(double, double, double);


int main()
{
	char esc = 'y';
	double a, b, c;

	while (esc == 'y' || esc == 'Y')
	{

		while (true)
		{
			cout << "Enter the first side of the triangle" << endl;
			cin >> a;


			cout << "Enter the second side of the triangle" << endl;
			cin >> b;


			cout << "Enter the third side of the triangle" << endl;
			cin >> c;

			if (a > 0 && b > 0 && c > 0)
				break;
					
			cout << "Your sides is invalid!!! Enter the positive numbers"<<endl<<endl;

		}


		if (TypeOfTriangle(a, b, c) == 1)
			cout << "This triangle is equilateral" << endl;

		if (TypeOfTriangle(a, b, c) == 2)
			cout << "This triangle is isosceles" << endl;

		if (TypeOfTriangle(a, b, c) == 3)
			cout << "This triangle is versatile" << endl;

		if (!TypeOfTriangle(a, b, c))
			cout << "This triangle does not exist" << endl;


		cout << "To continue enter the y or Y";
		cin >> esc;
		system("cls");
	}

	return 0;
}


int TypeOfTriangle(double a, double b, double c)
{

	if (c > a + b || b > a + c || a > b + c)
		return 0;

	if (a == c && a == b)
		return 1;

	if (a == b || a == c || b == c)
		return 2;
		
	return 3;
}





