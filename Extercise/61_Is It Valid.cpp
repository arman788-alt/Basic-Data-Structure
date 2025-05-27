#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cout << "t";
    cin >> t;

    while (t--)
    {
        string s;
        cout << "s";
        cin >> s;
        stack<char> st;

        for (auto i = s.begin(); i < s.end(); i++)
        {
            if (*i == '0')
            {
                if (!st.empty() && st.top() == '1')
                {
                    st.pop();
                }
                else
                {
                    st.push(*i);
                }
            }

            else if (*i == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(*i);
                }
            }
        }

        if (!st.empty())
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
//Test case:
10

//input
0011
1010
1100
0101
0001
0111
0110
100101
1110010
0001011011


//Sample Output 0

YES
YES
YES
YES
NO
NO
YES
YES
NO
YES



Given a string  containing just the characters 0 and 1, determine if the input string is valid.

An input string is valid if the string is empty after doing some operatios. The available operations are:

0 can delete its previous available character 1 along with itself. If there is no 1 available to delete, it will not delete itself.
1 can delete its previous available character 0 along with itself. If there is no 0 available to delete, it will not delete itself.
Input Format

First line will contain , the number of test cases.
Next  lines will contain the string .
Constraints

. Here  means the length of the string.
Output Format

Output YES if the string is valid, otherwise NO.
