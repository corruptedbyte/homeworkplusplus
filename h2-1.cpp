#include <iostream>
using namespace std;

int main()
{
    /*int seconds = 86400;
    int userSeconds;
    cin >> userSeconds;

    cout << "Hours: " << (seconds-userSeconds) / 3600 << endl;
    cout << "Minutes: " << (seconds - userSeconds) / 60 << endl;
    cout << "Seconds: " << (seconds - userSeconds) << endl;*/

    int hours = 28800;
    int userSeconds;
    cin >> userSeconds;

    cout << "Hours left: " << (hours - userSeconds) / 3600;
}
