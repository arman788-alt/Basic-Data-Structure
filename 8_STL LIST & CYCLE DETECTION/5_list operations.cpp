#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};

    // myList.remove(10);//jekane jekhane 10 sob dlt hobe.

    // sort(myList.begin(), myList.end(),greater<int>());

    // myList.sort();//sort acending order
    // myList.sort(greater<int>());//sort descending order

    // myList.unique(); //remove duplicate value but first sort the list
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }

    
    return 0;
}