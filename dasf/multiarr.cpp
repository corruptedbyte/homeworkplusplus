#include <iostream>
#include <ctime>

using namespace std;

void offsetArr(int arr[SIZE][SIZE], int offset)
{
    int temp;
    for (int i = 0; i < offset; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            temp = arr[j][SIZE - 1];
            for (int m = SIZE - 1; m > 0; m--)
            {
                arr[j][m] = arr[j][m - 1];
            }
            arr[j][0] = temp;
        }
    }
}

void fillArr(int arr[SIZE][SIZE])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}
void showArr(int arr[SIZE][SIZE])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    const int SIZE = 5;
    int arr[SIZE][SIZE];
    int num;

    cout << "Enter a number: ";
    cin >> a;
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (i == 0 && j == 0)
            {
                arr[i][j] = a;
            }
            else
                arr[i][j] = (arr[i][j - 1] * 2);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int num1;
    int arr1[SIZE][SIZE];

    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && j == 0)
            {
                arr1[i][j] = num;
            }
            else
                arr1[i][j] = (arr1[i][j - 1] + 1);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    srand(time(NULL));

    const int r = 10, c = 10;
    int arr[SIZE][SIZE];

    fillArr(arr);
    showArr(arr);
    
    cout << endl;

    offsetArr(arr, 2);
    showArr(arr);
}