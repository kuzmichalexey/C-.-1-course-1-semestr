#pragma once

#include<iostream>

using namespace std;


int NumberOfUnites(long long number);

int NumberOfZeros(long long number);

int NumberOfDigits(long long number, int);

int CharToDigit(char digit);

void Swap(int&, int&);

void Swap(int*, int*);

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


void Swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}


void Swap(int* x, int* y)
{
	int t = *x;
	*x = *y;
	*y = t;
}