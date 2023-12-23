#include<iostream>
using namespace std;

//Two pointer Approach
// Time Complexity: Brute Force ---> Nlog(N)+ Log(N); Best ---> N

int removeDublicates( int arr[], int n){
    int i =0;
    for (int j =1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cin >>n ;
    int arr[n];
    for (int i =0; i<n; i++){
        cin>>arr[i];
    }
    int noOfElements = removeDublicates(arr, n);
    cout<< noOfElements;

    return 0;
   
}