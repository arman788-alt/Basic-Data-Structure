#include<bits/stdc++.h>
using namespace std;
int main()
{
 
//vector access:

//vector<int> v = {1,2,3,4,5,6,6,67};

//cout << v[v.size()-1] << endl;
//cout << v.back() << endl; last element acess


//cout << v[0] << endl;
//cout << v.front() << endl; first element acess



//itertor:

vector<int> v = {1,2,3,4,5,64,34};
//vector<int> :: iterator it; // auto na use korle evabe dite hbe

for( auto it = v.begin(); it<v.end(); it++)
{
    cout << *it << endl;
}






    
    return 0;
}