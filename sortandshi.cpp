#include <iostream>

using namespace std;

/*
    Тут я також GPT юзнув.
*/

template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
T findMin(T arr[], int size) {
    T min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            T temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

template <typename T>
int binarySearch(T arr[], int size, T key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

template <typename T>
void replaceElement(T arr[], int size, T oldValue, T newValue) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == oldValue) {
            arr[i] = newValue;
        }
    }
}

int main() {
    int intArr[] = {5, 3, 8, 2, 9, 1};
    double doubleArr[] = {5.5, 3.3, 8.8, 2.2, 9.9, 1.1};
    const int size = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Max in intArr: " << findMax(intArr, size) << endl;
    cout << "Min in intArr: " << findMin(intArr, size) << endl;
    selectionSort(intArr, size);
    cout << "Sorted intArr: ";
    for (int i = 0; i < size; ++i) {
        cout << intArr[i] << " ";
    }
    cout << endl;
    cout << "Index of 8 in intArr using binary search: " << binarySearch(intArr, size, 8) << endl;
    replaceElement(intArr, size, 8, 10);
    cout << "After replacing 8 with 10 in intArr: ";
    for (int i = 0; i < size; ++i) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    cout << "Max in doubleArr: " << findMax(doubleArr, size) << endl;
    cout << "Min in doubleArr: " << findMin(doubleArr, size) << endl;
    selectionSort(doubleArr, size);
    cout << "Sorted doubleArr: ";
    for (int i = 0; i < size; ++i) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;
    cout << "Index of 8.8 in doubleArr using binary search: " << binarySearch(doubleArr, size, 8.8) << endl;
    replaceElement(doubleArr, size, 8.8, 10.1);
    cout << "After replacing 8.8 with 10.1 in doubleArr: ";
    for (int i = 0; i < size; ++i) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;

    return 0;
}
