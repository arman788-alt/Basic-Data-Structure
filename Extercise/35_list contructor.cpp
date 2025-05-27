#include <bits/stdc++.h>
using namespace std;
int main()
{

    // list<int> mylist;
    // cout << mylist.size();

    // list<int>mylist(10,100);
    // cout << mylist.size() << endl;;

    // list<int> list2 = {10,20,30,40,50,100,200,300,400,500};
    // list<int> mylist(list2);

    // int a[5] = {101, 102, 103, 104, 105};
    // list<int>mylist(a, a+5);

    vector<int> v = {10, 30, 50, 70, 90, 110, 130};
    list<int> mylist(v.begin(), v.end());

    for (int val : mylist)
    {
        cout << val << endl;
    }

    return 0;
}