#include <iostream>

using namespace std;

int main()
{
  int x, y, z = 0;
  int countNegative = 0;
  int countPositive = 0;

  for (int i = 100; i < 999; i++) {
  	x = i / 100;
  	y = (i / 10) % 10;
  	z = i % 10;

  	if (x == y && z == x)
  		countPositive++;
  	if (x != y && z != x)
  		countNegative++;
  }
  cout << "Numbers matching (100-999): " << countPositive << endl;
  cout << "Numbers not matching (100-999): " << countNegative << endl;
}
