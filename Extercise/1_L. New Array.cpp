#include <bits/stdc++.h>
using namespace std;
int main()
{

    // using vector

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);
    vector<int> C(n * n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        C[i] = B[i];
        count++;
    }

    for (int i = 0; i < n * n; i++)
    {

        C[count] = A[i];

        count++;
    }

    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}