#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int n,q; // q mean test case;

 cin >> n >> q;

int a[n];
for(int i = 0; i<n; i++)
{
    cin >> a[i];
}

sort(a,a+n); // binary search er age data gulake age obossoi sort kore nite hbe tahole, mid hisab korar jnno.


while(q--) // query / test case er jnno
{
int l = 0;
int r = n-1;

bool flag = false;
int x; // searching item
cin >> x;


while(l<=r)
{


int mid = (l+r)/2;

if(a[mid] == x)
{
    flag = true;
    break;
}

if(x > a[mid])
{    
    //danee
    l = mid + 1;
}

else 
{
    r = mid - 1;
}

}


if(flag == true) cout << "found" << endl;
else cout << "not found" << endl;


}




  
    return 0;
}