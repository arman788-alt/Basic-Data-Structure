#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist = {100, 100, 100, 50, 200, 300, 100, 400, 500};
    // list<int> newlist;
    // newlist = mylist;

    // mylist.push_back(600);
    // mylist.push_front(50);

    // mylist.pop_back();
    // mylist.pop_back();
    // mylist.pop_front();

    // mylist.insert(next(mylist.begin(), 3), 200);
    // mylist.insert(next(mylist.begin(), 4), {10,20,30,40,50});

    // list<int> newlist = {10, 20, 30, 40, 50};
    // mylist.insert(next(mylist.begin(), 2), newlist.begin(), newlist.end());

    // vector<int> v = {10, 20, 30, 40, 50};
    // mylist.insert(next(mylist.begin(), 3),  v.begin(), v.end());

    // mylist.erase(next(mylist.begin(), 2));
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 4));

    // replace(mylist.begin(), mylist.end(), 100, 5 );


    

    for (int val : mylist)
    {
        cout << val << endl;
    }

    return 0;
}