#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // cout << myList.front();//output: 10
    // cout << myList.back(); //output: 50
    cout << *next(myList.begin(), 3) << endl; //next() ektaa iterator loop , next() ekti iterator ferot dey, tai take dereference kore oy value ferot dey.
 
 for(int val : myList)
 {
    cout << val ;
 }
 
    return 0;
}