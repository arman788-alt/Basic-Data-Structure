#include<bits/stdc++.h>
using namespace std;
int main()
{

//You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

 int n;
 cin >> n;

 int a[n];
 for(int i = 0; i<n; i++)
 {
    cin >> a[i];
 }

 

int cnt[100005] = {0};

for(int i = 0; i<n; i++)
{
    cnt[a[i]]++;
}


bool flag = false;


for(int i = 0; i<n; i++)
{
    if(cnt[i] == 2 )
    {
        flag = true;
        break;
    }
}


if(flag == true)
{
    cout << "YES" << endl;
}


else
{
   cout << "NO" << endl;
}



//note: not submitted ..some test case error
    
    return 0;
}