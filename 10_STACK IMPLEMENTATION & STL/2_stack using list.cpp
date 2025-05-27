#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()// ekhane size ber korar jonno list e internally loop chalay  na...karon por por size track rakhee, ei jonno complexity 0(1)
    {
        return l.size();
    }
    bool empty()//0(1)
    {
        if (l.size() == 0) 
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty()) // mane not empty stack
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}