#include<bits/stdc++.h>
using namespace std;
int main()
{
 
//insert
 
/*
 insert function use:
 basic:insert(v.begin(),value)   // je index e insert korbe she index er pointer or iterator lagbe,  r value  jeta insert korbo seta.

//note: pointer
v.begin() + k ; k hocche index number , k value dile index theke pointer e convert hoye jabe.
 v.begin() + 0 mane 1 no index.
 v.begin() + 1 mane 2no index .
 v.begin() + 2 mane 3 no index......eirokom

*/


vector<int> v = {1,2,3,4};
v.insert(v.begin()+2,100);

for(int x : v) // v er value 1ta 1ta kore x e jabe.
{
  cout << x << " ";
}

cout << endl << endl;


//mutlipale value insert korte chaile
//note: 1ta vector er bitor arekta vector in insert korte chaile starting pointer theke ending pointer dite hbe.v

vector<int> v1 = {2,4,6,8,10};
vector<int> v2 = { 100,200,300};
v1.insert(v1.begin()+3,v2.begin(),v2.end());

for(int x : v1)
{
    cout << x << " ";
}



    
    return 0;
}