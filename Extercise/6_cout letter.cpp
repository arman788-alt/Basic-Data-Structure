#include<bits/stdc++.h>
using namespace std;
int main()
{

string v;



cin >> v;

vector<int>cnt(26,0); //Initialize a vector to store count for each letter.

for(int i = 0; i<v.size(); i++)
{
   int value = v[i] - 97;
   cnt[value]++;

}


for(int i = 0; i<26; i++)
{


     if(cnt[i]!= 0)
   {   
       cnt[i];
      char c = i + 97;
      cout << c << " : " << cnt[i] << endl;
   }
}


    
    return 0;
}