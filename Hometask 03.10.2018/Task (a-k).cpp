#include <iostream>

using namespace std;

double SumChoice(int, int);

double Sum1(int);

double Sum2(int);

double Sum3(int);

double Sum4(int);

double Sum5(int);

double Sum6(int);

double Sum7(int);

double Sum8(int);

double Sum9(int);

double Sum10(int);

int Factorial(int);

double SinusesSum(int);


int main()
{
	char esc = 'y';

	int n, number;

	while (esc == 'y' || esc == 'Y')
	{
		while (true)
		{
			cout << "Enter the number of sum you want to count" << endl;
			cout << "Sum ¹ ";
			cin >> number;

			cout << "Enter the number of operations" << endl;
			cout << "Number of operations is: ";
			cin >> n;

			system("cls");

			if (SumChoice(number, n))
				break;

			cout << "Tne number of the sum is invalid1!! Enter the number from 1 to 10" << endl;
		}

		cout << "The sum is: " << SumChoice(number, n) << endl;
		
		cout << "To continue enter the y or Y" << endl;
		cin >> esc;
		system("cls");
	}

	return 0;

}


double SumChoice(int number, int n)
{
	switch (number)
	{
		case 1:
			return Sum1(n);

		case 2:
			return Sum2(n);

		case 3:
			return Sum3(n);

		case 4:
			return Sum4(n);

		case 5:
			return Sum5(n);

		case 6:
			return Sum6(n);

		case 7:
			return Sum7(n);

		case 8:
			return Sum8(n);

		case 9:
			return Sum9(n);

		case 10:
			return Sum10(n);

		default:
			return 0;

	}
}


double Sum1(int n)
{
	double sum = 0;

	for ( double i = 1; i <= n; i++)
	{
		sum += 1 / i;
	}

	return sum;
}


double Sum2(int n)
{
	double sum = 1;

	for (int i = 1; i <= n; i++)
	{
		sum *= 2;
	}

	return sum;
}


double Sum3(int n)
{
	double sum = 1;

	for(double i = 1; i <= n; i++)
	{
		sum *= (1 + 1 / i / i);
	}

	return sum;
}


double Sum4(int n)
{
	double sum = 0;

	for(double i = 1; i <= n; i++)
	{
		sum += pow(-1, i + 1) / i / (i + 1);
	}

	return sum;
}


double Sum5(int n)
{
	double sum = 0;

	for (double i = 1; i <= n; i++)
	{
		sum += 1 / i / i / i / i / i;
	}

	return sum;
}


double Sum6(int n)
{
	double sum = 0;

	for (double i = 1; i <= n; i++)
	{
		sum += 1 / (i*2 + 1) / (i*2 + 1);
	}

	return sum;
}


double Sum7(int n)
{
	double sum = 0;

	for (double i = 1; i <= n; i++)
	{
		sum += pow(-1, i) / (i * 2 + 1);
	}

	return sum;
}


double Sum8(int n)
{
	double sum = 0;

	for(int i = 1; i <= n; i++)
	{
		sum += Factorial(i) / Sum1(i);
	}

	return sum;
}



double Sum9(int n)
{

	double sum = sqrt(2);

	for(int i = 2; i <= n; i++)
	{
		sum = sqrt(sum + 2);
	}

	return sum;
}



double Sum10(int n)
{
	double sum = 0;

	for(int i = 1; i <= n; i++)
	{
		sum += SinusesSum(i);
	}

	return sum;
}


int Factorial(int n)
{
	int product = 1;


	if (n == 1)
		return product;

	product = Factorial(n);
}

double SinusesSum(int n)
{
	int sum = 0;

	for(int i = 1; i <= n; i++)
	{
		sum += sin(i);
	}
	
	return sum;
}