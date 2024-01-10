#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int s =0;
    int t = 1;
    int u;

    while(t<n){
        u = s+t;
        s = t;
        t = u;
    }
    cout<<s;

}