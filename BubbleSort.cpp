#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

// function prototypes
void random_array(int arr[],int n);
void BubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
	int n;
	cout << "The number of elements you want to Sort: ";
	cin >> n ;
	int *arr = (int *) malloc(sizeof(int)*n);
	random_array(arr,n);
	int count = 0;
	
	BubbleSort(arr,n);
	printArray(arr,n);
	cout << endl;
	return 0;
}

// Bubble Sort implementation
void BubbleSort(int arr[], int n)
{
	int i,j;
	bool swapped;
	
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j],arr[j + 1]);
				swapped = true;
			}
		}
		
		/*if inner loop no need to iterate then swapped gonna turn to
		be false that means all elements are sorted! */
		if (swapped == false)
		{ 			
			break;							// 
		}
	}
}

// print the sorted array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl ;
}

// generates a random array
void random_array(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + (rand() % n) ;
		cout << arr[i] << " " ;
	}
	cout << endl ;
}