#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
    // ****Assign another list/copy list 01***:
        list<int> myList = {10, 20, 30, 40};
        list<int> newlist;
        newlist = myList;

    //assign another list long cut process:
    //newlist.assign(myList.begin(), myList.end());

        for (int val : newlist)
        {
            cout << val << endl;
        }
    */

    //****Delete & Insert List 02*****:
    list<int> myList = {10, 20, 30, 40, 50, 30, 60, 70};

    // delete the tail.
    // myList.pop_back();

    // detete the head.
    //  myList.pop_front();

    // Delete elements from a specific position.
    // myList.erase(next(myList.begin(), 2)); // 2no index dlt korbo
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5)); // index 2 theke 4 porjonto dlt korbee,,
                                                                       // ekhane 5 disi karon index jeta dibo tar agg porjonto dlt korbe

    // Insert the tail
    // myList.push_back(90000);

    // Insert the head
    // myList.push_front(80000);

    // Insert elements at a specific position.
    // myList.insert(next(myList.begin(), 2), 100);//2 is position //next() hocche shortcut loop, etaa pointer ke access kore, ekahne por por 2bar ghure 2no node e insert hobe
    // myList.insert(myList.begin()+2, 100);//wrong way, etaa sudhu array er khetre use hoy...array por por jaiga hold kore, but linked list e noy.

    // Insert multiple value at specific position:
    // myList.insert(next(myList.begin(), 3), {100, 200, 300});//3 is index e 100 200 300 insert hobe.
    
    // Insert another list specific position :
    // list<int> newList = {100,200,300};
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());//2 is index e newlist ta insert hobe.

    // Insert from vector list at specific pos :
    // vector<int> v = {100, 200, 300};
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());//2no index e vector list insert hobe

    // replace(myList.begin(), myList.end(), 30, 100); // list e jekhane jekhane 30 achee sekhane 100 diye replace hobe

    // for (int val : myList)
    //{
    //     cout << val << endl;
    // }

    // find the value from list:
    auto it = find(myList.begin(), myList.end(), 30); // chech korbo 30 liste achee kinaa
    if (it == myList.end())
    {
        cout << "Not Found" << endl;
    }

    else
    {
        cout << "Found" << endl;
    }

    return 0;
}