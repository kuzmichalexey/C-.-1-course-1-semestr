
#include <iostream>

using namespace std;

double Cosinus(double, double);

double Sinus(double, double);

double SquareRoot(double, double);

void ChoiceFunction(int, double, double, int, double);

void SineComparisonOnTheSegment(double, double, int, double);

void CosineComparisonOnTheSegment(double, double, int, double);

void SquareRootComparisonOnTheSegment(double, double, int, double);

int Factorial(int);



int main()
{
	char esc = 'y';

	while (esc == 'y' || esc == 'Y')
	{

		double a, b, accuracy;

		int numberOfIterations, numberOfFunction;

		while (true)
		{
			system("cls");

			cout << "Enter the lower and the upper borders of the section" << endl;

			cout << "The lower bound is: ";
			cin >> a;

			cout << "The upper bound is: ";
			cin >> b;

			if (a < b)
				break;

			cout << "Your section is invalid !!!" << endl;
		}

		while (true)
		{
			system("cls");

			cout << "Enter the number of iterations you want" << endl;
			cout << "The number of iterations is: ";
			cin >> numberOfIterations;

			if (numberOfIterations > 0)
				break;

			cout << "Number of iterations you enter is invalid!!! You should enter the number greater than 0" << endl;
		}

		while (true)
		{
			system("cls");

			cout << "Enter the accuracy you want" << endl;
			cout << "The accuracy is: ";
			cin >> accuracy;

			if (accuracy > 0)
				break;

			cout << "Accuracy is invalid!!! You should enter the positive accuracy" << endl;
		}

		while (true)
		{
			system("cls");

			cout << "Enter the number of function you want to count" << endl;
			cout << "The number of function is: ";
			cin >> numberOfFunction;

			if (numberOfFunction >= 1 && numberOfFunction <= 3)
				break;

			cout << "Your number of function is invalid!!! Enter the number from 1 to 3" << endl;
		}

		ChoiceFunction(numberOfFunction, a, b, numberOfIterations, accuracy);

		cout << "To continue enter the y or Y";
		cin >> esc;
		system("cls");
	}

	return 0;

}


void ChoiceFunction(int numberOfFunction, double a, double b, int numberOfIterations, double accuracy)
{

	switch (numberOfFunction)
	{
		case 1:
		{
			SineComparisonOnTheSegment(a, b, numberOfIterations, accuracy);
			break;
		}

		case 2:
		{
			CosineComparisonOnTheSegment(a, b, numberOfIterations, accuracy);
			break;
		}

		case 3:
		{
			SquareRootComparisonOnTheSegment(a, b, numberOfIterations, accuracy);
			break;
		}
	}

}


void SineComparisonOnTheSegment(double a, double b, int numberOfIterations, double accuracy)
{
	double x = a, step = (b-a) / numberOfIterations;

	for (; x <= b; x += step)
	{
		cout<<x<<"/t"<<Sinus(x, accuracy)<<sin(x)<< endl<<endl;
	}
	
}


void CosineComparisonOnTheSegment(double a, double b, int numberOfIterations, double accuracy)
{
	double x = a, step = (b - a) / numberOfIterations;

	for (; x <= b; x += step)
	{
		cout << x << "/t" << Cosinus(x, accuracy) << sin(x) << endl << endl;
	}

}


void SquareRootComparisonOnTheSegment(double a, double b, int numberOfIterations, double accuracy)
{
	double x = a, step = (b - a) / numberOfIterations;

	for (; x <= b; x += step)
	{
		cout << x << "/t" << SquareRoot(x, accuracy) << sin(x) << endl << endl;
	}

}


int Factorial(int n)
{
	int product = 1;


	if (n == 1)
		return product;

	product = Factorial(n-1);
}


double Cosinus(double x, double accuracy)
{

	double sum = 1;

	for (int i = 1; ; i++)
	{
		sum += (sum * x * x / Factorial(2 * i)) * pow(-1, i);

		if (((sum * x * x / Factorial(2 * i)) * pow(-1, i)) < accuracy)
			return sum;
	}

}

double Sinus(double x, double accuracy)
{

	double sum = 1;

	for (int i = 1; ; i++)
	{
		sum += (-1)*sum*x*x / (2 * i) / (2 * i + 1);

		if (((-1)*sum*x*x / (2 * i) / (2 * i + 1)) < accuracy)
			return sum;
	}

}
