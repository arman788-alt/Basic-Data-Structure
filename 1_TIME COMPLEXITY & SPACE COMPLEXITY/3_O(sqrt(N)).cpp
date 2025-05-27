#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
/*
 for(int i = 1; i<=sqrt(n); i++) // O(sqrt(n))
 {
    if(n % i == 0)
    {

    cout << i <<" ";

    if(n/i!= i)cout << n/i << endl;
    
        
    
    }
 }


*/







for(int i = 1; i*i <=n; i++)// 0(sqrt(n))
{
      if(n % i == 0)
    {

    cout << i <<" ";

    if(n/i!= i)cout << n/i << endl;
    
}



//prove: i*i <=n     =       i^2 <=n   = i<=sqrt(n)



    
    return 0;
}