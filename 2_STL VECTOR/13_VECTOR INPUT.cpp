#include<bits/stdc++.h>
using namespace std;
int main()
{


/*
// 1st Type 

vector<int> v;

int n; 
cin >> n;
for(int i = 0; i<n; i++)
{
   // cin >> v[i] evabe input nibe na karon v er size zero , er  jaiga push kore kore size increase korte hbe

   int x;
   cin >> x;
   v.push_back(x);

}


for(int value : v)
{
    cout << value << " ";
}


*/


//secand type :


int n;
cin >> n;

vector<int> v(n); // ekhon vector er size n;

for(int i = 0; i<n; i++)
{
    cin >> v[i];
}

for(int val: v)
{
    cout << val << " ";
}





    return 0;
}