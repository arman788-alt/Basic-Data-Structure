#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int n;

 cin >> n;
 int a[n];

 for(int i = 0; i<n; i++)// O(n)
 {
    cin >> a[i];
 }



int sum = 0;
for(int i = 0; i<n; i = i+2) //i er man 2 kore agaleeo O(n) hbe, karon 2 kore agano jei kotha n/2 same kotha ...n/2 = n ei hoy
{
    sum = sum + a[i];
}


cout << sum ;


//total complexity:  O(n+n) = O(2n) = O(n) 
//note: shortcut--- maxmimum n er value count korbo direct.


//jodi emon hoy:: O(n/5 + 2n ) = O(2n) = O(n) hobe
    
    return 0;
}