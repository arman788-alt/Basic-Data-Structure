#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &st, int x)
{
    // Write your code here.
    stack<int> newSt;
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }
    newSt.push(x);
    while (!newSt.empty())
    {
        st.push(newSt.top());
        newSt.pop();
    }
    return st;
}



//Problem statement
//You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. Your task is to insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.
//buttom mane nicche.
Note :
If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom of the stack and the last element represents the element at the top of the stack.
For Example :
Let ‘MY_STACK’ = [7, 1, 4, 5] and ‘X’ = 9. So, ‘MY_STACK’ after insertion becomes  [9, 7, 1, 4, 5].

5
4
1
7
after insert x = 9 to the buttom
5
4
1
7
9

