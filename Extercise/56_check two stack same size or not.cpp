#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myStack st1;
    myStack st2;

    cout << "Stack 1 :" << endl;
    int n;
    cout << "n :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    cout << endl
         << endl;
    cout << "Stack 2 :" << endl;
    int m;
    cout << "m :";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        st2.push(a);
    }

    bool flag = true;

    if (st1.size() == st2.size())
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            else
            {
                st1.pop();
                st2.pop();
            }
        }
    }

    else
    {
        flag = false;
    }

    if (flag == true)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }

    return 0;
}

// Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.
// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50
// YES

// 5
// 10 20 30 40 50
// 4
// 10 20 30 40
// NO

// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10
// NO
