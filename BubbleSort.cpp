#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y ;
	*y = temp;
}
void BubbleSort(int arr[], int n, int *u)
{
	int i,j;
	bool swapped;
	
	for (i = 0; i < n-1; i++)
	{
		swapped = false;
		for (j = 0; j < n-i-1; j++)
		{
			
			if (arr[j] > arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				swapped = true;
				(*u)++ ;
			}
		}
		if (swapped == false)
		{ 			// if inner loop no need to iterate then swapped gonna turn to
			break;							// be false that means all elements are sorted!
		}
	}
}
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl ;
}
void random_array(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + (rand() % n) ;
		cout << arr[i] << " " ;
	}
	cout << endl ;
}
int main()
{
	int n;
	cout << "The number of elements you want to Sort: ";
	cin >> n ;
	int arr[n];
	random_array(arr,n);
	int count = 0;
	
	BubbleSort(arr,n,&count);
	printArray(arr,n);
	cout << "Needs to swap: " << count << " times" ;
	
	cout << endl;
	return 0;
}