#include<bits/stdc++.h>
using namespace std;
int main()
{
 
//vector of string : vector er protita index e 1ta kore string thakbe, vector e multiple string rakha jabe

vector<string> v;


int n;
cin >> n;

for(int i = 0; i<n; i++)
{
    string s;
    cin >> s; //string space chara input nibee.
    v.push_back(s);
}


//for(int i = 0; i<v.size(); i++)
//{
 //   cout << v[i] << " ";
//}


for(string val: v)
{
    cout << val << " ";
}

























    
    return 0;
}