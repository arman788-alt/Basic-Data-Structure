#include<bits/stdc++.h>
using namespace std;
int main()
{
 
//vector of string input with space.

int n;
cin>>n;
cin.ignore();

vector<string> v(n);



for(int i = 0; i<n; i++)
{
    getline(cin,v[i]);
}




for(string val: v)
{
    cout << val << endl;
}


    
    return 0;
}