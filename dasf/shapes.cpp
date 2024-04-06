#include <iostream>
using namespace std;

int main()
{
	int choice;
	cout << "Enter a number (1-10): ";
	cin >> choice;
    cout << endl;
	switch (choice)
	{
	case 1:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i == j || j > i)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 2:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i == j || j < i)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 3:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int N = 10;
				if (j > i && i + j < N - 1)  
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 4:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int N = 10;
				if  (j < i && i + j > N - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 5:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int N = 10;
				if (((j > i && i + j < N - 1) || (j < i && i + j > N - 1)) || i == j || i + j == N - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 6:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int N = 10;
				if (((j > i && i + j > N - 1) || (j < i && i + j < N - 1)) || i == j || i + j == N - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 7:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int N = 10;
				if (j > i && i + j > N - 1) 
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 8:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int N = 10;
				if  (j < i && i + j < N - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 9:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int N = 10;
				if (( i + j < N - 1)  || i + j == N - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 10:
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int N = 10;
				if ((i + j > N - 1) || i + j == N - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	default:
		break;
	}
}