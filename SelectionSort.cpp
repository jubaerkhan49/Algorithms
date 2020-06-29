#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp ;
	if (a != b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	else
	{
		return ;
	}
}

void SelectionSort(int arr[], int n)
{
	int i, j, min;
	
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j ;
			}
		}
		swap(&arr[min], &arr[i]);
	}
}

void printarray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ' ;
	}
	cout << endl;
}

int main()
{
	int n ;
	cout << "Enter the number of elements of your array: " << endl;
	cin >> n ;
	int arr[n] ;
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % n ;
	}
	
	SelectionSort(arr, n);
	printarray(arr, n);
	return 0;
}