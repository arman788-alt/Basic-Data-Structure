#include <bits/stdc++.h>
using namespace std;
int main()
// binary search tree er STL hocche set
// set diye bst er sort, searching, duplicate value remove kore
// bst te jempon Inorder print korle sort akare petam same vabe dibe set o.
// bst te duplicate value remove korte chaile stl SET use korbo.
// set eksathe sort kore, abr dublicate value bad dey.
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
    cout << s.count(100) << endl; // O(logN)
    if (s.count(100))             // search korbo 100, thakle yes nahole no  // ekhane searching value thakle count er man 1 dibe jeta true mean kore, r na thakle 0 dibe jeta false mean kore.
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // ascending order
    //  for (auto it = s.begin(); it != s.end(); it++)
    //{
    //     cout << *it << endl;
    // }

    // Descnding order
    //  for(auto it = s.end(); it!= s.begin(); it--)
    //  {
    //     cout << *it << endl;
    //  }
    return 0;
}