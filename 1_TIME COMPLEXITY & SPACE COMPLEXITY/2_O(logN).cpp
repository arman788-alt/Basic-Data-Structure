#include<bits/stdc++.h>
using namespace std;
int main()
{
 
int n;
cin >> n;


//ex: 1
//while(n>0) 
//{
//    int digit = n%10;
 //   cout << digit << endl;

 //   n = n/10; // O(logN)
//}



//ex: 2
for(int i = 1; i<=n; i = i*2)// O(logN)
{
    cout << i << endl;
}

    
    return 0;
}