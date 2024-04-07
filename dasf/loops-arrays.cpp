#include <algorithm>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // loops
    char symbol;

    cout << "Enter one symbol: ";
    cin >> symbol;
    cout << endl;

    for (int i = 0; i < 20; ++i) {
            cout << symbol;
    }
    for (int i = 0; i < 20; ++i) {
            cout << symbol << endl;
    }
    
    srand(time(0));

    // arrays
    const int SIZE = 5;
    int arr[SIZE] {1, 2, 3, 4, 5};
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10;
    }

    int min, max = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    const int MONTHS = 12;
    int profits[MONTHS];

    for (int i = 0; i < MONTHS; ++i) {
        cout << "Month " << i + 1 << ": ";
        cin >> profits[i];
    }

    int startMonth, endMonth;
    cout << "Enter a range of months: ";
    cin >> startMonth >> endMonth;
    cout << endl;

    if (startMonth < 1 || endMonth > MONTHS || startMonth > endMonth) {
        cout << "Invalid range." << endl;
    }

    int maxIndex = startMonth - 1, minIndex = startMonth - 1;
    for (int i = startMonth - 1; i < endMonth; ++i) {
        if (profits[i] > profits[maxIndex]) {
            maxIndex = i;
        }
        if (profits[i] < profits[minIndex]) {
            minIndex = i;
        }
    }
}