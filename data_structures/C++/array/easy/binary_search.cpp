#include <iostream>

using namespace std;



int binary_searchy(vector<int> &arr, int t){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(t == arr[mid]) return mid;
        else if(t > arr[mid]) low = mid +1;
        else high = mid -1;
    }
    return -1;

}

int main(){
    int n, t;
    cin>>n>>t;
    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<< binary_searchy(arr, t);
    return 0;
}