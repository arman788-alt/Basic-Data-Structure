#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Replace every positive number by 1.
    // Replace every negative number by 2.

    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > 0)
        {
            replace(A.begin(), A.end(), A[i], 1);
        }

        else if (A[i] < 0)
        {
            replace(A.begin(), A.end(), A[i], 2);
        }

        else
        {
            replace(A.begin(), A.end(), A[i], 0);
        }
    }

    for (int val : A)
    {
        cout << val << " ";
    }

    return 0;
}