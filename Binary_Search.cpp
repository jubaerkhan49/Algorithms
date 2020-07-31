#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int low, int high, int x)
{
    int mid = (high + low) / 2;

    if (low > high) return -1;

    if (arr[mid] == x) return mid;

    x > arr[mid] ? low = mid + 1 : high = mid - 1;

    return binary_search(arr, low, high, x);
}

int main()
{
    int arr[] = {3, 4, 23, 42, 77, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 100;
    int result = binary_search(arr, 0, n - 1, x);
    cout << endl;
    if (result == -1)
    {
        cout << "Number isn't found in the array" << endl;
    }
    else 
    {
        cout << "Number is found in " << result << " index" << endl;
    }
}