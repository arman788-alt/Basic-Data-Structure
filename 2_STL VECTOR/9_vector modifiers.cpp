#include<bits/stdc++.h>
using namespace std;
int main()
{
 //erase : delete specific position

 vector<int> v = {1,2,3,4,5};
 v.erase(v.begin()+3); // 3 no index er value dlt hbe,
 
 for(int x: v)
 {
    cout << x << " "; // output: 1,2,3,5
 }


cout << endl << endl;





//multiple value delete korte chaile.
vector<int> v1 = {1,2,3,4,5,6,7};

v1.erase(v1.begin()+2,v1.begin()+5); // 2 no index theke 5 no index er agg porjonto dlt hbe
//v1.erase(v1.begin()+2,v1.end()-2); 


for(int x: v1)

{
    cout << x << " "; // output: 1,2,6,7
}




    
    return 0;
}