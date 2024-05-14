#include <iostream>
using namespace std;

class Pet 
{
protected:
    string name;
public:
	Pet(string petName) :name(petName){}
	
	void display() const
	{
		cout << "Pets Name: " << name << endl;
		
	}
};

class Dog:public Pet
{
	string owner;
public:
	
	Dog(string dogName,string ownerName): Pet(dogName), owner(ownerName){}
	

	void display() const
	{
		cout << "Dogs Name: " << name << endl;
		cout << "Dogs owner:  " << owner << endl;

	}
};
class Cat :public Pet
{
	string ownerC;
public:

	Cat (string catName, string ownerCatName) : Pet(catName), ownerC(ownerCatName) {}


	void display() const
	{
		cout << "Cat Name: " << name << endl;
		cout << "Cats owner:  " << ownerC << endl;

	}
};

class Parrot : public Pet
{
	string ownerP;
public:

	Parrot (string parrotName, string ownerPname) : Pet(parrotName), ownerP(ownerPname) {}


	void display() const
	{
		cout << "Parrot Name: " << name << endl;
		cout << "Parrots owner:  " << ownerP << endl;

	}
};

class String
{
protected:
	int leng;
	string name, name0;
public:
	String()
	{
		leng = 0;
		name = "Hello, World!";
	}
	String(const char* str) 
	{
		leng = strlen(str); 
		name = str; 
	}

	String(const String& other) 
	{
		leng = other.leng;
		name = other.name;
	}

	String operator=(String st)
	{
		leng = st.leng;
		name = st.name;
		return *this;
	}

	int lengString()
	{
		 return name.length();
	}

	void clearString() 
	{
		name.clear();
		leng = 0;
	}
	void show() const 
	{
		cout << "Length: " << leng  << endl;
		cout << "String: " << name << endl;
	}

	String operator +(String st)
	{
		String s;
		s.name = name + st.name;
		s.name0 = name0 + st.name0;
		return s;
	}
	
	bool operator==(const String& other) const {
		return (leng == other.leng) && (name == other.name);
	}
};

class BinaryString:public String 
{
	string content;
public:
	BinaryString() 
	{
		content = "00000";
	}

	BinaryString(const string& str) {
		for (char c : str) {
			if (c != '0' && c != '1') {
				content.clear(); 
				break;
			}
		}
		content = str; 
	}

	void show() const  {
		cout << "Binary String: " << content << endl;
	}

	
	int toInteger() const {
		int result = 0;
		for (char c : content) {
			result <<= 1; 
			result += (c - '0');
		}
		return result;
	}
};