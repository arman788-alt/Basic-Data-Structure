#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;

    int n;
    cout << "n :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}