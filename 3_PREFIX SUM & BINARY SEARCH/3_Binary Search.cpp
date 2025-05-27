#include<bits/stdc++.h>
using namespace std;
int main()
{

// binary search
//sob item jeye jeye value search korbe, beshi step lagbe. 

int n,q; // q mean quary or test case.
cin >> n >> q;
int a[n];

for(int i = 0; i<n; i++)
{
    cin >> a[i];
}


while(q--)
{
    int x; // x jeta search korbo array list theke
    cin >> x;

    bool flag = false;

   for(int i = 0; i<n; i++)
   {
    if(a[i] == x)
    {
        flag = true;
        
        break;
    }

   }


    if(flag == true)
    {
        cout << "item (x) is found" << endl;
    }

    else 
    {
       cout <<"item not is found" << endl;
    }
}

    
    return 0;
}