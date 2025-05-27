#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    stack<int> newSt;

    cout << "stack :" << endl;
    int n;
    cout << "n :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

   

// copy stack to another stack reverse way
    for (int i = 0; i < n; i++)
    {

        newSt.push(st.top());
        st.pop();
    }
  cout << endl;
    while (newSt.empty() == false)
    {
        cout << newSt.top() << endl;
        newSt.pop();
    }

    return 0;
}

//Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. 
//You should use STL to solve this problem.
//Sample Input
//5
//10 20 30 40 50

//Sample Output
//10 20 30 40 50
