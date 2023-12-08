#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    
    int i; // Initialize variables
    cin >> i; //Take Input
    cout << i << endl;   // Print Output
    cout << "hey uday." << endl; // Print Output

    int x = 100; // intialize integer
    float y = 100.04; // Initialize float
    cout<<y<<endl;

    string s1, s2; // Initialize String
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;

    int age; // if else statement
    cin>>age;
    if(age>=18){
        cout<<"you are an adult."<<endl;
    }
    else{
        cout<< "you are not an adult."<<endl;
    }
// pass by reference and pass by value....
// arrays goes into the function with reference and integer, vectors goes into function with value 
// so attach & symbol to get the changes
    return 0;
}
