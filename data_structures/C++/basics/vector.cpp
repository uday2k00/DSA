#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));

    

    v.push_back(6);
    cout<<v.capacity()<<endl;
    cout<<v.front()<<endl; //Access O(n)
    cout<<v.back()<<endl; //Access O(n)

    return 0;
}