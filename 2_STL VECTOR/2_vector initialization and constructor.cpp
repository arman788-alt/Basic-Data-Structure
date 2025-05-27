#include<bits/stdc++.h>
using namespace std;
int main()
{
 //vector initialization and constructor


 //vector<int>v; //type 1
 //cout << v.size(); //output: 0





 //vector<int>v(10); Type 2
 //cout << v.size() << endl; //size: 10



//vector<int>v(15,3); Type 3
//cout << v.size() << endl; // output: 15




//vector<int>v2(5,100); Type 4
//vector<int>v(v2);
//cout<< v.size() << endl; output: 5



//int a[8] = {12,23,34,45,56,76,787,66};  Type 5
//vector<int>v(a, a+8); 
//cout << v.size() << endl; // output: 8






//direct vector initialization:
vector<int> v = {20,30,40,50,60};
cout << v.size() << endl;


 for(int i = 0; i<v.size(); i++)
 {
    cout << v[i] << " ";
 }





    
    return 0;
}