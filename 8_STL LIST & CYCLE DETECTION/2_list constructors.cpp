#include <bits/stdc++.h>
using namespace std;
int main()
{

    //***LIST ALL TYPE INITIALIZE***:

    // list<int> myList;
    // cout << myList.size() << endl; // output: 0
    // cout << myList(10) // list er size 10
    // list<int> myList(10, 5);//size 10, sob index e 5 diye fillup hobe.

    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> myList(list2);

    // copy from Array list:
    //  int a[5] = {10, 20, 30, 40, 50};
    //  list<int> myList(a, a + 5); // a hocche array er starting pointer, a+n hocche ending pointer.

    // copy from vector list:
    //  vector<int> v = {100, 200, 300};
    //  list<int> myList(v.begin(), v.end());

    // cout << myList[0] //wrong way,  evabe list access kora jaynh, karon doubly te o evabe access kora jeto na,
                        // list access korar jonno iterator er loop chaliye access korte hoy.
    // we know, linked list index akaree kaj koree nah.
    //  for (auto it = myList.begin(); it != myList.end(); it++)
    //  {
    //      cout << *it << endl;
    //  }

    // ranger based shortcut loop use:
    // for (int val : myList)
    //{
    //    cout << val << endl;
    //}
    return 0;
}