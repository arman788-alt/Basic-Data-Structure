#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  vector<int> v;
  //cout << v.max_size() << endl;

  cout << v.capacity() << endl;
  v.push_back(10); // push back : she value add kore + size drkr hole baraai .
  cout << v.capacity() << endl;
  v.push_back(20);
  cout << v.capacity() << endl;
  v.push_back(30);
  cout << v.capacity() << endl;
  v.push_back(40);
  cout << v.capacity() << endl;
  v.push_back(50);
  cout << v.capacity() << endl;

  for(int i = 0; i<v.size(); i++)
  {
    cout << v[i] << " ";
  }






    
    return 0;
}