#include <iostream>
#include <cstring> 

using namespace std;

class String
{
    int size;
    char* char1;
    int  charCount;

public:
    String() :String(80) {}

    String(int userSize)
    {
        size = userSize;
        char1 = new char[size + 1];
        charCount = 0;
    }

    String(char str[], int size)
    {
        char* newString = new char[size];
        for (int i = 0; i < size; i++)
        {
            *(newString + i) = *(char1 + i);
        }
        if (char1 != nullptr)
            delete[]char1;
        char1 = newString;
        newString = nullptr;

    }

    
    void Input()
    {
        cout << "Enter string: ";
        char temp[100];
        cin.getline(temp, 100); 
        int tempSize = strlen(temp) + 1;

        
        if (tempSize > size)
        {
            delete[] char1; 
            size = tempSize; 
            char1 = new char[size]; 
        }

        strcpy(char1, temp); 
        charCount = tempSize - 1;
    }
    ~String()
    {
        if (char1 != nullptr)
        {
            delete[]char1;

        }
    }
    void Show() const
{
    cout << "String: " << char1 << endl;
}
    
};



int main()
{
    String str1;
    str1.Show(); 
   
    String str3;
    str3.Input();
    str3.Show();
}