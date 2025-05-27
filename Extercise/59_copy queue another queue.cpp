#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    queue<int> newQ;
    stack<int> st;

    cout << "Enter the number of elements for the queue: ";
    int n;
    cin >> n;

    cout << "Enter elements for the queue:\n";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        newQ.push(st.top());
        st.pop();
    }

    cout << "Elements of newQ (in reverse order):\n";
    while (!newQ.empty())
    {
        cout << newQ.front() << endl;
        newQ.pop();
    }

    return 0;
}


//Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. 
//You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

//Sample Input
//5
//10 20 30 40 50


//Sample Output
//50 40 30 20 10

