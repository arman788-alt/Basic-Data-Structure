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
  

  cout << v.size() << endl;


  cout << "clear all" << endl;
  v.clear();  // clear korar folee size zero hoye jay tai samne agaite pare nh loop diye...but internally memory theke value gulo clear hoinh... direct index diyee access kora jay value gula ke.

  cout << v.size() << endl;

  for(int i = 0; i<v.size(); i++)
  {
    cout << v[i] << " ";
  }


  //index diye access:
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;
  cout << v[3] << endl;
  cout << v[4] << endl;







    
    return 0;
}