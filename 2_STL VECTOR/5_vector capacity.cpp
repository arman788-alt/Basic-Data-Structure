#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  vector<int> v;
  //cout << v.max_size() << endl;

  
  v.push_back(10); // push back : she value add kore + size drkr hole baraai .
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  


  v.resize(3); //size hobe 3 porjonto, baki gula dlt hoye jabe.

  for(int i = 0; i<v.size(); i++)
  {
    cout << v[i] << " ";
  }


cout << endl;

v.resize(10, 500); // ager size 3 theke 10 hoyechee,  baki khali 7 ghore 500 boshbe , r 500 na dile sob zero thakbe

for(int i = 0; i<v.size(); i++)
{
    cout << v[i] << " ";
}
    
    return 0;
}