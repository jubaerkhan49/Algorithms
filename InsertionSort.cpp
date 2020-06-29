#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n);

int main()
{
    int arr[] = {5,2,42,6,1,3,2};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ' ;
    }
    cout << endl ;

    InsertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ' ;
    }
    cout << endl ;
    return 0;
}

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