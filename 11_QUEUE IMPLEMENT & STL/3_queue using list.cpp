#include <bits/stdc++.h>
using namespace std;
//queue implement using STL list
//doubly linked list er library list.

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size(); //complexity 0(1); karon size track rakhe list librabry
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    if (!q.empty())
    {
        cout << q.front();
    }
    return 0;
}