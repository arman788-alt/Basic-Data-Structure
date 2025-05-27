#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist = {10, 20, 30, 40, 50, 60};
    // cout << mylist.max_size() << endl;
    // mylist.clear();

    mylist.resize(3);
    mylist.resize(6, 999);

    for (int val : mylist)
    {
        cout << val << endl;
    }

    return 0;
}