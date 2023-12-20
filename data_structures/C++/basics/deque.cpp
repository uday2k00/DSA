#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d;
    d.push_back(2);
    d.push_front(144);
    d.pop_back();

    for (int i : d)
    {
        cout << i << endl;
    }

     d.empty();

}