#include <iostream>
using namespace std;

// function prototype
void InsertionSort(int arr[], int n);

int main()
{
    int arr[] = {5,2,42,6,1,3,2};
	
	// size of the array
    int n = sizeof(arr) / sizeof(arr[0]) ;
	
	// print the array elements before sorting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ' ;
    }
    cout << endl ;

    InsertionSort(arr, n);
	
	// print elements of array after sorting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ' ;
    }
    cout << endl ;
    return 0;
}

// Insertion Sort implementation
void InsertionSort(int arr[], int n)
{
    int j = 0 ;
	
    while (j < n - 1)
    {
        if (arr[j] <= arr[j + 1])
        {
            j++;
        }
		
        else
        {
            if (j == 0)
            {
                swap(arr[j], arr[j + 1]);
            }
			
            else
            {
                swap(arr[j], arr[j + 1]);
                j-- ;
            }
        }
    }  
}