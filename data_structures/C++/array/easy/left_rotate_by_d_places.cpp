#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


vector<int> rotate_array_by_d(vector<int>&arr, int n, int k){
    int d = k%n;
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.begin()+n);
    reverse(arr.begin(), arr.end());
    
    return arr;


}

int main(){
    int  n,k;
    cin >>n>>k;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> rotated_arr =rotate_array_by_d(arr, n, k);

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}