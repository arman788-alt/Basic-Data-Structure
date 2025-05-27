#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<string> q;

    int Q;
    cout << "Q";
    cin >> Q;

    while (Q--)
    {

        int command;
        cout << "com: ";
        cin >> command;

        if (command == 0)
        {
            string name;
            cout << "name :";
            cin >> name;

            q.push(name);
        }

        else if (command == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}


Problem Statement

You will be given Q  queries. In each query you will get a command. The command is of two types -

You will be given 0 and name of a person who stood in a line of a ticket counter.
You will be given only  1 which means the person in front of the line got the ticket and will be removed from the line. You need to print the name of that person who got that ticket. If there are no one in the line, print .
Note: There can be multiple person in the line with same name.

Input Format

First line will contain .
Next  lines will contain the commands.    


Output Format

For each time someone get out of the line, print his/her name. Print a new line after that.


Sample Input 1

8
1
0 embappe
0 neymar
1 
1
0 messi
1
1
Sample Output 1

Invalid
embappe
neymar
messi
Invalid
Sample Input 2

6
0 embappe
0 embappe
1 
1
0 messi
1
Sample Output 2

embappe
embappe
messi
