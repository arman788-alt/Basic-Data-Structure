#include<bits/stdc++.h>
using namespace std;
int main()
{
  // binary search e suru tei data gula sort kore nite hbe.

int n;
cin >> n;

int a[n];

for(int i = 0; i<n; i++)
{
    cin >> a[i];
}


int x; //je item ta khujbo seta .
cin >> x;



int l = 0; // left first starting theke
int r = n-1; // right ending theke

bool flag = false;


while(l<=r)
{

 int mid_index = (l+r)/2;

 if(a[mid_index]  == x)
 {
    flag = true;
    break;
 }

if(x > a[mid_index])
{
  // danee jete hbe so,
  l = mid_index + 1;
}

else 
{
    //jod x(searching item) er man mid er borar value theke choto hoi, tokhon bamee jete hbe.so,
    r = mid_index -1;
}

}




if(flag == true)
{
    cout << "item(x) is found" << endl;
}

else 
{
    cout << " item(x) not found" << endl;
}
    
    return 0;
}