#include<iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(44);
    l.push_front(37);// O(1)

    for( int i:l) cout<<i<<" ";

    l.erase(l.begin());

    for( int i:l) cout<<i<<" ";

    list<int>newL(l);

    list<int> old(5,100);
    
    for(int i: l) cout<<i<<" ";

}