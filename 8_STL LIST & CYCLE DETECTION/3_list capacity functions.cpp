#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30};
    // cout << myList.max_size();
    // myList.clear();

    // resize() diye list er size barano komano jay,, size komaile list er sesh er baki gula dlt hobe,
    // size baraile.. barano baki size suru te zero thakbee, chaile oy ghor e value add korte pari.
    myList.resize(2); // first 2ta value thakbe ,output: 10 20

    myList.resize(5, 100); // 10,20 er por sob gula ghor e 100 diye fillup hobe putput: 10 20 100 100 100
    cout << myList.size() << endl;

    for (int val : myList)
    {
        cout << val << endl;
    }

    cout << endl;

    myList.resize(8); // output: 10 20 100 100 100 0 0 0
    for (int val : myList)
    {
        cout << val << endl;
    }








    //Note: list e capacity related kono function nai, karon list/linked list e age theke kono jagaa dokhon kore na.

    return 0;
}