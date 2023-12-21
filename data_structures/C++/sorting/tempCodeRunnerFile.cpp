#include <iostream>
using namespace std;

// Bubble Sort: Compare Adjacent Numbers and swap bigger to the right side
// Time Complexity: O(n^2) --> Average 

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int swaps = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            swaps +=1;
        }
        if(swaps >0) break;

    }
}

int main()
{
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}