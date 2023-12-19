#include <iostream>
using namespace std;

int main()

{
// Initialize an Array
    int arr[5]={4,5,3,7,8};
    cout<<arr[4]<<endl;

//Initialize an array
    array<int , 5> newArr = {4,5,3,7,8};
    cout<<newArr[3]<<endl;

 //Find size of the array
 int x = newArr.size();
 cout<<x<<endl;

 //Traverse or iterate through the array
 for(int i =0; i<x; i++){
    cout<<arr[i]<<endl;
 }

 cout<<"First element: "<<newArr.front()<<endl; //O(1)
 cout<<"Second element: "<<newArr.back()<<endl; //O(1)

}
