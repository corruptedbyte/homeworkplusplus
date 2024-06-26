#include <algorithm>
#include <iostream>
#include <ctime>

using namespace std;

int power(int base, int exponent) {
    int result = 0;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int sum(int a, int b)
{
	int result = 0;
	for (int i = a + 1; i < b; i++)
	{
		summ += i;
	}
    
    return result;
}

void findPerfectNumbers(int start, int end) 
{
	
	for (int i = start; i <= end; ++i) 
	{
		int sum0 = 0;
		for (int i = 1; i < i; ++i) 
		{
			if (i % i == 0) 
			{
				sum0 += i;
			}
		}
		if (sum0 == i) 
		{
			cout << "Perfect number: " << i << " ";
		}
	}
	cout << endl;
}

void showPlayingCard(int suit, int num) {
	
	char suits[] = {1,2,3,4};
	char ranks[] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K' };

	cout << " _________" << endl;
	cout << "| " << ranks[num - 1] << setw(2) << suits[suit - 1] << "     |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|    " << suits[suit - 1] << "    |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|      "<< ranks[num - 1] << setw(2) << suits[suit - 1] << "|" << endl;
	cout << " ---------" << endl;
}

int luckyNumber(int usernumber)
{
	int a, b, c, d, e, f;
	if (usernumber >= 100000 && usernumber <= 999999)
	{}
	else {
        return 0
	}

	a = usernumber / 100000 % 10;
	b = usernumber / 10000 % 10;
	c = usernumber / 1000 % 10;
	d = usernumber / 100 % 10;
	e = usernumber / 10 % 10;
	f = usernumber / 1 % 10;

	if ((a + b + c) == (d + e + f))
	{
		cout << "Your number is lucky :D";
	}
	else
	{
		cout << "Your number isn't lucky... Maybe it's a good thing! Stay positive!" << endl;
	}
	return usernumber;
}

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}


int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) {
            return mid;
        }
        
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int binaryToDecimal(int binary[], int size) {
    int decimal = 0;
    int power = 1;
    
    for (int i = size - 1; i >= 0; --i) {
        decimal += binary[i] * power;
        power *= 2;
    }
    
    return decimal;
}

int main()
{
    return 0;
}
