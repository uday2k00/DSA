#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> move_zeros(vector<int>&arr, int n){
    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]== 0) {
            j = (j == -1) ? i : j;
            break;
        }
    }
    
    if(j==-1) return arr;

    for (int i = j+1; i<n; i++){
        if(arr[i] !=0){
            swap(arr[i], arr[j+1]);
            j++;
        }
    }
    return arr;
    

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    move_zeros(arr, n);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}