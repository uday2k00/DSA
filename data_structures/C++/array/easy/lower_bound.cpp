#include<iostream>
#include<vector>
using namespace std;



int lower_bound(vector<int>&arr, int n, int t){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=t) {
            high = mid-1;
            ans = mid;
        }
        else low = mid +1;
    }
    return ans;

}


int main(){
    int n,t;
    cin>>n>>t;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int lb = lower_bound(arr, n, t);
    cout<<lb;

    return 0;
}


