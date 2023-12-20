#include<iostream>
#include<stack>

using namespace std;
 int main(){

    stack<string> n;

    n.push("uday");
    n.push("kiran");
    n.push("vankdavat");

    n.pop();

    cout<<"last word "<<n.top()<<endl;

 }