#include <iostream>
using namespace std;

void generateRandomArray(int*, int);
void displayArray(int*, int);
int maxNegativeElement(int*, int);
int minPositiveElement(int*, int);
int numberOfDigits(int);
int (*pMin)(int*, int) = &minPositiveElement;
int (*pMax)(int*, int) = &maxNegativeElement;


int main()
{
	int n, m;

	while (true)
	{
		cout << "Enter the size of the array: " << endl;
		cin >> n;
		system("cls");

		if (n > 0)
			break;

		cout << "Please, enter the valid size!!! The size of the array should be natural number" << endl << endl;
	}

	int *array = new int[n];
	int *rest = new int[m];
	
	generateRandomArray(array, n);

	cout << "Sorted array: [" << displayArray(array, n) <<"]" << endl<<endl;
	cout << "The rest of the array: [" << displayArray(rest, n) << "]" << endl;

	system("pause");

	return 0;
}


void generateRandomArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 100 - 100 / 2;
	}
}

void displayArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

int minPositiveElement(int* array, int n)
{
	int min = 1;

	for (int i = 3; i < n; i+=2)
	{
		if (*(array + i) < *(array + min) && *(array + i) > 0)
			min = i;
	}

	if (*(array + min) > 0)
		return min;
	else
		return 0;
}

int maxNegativeElement(int* array, int n)
{
	int max = 1;

	for (int i = 3; i < n; i+=2)
	{
		if (*(array + i) > *(array + max) && *(array + i) < 0)
			max = i;
	}

	if (*(array + max) < 0)
		return max;
	else
		return 0;
}

void getKeys(int *array, int *keys, int n)
{		 
	for (int i = 0; i < n; i++)
	{
		keys[i] = numberOfDigits(array[i]);
	}
}

int numberOfDigits(int number)
{
	int counter = 0;

	for (; number > 0; number / 10)
	{
		if (!((number % 10) % 2))
			counter++;
	}

	return counter;
}

void merge(int *array)
{

}