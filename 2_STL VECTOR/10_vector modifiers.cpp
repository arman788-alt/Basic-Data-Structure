#include<bits/stdc++.h>
using namespace std;
int main()
{
//replace
//replace(v.begin(),v.end(),value, replace_value);

vector<int> v = {1,2,3,2,5,6,2,8,9,2};
replace(v.begin(),v.end(),2,1000); // 2 ke 1000 diye replace korlam

for(int x: v)
{
    cout << x << " ";
}

cout << endl << endl;












// last er 2 value bade baki 2 gula replace korte chaile:

replace(v.begin(),v.end()-1,2,1000);
for(int x: v)
{
    cout << x << " ";
}



    
    return 0;
}