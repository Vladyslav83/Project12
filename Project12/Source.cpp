#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Size of array: ";
    cin >> N;

    int* A = new int[N];
    double sum = 0.0;

    for (int i = 0; i < N; i++) {
        cout << "Put in  A[" << i << "]: ";
        cin >> A[i];
        sum += A[i];
    }

    double average = sum / N;
    cout << "Arithmetic average of the array A: " << average << endl;

    delete[] A;

    return 0;
}