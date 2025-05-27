#include<bits/stdc++.h>
using namespace std;
int main()
{
//pop back


vector<int> x = {20,30,43,54,53};
x.pop_back();
x.pop_back();

for(int i = 0; i<x.size(); i++)
{
    cout << x[i] << " ";    // output : 20 30 43
}






    
    return 0;
}