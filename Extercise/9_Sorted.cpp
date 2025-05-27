#include<bits/stdc++.h>
using namespace std;
int main()
{
 
/*
qstn: You will given an array A of size N. You need to tell if the array is already sorted or not.
 If the array is sorted in ascending order print "YES", otherwise print "NO".

*/

int t; // t mean test case;
cin >> t;



while(t--)
{

int n;
cin >> n;
int a[n];

for(int i = 0; i<n; i++)
{
    cin >> a[i];
}

bool flag = true;

for(int i = 1; i<n; i++)
{
    if(a[i] < a[i-1])
    {  //jodi daan theke bam er value boro tahole unsorted.
       flag = false;
       break;
    }

}



if(flag == true)
{
    cout << "YES" << endl;
}

else
{
   cout << "NO" << endl;
}

}  
    return 0;
}