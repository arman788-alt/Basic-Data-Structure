#include<bits/stdc++.h>
using namespace std;
int main()
{
 //find : find the value v

 vector<int> v = {1,2,3,2,5,6,54,443};


 //vector<int> :: iterator it;
 //it = find(v.begin(),v.end(),2);// v vector 2 ache kina khujbee.


 auto it =find(v.begin(),v.end(),2);// v vector e 2 ache kina khujbee.




 if(it == v.end()) 
 {
    cout << "Not Found" << endl;
 }

else 
{
  cout << "found " << *it << endl;
}





    
    return 0;
}