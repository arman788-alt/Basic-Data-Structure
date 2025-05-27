#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);

        // Input array elements
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Check if the array is sorted in ascending order
        bool sorted = true;
        for (int i = 1; i < N; ++i)
         {
            if (A[i] < A[i - 1]) 
            {
                sorted = false;
                break;
            }
        }

        // Output the result
        if (sorted) //sorted = true; true manei 1 jeta computer condition true dhore.
        {
            cout << "YES" << endl;;
        } else 
        {
            cout << "NO" << endl;;
        }
    }

    return 0;
}




