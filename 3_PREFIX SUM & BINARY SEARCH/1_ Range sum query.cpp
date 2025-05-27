#include<bits/stdc++.h>
using namespace std;
int main()
{

/*
6 3   N = 6, Q = 3
6 4 2 7 2 7 ... A[n]
1 3   index: L theke R
3 6         same
1 6         same
*/


int n,q;

cin >> n >> q;

int a[n];

for(int i = 0; i<n; i++)
{
    cin >> a[i];
}


for(int i = 0; i<q; i++)//while(q--) same logic bujay
{
    int sum = 0;
    int l,r;
    cin >> l >> r;
    l--;
    r--;

    for(int i = l; i<=r; i++)
    {
        sum = sum + a[i];
    }
    cout << sum << endl;
}


// note : next e prefix sum ..diye aro optimize korbo ei type er prblm aro efficient way te jate time complexity aroo komano jay.


    return 0;
}