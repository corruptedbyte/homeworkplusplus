#include <iostream>

using namespace std;

void viewArr(int* arr, const int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr+i) << " ";
    } cout << endl;
}

int main()
{
    const int SIZE = 5;

    int arr1[SIZE] {1,2,3,4,5};
	int arr2[SIZE] {};

    int *parr1 = arr1;
	int *parr2 = arr2;

    for (int i = 0; i < 5; i++)
	{
		*(parr2 + i) = *(parr1 + i);
	}

    viewArr(arr2, SIZE);

    int arr3[] {1,2,3,4,5}; 
    cout << "Old array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr3[i] << " ";
    }
    int* start = arr3;
    int* end = arr3 + SIZE - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    } cout << endl;

    cout << "New array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr3[i] << " ";
    } cout << endl;
}