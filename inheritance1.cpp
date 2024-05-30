#include <iostream>

using namespace std;

class Pet
{
protected:
	string name;
public:
	Pet(string petName) :name(petName) {}

	void display() const
	{
		cout << "Pet's name: " << name << endl;
	}
};

class Dog : public Pet
{
	string owner;
public:

	Dog(string dogName, string ownerName) : Pet(dogName), owner(ownerName) {}


	void display() const
	{
		cout << "Dog's name: " << name << endl;
		cout << "Dog's owner:  " << owner << endl;

	}
};
class Cat :public Pet
{
	string ownerCat;
public:

	Cat(string catName, string ownerCatatName) : Pet(catName), ownerCat(ownerCatatName) {}


	void display() const
	{
		cout << "Cat's name: " << name << endl;
		cout << "Cat's owner:  " << ownerCat << endl;

	}
};

class Parrot : public Pet
{
	string ownerParrot;
public:
	Parrot(string parrotName, string ownerParrotname) : Pet(parrotName), ownerParrot(ownerParrotname) {}

	void display() const
	{
		cout << "Parrot's name: " << name << endl;
		cout << "Parrot's owner:  " << ownerParrot << endl;

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
		name = "my string";
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
		cout << "Length: " << leng << endl;
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

class BinaryString :public String
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

	void show() const {
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

int main() {
}
