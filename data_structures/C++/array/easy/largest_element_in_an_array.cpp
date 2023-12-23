#include <iostream>
using namespace std;

// Loop through the array and find the max element
// Time Complexity = O(NlogN) --> Brute force by sorting, O(N) ---> O(N) by a loop

void find_largest_element(int arr[], int n){
    int largest_element = 0;
    for (int i = 0; i<n; i++){
        if(arr[i]>largest_element) largest_element = arr[i];
    }
    cout<< largest_element;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    find_largest_element(arr, n);

    return 0;
}