
#include <bits/stdc++.h>
using namespace std;
int main()
{

   stack<int> st;
   queue<int> q;

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

   cout << endl;
   cout << "queue :" << endl;
   int m;
   cout << "m :";
   cin >> m;
   for (int i = 0; i < m; i++)
   {
      int a;
      cin >> a;
      q.push(a);
   }

   bool flag = true;
   if (st.size() == q.size())
   {

      while (!st.empty())
      {
         if (st.top() != q.front())
         {
            flag = false;
            break;
         }

         else
         {
            st.pop();
            q.pop();
         }
      }
   }

   else
   {
      flag = false;
   }

   if (flag == true)
      cout << "YES";

   else
      cout << "NO";

   return 0;
}

// Question: Take a stack of size N and a queue of size M as input.
// Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
// Sample Input
// Sample Output
// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50
// NO


// 5
// 10 20 30 40 50
// 4
// 10 20 30 40
// NO


// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10
// YES
