#include <iostream>
using namespace std;

// function prototypes
void SelectionSort(int arr[], int n);
void printarray(int arr[], int n);


int main()
{
	int n ;
	cout << "Enter the Number of Elements of Your Array: " << endl;
	cin >> n ;
	int arr[n] ;
	
	// generates a random array
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % n ;
		cout << arr[i] << ' ' ;
	}
	cout << endl;
	
	SelectionSort(arr, n);
	printarray(arr, n);
	
	cout << endl;
	return 0;
}

// implementation of selection sort
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
		swap(arr[min], arr[i]);
	}
}

// print the sorted array
void printarray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ' ;
	}
}