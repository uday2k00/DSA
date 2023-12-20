#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> m;

    m[1] = "hey";
    m[2]="this";
    m[3]="is map";



    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
// insert, find, erase in map is O(log(n))
// in hashmap it is O(N)

}