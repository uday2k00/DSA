
#include <iostream>
using namespace std;


//loop it and replace 1st with largest and second with sLargest
// Time Complexity = O(N)

int sLargest(int a[], int n){
    int largest = -1;
    int secondLargest = a[0];
    
    for(int i = 0; i < n; i++){
        if(a[i] > largest){
            secondLargest = largest;
            largest = a[i];
        } else if(a[i] < largest && secondLargest < a[i]) {
            secondLargest = a[i];
        }
    }
    
    return secondLargest;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int second_largest = sLargest(a, n);
    
    cout<< second_largest;
}
