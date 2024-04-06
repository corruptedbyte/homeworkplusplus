#include <iostream>
#include <ctime>
#include "headersOfFunctions.h"

void randomizeArr(int arr[], int size)
{
    srand(time(0));

    for (int i = 0; i < size; ++i) {
        array[i] = rand();
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int maxArr(int arr[], int size)
{
    int maxNum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr4[i] > maxNum)
        {
            maxNum = arr[i];
        }
        return maxNum;
    }
}

int minArr(int arr[], int size)
{
    int minNum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr3[i];
        }
        return minNum;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    } cout << endl;
}