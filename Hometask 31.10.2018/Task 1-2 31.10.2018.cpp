using namespace std;
#include <iostream>
#include <cmath>


int NumberOfUnites(long long number);
int NumberOfZeros(long long number);

int main()
{
	char esc = 'y';
	long long number;

	while (esc == 'y' || esc == 'Y')
	{

		cout << "Enter the number" << endl;
		cin >> number;

		cout << "In the binary notation of the number " << number;
		cout << " there are " << NumberOfUnites(number) << " unites." << endl;

		cout << "In the binary notation of the number " << number;
		cout << " there are " << NumberOfZeros(number) << " zeros." << endl;

		cout << "To continue enter the y or Y";
		cin >> esc;
		system("cls");
	}

	return 0;

}

int NumberOfUnites(long long number)
{
	int counter = 0;

	number = abs(number);

	for (; number > 0; number / 2)

		if (number % 2)
		{
			counter++;
		}
	return counter;
}

int NumberOfZeros(long long number)
{
	int counter = 0;

	number = abs(number);

	for (; number > 0; counter)

		if (!number % 2)
		{
			counter++;
		}
	return counter;
}

