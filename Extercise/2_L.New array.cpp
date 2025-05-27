#include <iostream>
#include <vector>

using namespace std;

//qstn: a and b 2ta vector ....c vector e first b tarpor a vector concatanation krbo.



vector<int> concatenateArrays(vector<int>& A, vector<int>& B) {
    vector<int> C;
    
    // Concatenate array B followed by array A
    C.insert(C.end(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());
    
    return C;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);

    // Input array A
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Input array B
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    // Call the function to concatenate arrays A and B
    vector<int> C = concatenateArrays(A, B);

    // Output the concatenated array C
    for (int i = 0; i < C.size(); ++i) {
        cout << C[i] << " ";
    }

    return 0;
}
