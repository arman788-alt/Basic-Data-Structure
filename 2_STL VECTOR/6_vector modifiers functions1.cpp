#include<bits/stdc++.h>
using namespace std;
int main()
{
 
//Assign another vector. 
//assign vector x to v .

vector<int> v = {43,543,54,543};
vector<int> x = {12,43,43,54};
v = x;

for(int i = 0; i<v.size(); i++)
{
    cout << v[i] << " ";
}




    
    return 0;
}