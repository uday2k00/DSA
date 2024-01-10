#include <iostream>
using namespace std;

// Time Complexity =  O(N);
// Iterate through the array.


int findMaxConsectiveOnes(int arr[], int n)
{
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(count, maxi);
        }
        else
            count = 0;
    }
    return maxi;
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

    int maxi = findMaxConsectiveOnes(arr, n);
    cout<< maxi;

}
