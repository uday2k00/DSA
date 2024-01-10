#include <iostream>

using namespace std;

// ---------------------Questions to ask:---------------------
//Will the array contain dublicate items?
// Are there multiple solutions to the array?
// Will there always be a solution?

//-------------- Time Complexity-------------------
// Best Case - O(N); TWO - Pointer Approach
//Worst Case - O(N^2); Go through all the values and find the pairs
//Space Cpmplexity : O(1)





bool twoSumInSortedArray(vector<int>&arr, int n, int target){
    int start = 0;
    int end = n-1;
    
    while(start<end){
        int sum = arr[start]+arr[end];
        if(sum == target) return true;
        else if (sum<target) start ++;
        else end --;
    }
    return false;

}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool ans = twoSumInSortedArray(arr, n, target);
    cout << (ans ? "Present" : "Not Present") << "\n";

}