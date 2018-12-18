#pragma once

#include<iostream>

using namespace std;


void GenerateRandomArray(int array[], int n, int range);

void GenerateArray(int array[], int n);

void EnterArray(int array[], int n);

void DisplayArray(int array[], int n);

int FirstMinIndex(int array[], int n);

int FirstMaxIndex(int array[], int n);

void ReverseArray(int array[], int n);

void FindAllPrimeElements(int array[], int n, int newArray[], int& m);

void InputArray(int*, int);

void DisplayArray(int*, int);

void FindMinAndMax(int*, int, int&, int&);

void Abs(int*, int);

void CopyTo(int*, int*, int);

int InputDimension(int);

void BubbleSort(int*, int);

void BubbleSort(int*, int*, int);

void SelectionSort(int*, int);

void InsertionSort(int*, int);

void ShiftRightElement(int*, int);

void ShiftRightElement(int *, int, int);

int SearchCountDifferentElements(int*, int);

void Merge(int*, int, int*, int, int*, int);


void GenerateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range - range / 2;
	}
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void EnterArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}

int FirstMinIndex(int array[], int n)
{
	int min = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[min] > array[i])
		{
			min = i;
		}
	}
	return min;
}

int FirstMaxIndex(int array[], int n)
{
	int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[max] < array[i])
		{
			max = i;
		}
	}
	return max;
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void GenerateArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}
}

void ReverseArray(int array[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		Swap(array[i], array[n - i - 1]);
	}
}

void FindAllPrimeElements(int array[], int n, int newArray[], int& m)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrimeNumber(array[i]))
		{
			newArray[m] = array[i];
			m++;
		}
	}
}

void InputArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i + 1 << "] : ";
		cin >> array[i];
	}
}

void DisplayArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void FindMinAndMax(int* array, int n, int& min, int& max)
{
	min = max = 0;

	for (int i = 1; i < n; i++)
	{
		if (array[min] > array[i])
		{
			min = i;
		}

		if (array[max] < array[i])
		{
			max = i;
		}
	}
}


void BubbleSort(int * array, int n)
{
	
	bool swapped = true;

	int i = 1;

	while (swapped)
	{

		swapped = false;

		for (int j = n - 1; j >= i; j--)
		{
			if (array[j] < array[j - 1])
			{
				swap(array[j], array[j - 1]);
				swapped = true;
			}
		}

		i++;
	}
}


void SelectionSort(int * array, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < n; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}

		swap(array[min], array[i]);
	}
}

void InsertionSort(int * array, int n)
{
	for (int i = 0; i < n; i++)
	{

	}
}

void ShiftRightElement(int * array, int n)
{
	int temp = array[n - 1];

	for (int i = n - 1; i >= 1; i--)
	{
		array[i] = array[i - 1];
	}

	array[0] = temp;
}

void ShiftRightElement(int * array, int n, int count)
{
	for (int i = 1; i <= count; i++)
	{
		shiftRightElement(array, n);
	}
}

int SearchCountDifferentElements(int* array, int n)
{
	int count = n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] == array[j])
				count--;
				break;
			}
		}
	}

	return count;
}



int InputDimension(int dimension)
{

	int n;

	while (true)
	{
		cout << "Enter dimension of array <= " << dimension << " :";
		cin >> n;
		if (n >= 1 && n <= dimension)
		{
			break;
		}

		cout << "Invalid data!";
	}

	return n;
}

void Merge(int* arrayA, int n, int* arrayB, int m, int* arrayC, int k)
{
	int i = 0, j = 0, l = 0;

	while (i < n && j < m)
	{
		if (arrayA[i] < arrayB[j])
		{
			arrayC[l] = arrayA[i];
			i++;
		}
		else
		{
			arrayC[l] = arrayB[j];
			j++;
		}

		l++;
	}

	if (i == n)
	{
		for (; j < m; j++, l++)
		{
			arrayC[l] = arrayB[j];
		}
	}
	else
	{
		for (; i < n; i++, l++)
		{
			arrayC[l] = arrayA[i];
		}
	}
}

void BubbleSort(int* values, int* keys, int n)
{
	bool swapped = true;

	int i = 1;

	while (swapped)
	{

		swapped = false;

		for (int j = n - 1; j >= i; j--)
		{
			if (keys[j] < keys[j - 1])
			{
				swap(values[j], values[j - 1]);
				swap(keys[j], keys[j - 1]);
				swapped = true;
			}
		}

		i++;
	}
}

void Abs(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = abs(array[i]);
	}
}

void CopyTo(int* source, int* destination, int n)
{
	for (int i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
}