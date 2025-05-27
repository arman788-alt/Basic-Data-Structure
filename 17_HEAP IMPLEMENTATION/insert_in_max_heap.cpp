#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) //heap insert korboo
    {
        int x;
        cin >> x;
        v.push_back(x); //complete binary tree onujay push hoise
        int cur_idex = v.size() - 1;
        while (cur_idex != 0) //1ta node insert korar jonno complexity log(N), height er soman hobe, karon amra nich theke opor porjonto jabo index 0 porjonto.                              // heap er concept: ami amar parent index ber korbo , tar por amar sathe amar parent ke compare korbo, jodi ami boro hoy parent theke tahole swap kore dibo, ei kaj ami jototkhon na 0 index e pochay
        {
            int parent_idex = (cur_idex - 1) / 2; // i hocche children er index ,(i-1)/2 = parent index
            if (v[parent_idex] < v[cur_idex]) // parent theke child boro hole, child and parent moddhe swap hobe, evabe cholte thakbe
                swap(v[parent_idex], v[cur_idex]);
            else
                break;
            cur_idex = parent_idex;
        }
    }

    for (int val : v)
        cout << val << " ";
    return 0;
}


//NOTE:
//1ta node insert korar jonno highest complxity log(N)