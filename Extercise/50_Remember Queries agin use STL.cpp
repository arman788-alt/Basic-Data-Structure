#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;

    int q;

    cin >> q;
    while (q--)
    {
        int x, v;
        
        cin >> x;
    
        cin >> v;

        if (x == 0)
        {
            mylist.push_front(v);
        }
        else if (x == 1)
        {
            mylist.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < mylist.size())
            {
                mylist.erase(next(mylist.begin(), v));
            }
            
        }


cout << "L -> ";
for(auto it = mylist.begin(); it!=mylist.end(); it++)
{
    cout << *it << " ";
}


cout << endl;
   
cout << "R -> ";
for(auto it = prev(mylist.end()); it!=prev(mylist.begin()); it--)
{
    cout << *it << " ";
}
cout << endl;

    }

    return 0;
}