#pragma once

#include<iostream>

using namespace std;

const int M = 100;


void InitMatrix(int[][M], int, int);

void DisplayMatrix(int[][M], int, int);

void Transpose(int[][M], int);

void Swap(int[], int[], int);

void BubbleSort(int[][M], int*, int, int);

void CreateKeys(int[][M], int, int, int*);

int FindMax(int*, int);


void InitMatrix(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			a[i][j] = i + 1;
		}
	}
}

void DisplayMatrix(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(5);
			cout << a[i][j];
		}

		cout << endl;
	}
}

void Transpose(int a[][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			swap(a[i][j], a[j][i]);
		}
	}
}


void CreateKeys(int a[][M], int n, int m, int* keys)
{
	for (int i = 0; i < n; i++)
	{
		keys[i] = findMax(a[i], m);
	}
}

int FindMax(int* array, int n)
{
	int k = 0;
	for (int j = 1; j < n; j++)
	{
		if (array[j] > array[k])
		{
			k = j;
		}
	}

	return array[k];
}

void BubbleSort(int matrix[][M], int* keys, int n, int m)
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

				swap(matrix[j], matrix[j - 1], m);
				swap(keys[j], keys[j - 1]);
				swapped = true;
			}
		}

		i++;
	}
}

void Swap(int left[], int right[], int n)
{
	for (int i = 0; i < n; i++)
	{
		swap(left[i], right[i]);
	}
}

