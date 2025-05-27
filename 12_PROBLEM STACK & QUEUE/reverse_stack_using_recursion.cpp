void reverseStack(stack<int> &s)
{
    // Write your code here
    if (s.empty())
        return;


    int x = s.top();
    s.pop();
    reverseStack(s);
    // reverse hoye gse
    stack<int> cp;
    while (!s.empty())
    {
        cp.push(s.top());
        s.pop();
    }
    cp.push(x);
    while (!cp.empty())
    {
        s.push(cp.top());
        cp.pop();
    }
}

//Problem statement
//Reverse a given stack of 'N' integers using recursion. You are required to make changes in the input parameter itself.

//Note: You are not allowed to use any extra space other than the internal stack space used due to recursion.



Example:
Input: [1,2,3,4,5] 
Output: [5,4,3,2,1]