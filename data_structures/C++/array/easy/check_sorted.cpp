#include<iostream>
using namespace std;

//Time Complexity = O(N)

bool isSorted(int arr[], int n){
    for (int i =0; i<n; i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    bool isSortedArray = isSorted(arr, n);
    cout<< isSortedArray;

    return 0;

}