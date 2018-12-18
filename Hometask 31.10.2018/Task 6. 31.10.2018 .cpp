using namespace std;
#include <iostream>
#include <cmath>

int NumberOfDigits(long long number);
int CharToDigit(char digit);

int main()
{
	char esc = 'y';
	long long number;
	char digit;

	while (esc == 'y' || esc == 'Y')
	{
		while (true)
		{

			cout << "Enter the digit you want to find" << endl;
			cin >> digit;

			if (CharToDigit(digit) - 88)
			{
				int const N = 3;
				int numbers[N] = { 23554, 555, 465367689876 };
				for (int i = 0; i < N; i++)
				{
					cout << "In the hexadecimal notation of the number " << number;
					cout << " there are " << NumberOfDigits(numbers[i], CharToDigit(digit)) << digit << endl << endl;
				}
				break;
			}
			else
				cout << "Please enter the valid digit!!";

			system("cls");
		}

		system("cls");

		cout << "To continue enter the y or Y";
		cin >> esc;
		system("cls");
	}
}

return 0;
}


int NumberOfDigits(int number, char digit);
{
	int counter = 0;

	number = abs(number);

	for (; number > 0; number / 16)
	{
		if ((number % 16) == digit)
			conter++;
	}

	return counter;
}


int CharToDigit(char digit)
{
	switch (digit)
	{
		case 'A'
		case 'a':
		{
			return 10; break;
		}

		case 'B'
		case 'b':
		{
			return 11; break;
		}

		case 'C'
		case 'c':
		{
			return 12; break;
		}

		case 'D'
		case 'd':
		{
			return 13; break;
		}

		case 'E'
		case 'e':
		{
			return 14; break;
		}

		case 'F'
		case 'f':
		{
			return 15; break;

		}

		case 0
			case 1
			case 2
			case 3
			case 4
			case 5
			case 6
			case 7
			case 8
			case 9:
		{
			return ((int)(digit)-48);  break;
		}

			default:
			{
				return 88; break;
			}

	}
}