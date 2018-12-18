using namespace std;
#include <iostream>
#include <cmath>


int NumberOfUnites(long long);
int NumberOfZeros(long long);

int main()
{
	char esc = 'y';

	while (esc == 'y' || esc == 'Y')
	{
		const int N = 3;
		int numbers[N] = { 465446, 6, -87 };

		for (int i = 0; i < N; i++)
		{
			cout << "In the binary notation of the number " << number;
			cout << " there are " << NumberOfUnites(numbers[i]) << " unites." << endl;

			cout << "In the binary notation of the number " << number;
			cout << " there are " << NumberOfZeros(numbers[i]) << " zeros." << endl << endl;
		}
		system("cls");



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

	for (; number > 0; number \ 2)

		if (!number % 2)
		{
			counter++;
		}
	return counter;
}

