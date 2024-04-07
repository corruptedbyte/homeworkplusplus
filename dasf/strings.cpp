#include <iostream>
#include <string.h>

using namespace std;

void replace(char *pcarr, int count)
{
	
    _strnset(pcarr, '*', 2);
    return pcarr;
}

void countChars(const char* str, int& letters, int& digits, int& others) 
{
	letters = 0;
	digits = 0;
	others = 0;

	for (size_t i = 0; i < strlen(str); i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{
			letters++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			digits++;
		}
		else {
			others++;
		}
	}
}

void erase(string str)
{
    str.erase(1,3);
    return str;
}

void deleteChar(char *str, char character)
{
	char* readPtr = str; 
	char* writePtr = str; 

	for (*readPtr != '\0'; readPtr++;) {
		if (*readPtr != character) {
			*writePtr = *readPtr; 
			++writePtr; 
		}
	}
}

void userChar(char* str)
{
	char* strPtr = nullptr;
	for (strPtr = str; *strPtr; strPtr++)
	{
		if (*strPtr == '.')
		{
			*strPtr = '!';
		}
	}
}


int main() {

}