#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int>& arr, int N) {
    // Swap elements from the beginning and end of the array
    for (int i = 0; i < N / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[N - i - 1];
        arr[N - i - 1] = temp;
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    // Input array A
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Call the function to reverse the array
    reverseArray(A, N);

    // Output the reversed array
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
