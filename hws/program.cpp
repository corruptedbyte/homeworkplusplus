#include "header.cpp"
#include <iosteam>

using namespace std;

int main() {
    const int SIZE = 5;
    int uselessArr[SIZE];
    randomizeArr(uselessArr);

    printArr(uselessArr);

    int uselessArr1[SIZE] = {2, 5, 4, 3, 1};
    cout << << "Min:" << minArr(uselessArr1) << endl;
    cout << << "Max:" << maxArr(uselessArr1) << endl;
}