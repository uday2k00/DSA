#include <bits/stdc++.h>
#include <iostream>
#include <list>

using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 33};
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second << endl;
    pair<int, int> arr[] = {{1, 33}, {2, 44}, {3, 44}};
}

void explainVector()
{
    vector<int> v = {1, 2, 3, 4};
    v.push_back(66);
    v.emplace_back(87);

    vector<int> v2(3, 100);
    vector<int> v3(5);
    vector<int> v4(v3);
    vector<int>::iterator it = v.begin(); // pointed to memory location
    it++;
    cout << *(it);

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it);
    }

    for (auto it : v)
    {
        cout << it;
    }

    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 6); // [start,end)
    v.insert(v.begin() + 1, 5);
    v.insert(v.begin() + 3, 3, 39);

    // List
    list<int> u;
    u.push_back(2);
    u.emplace_back(4);
    u.push_front(4);
}