class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1, s2;
        for (char c : s)
        {
            if (c == '#')
            {
                if (!s1.empty())
                    s1.pop();
            }
            else
            {
                s1.push(c);
            }
        }
        for (char c : t)
        {
            if (c == '#')
            {
                if (!s2.empty())
                    s2.pop();
            }
            else
            {
                s2.push(c);
            }
        }
        return s1 == s2;
    }
};


Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".



