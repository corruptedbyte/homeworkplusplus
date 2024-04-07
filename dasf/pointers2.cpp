#include <iostream>

using namespace std;

void removeRepeats(int arr[], int& size) {
    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        bool x = false;
        for (int j = 0; j < newSize; ++j) {
            if (arr[i] == arr[j]) {
                x = true;
                break;
            }
        }
        if (!x) {
            arr[newSize++] = arr[i];
        }
    }
    size = newSize;
}

void task1(int A[], int M, int B[], int N) {
    removeRepeats(B, N);
    int C[M];
    int size = 0;

    for (int i = 0; i < M; ++i) {
        bool x = false;
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                x = true;
                break;
            }
        }
        if (!x) {
            C[size++] = A[i];
        }
    }

    for (int i = 0; i < size; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;
}

void task2(int A[], int M, int B[], int N) {
    int C[M + N];
    int size = 0;

    for (int i = 0; i < M; ++i) {
        bool x = false;
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                x = true;
                break;
            }
        }
        if (!x) {
            C[size++] = A[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        bool x = false;
        for (int j = 0; j < M; ++j) {
            if (B[i] == A[j]) {
                x = true;
                break;
            }
        }
        if (!x) {
            C[size++] = B[i];
        }
    }

    removeRepeats(C, size);

    for (int i = 0; i < size; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;
}

int main() {
    
}
