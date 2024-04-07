#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

void initializeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size, int value) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = value;
        }
    }
}

void initializeMatrix(double matrix[MAX_SIZE][MAX_SIZE], int size, double value) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = value;
        }
    }
}

void initializeMatrix(char matrix[MAX_SIZE][MAX_SIZE], int size, char value) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = value;
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void displayMatrix(double matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void displayMatrix(char matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void findMinMaxDiagonal(int matrix[MAX_SIZE][MAX_SIZE], int size, int& min, int& max) {
    min = matrix[0][0];
    max = matrix[0][0];
    for (int i = 1; i < size; ++i) {
        if (matrix[i][i] < min)
            min = matrix[i][i];
        if (matrix[i][i] > max)
            max = matrix[i][i];
    }
}

void findMinMaxDiagonal(double matrix[MAX_SIZE][MAX_SIZE], int size, double& min, double& max) {
    min = matrix[0][0];
    max = matrix[0][0];
    for (int i = 1; i < size; ++i) {
        if (matrix[i][i] < min)
            min = matrix[i][i];
        if (matrix[i][i] > max)
            max = matrix[i][i];
    }
}

void findMinMaxDiagonal(char matrix[MAX_SIZE][MAX_SIZE], int size, char& min, char& max) {
    min = matrix[0][0];
    max = matrix[0][0];
    for (int i = 1; i < size; ++i) {
        if (matrix[i][i] < min)
            min = matrix[i][i];
        if (matrix[i][i] > max)
            max = matrix[i][i];
    }
}

void sortRows(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            for (int k = 0; k < size - j - 1; ++k) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
	
}