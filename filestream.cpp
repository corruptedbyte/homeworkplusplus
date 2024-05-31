#include <iostream>
#include <fstream>
using namespace std;

class Directory
{
    string companyName;
    string owner;
    int telephone;
    string address;
    string activity;
public:
    Directory() :companyName("Anon"), owner("Anon"), telephone(0), address("000 St."), activity("Void") {}
    Directory(string cName, string own, int tel, string addr, string act)
        : companyName(cName), owner(own), telephone(tel), address(addr), activity(act) {}

    string getCompanyName() const
    {
        return companyName;
    }

    string getOwner() const
    {
        return owner;
    }

    int getTelephone() const
    {
        return telephone;
    }

    string getActivity() const
    {
        return activity;
    }

    void searchByCompanyName(const Directory directories[], int size, const string& name) {
        for (int i = 0; i < size; ++i) {
            if (directories[i].getCompanyName() == name) {
                cout << "Directory:" << endl;
                directories[i].Show();
                directories[i].saveToFile();
                return;
            }
        }
        cout << "No company name found in the dictionary: " << name << endl;
    }

    void searchByOwner(const Directory directories[], int size, const string& owner) {
        for (int i = 0; i < size; ++i) {
            if (directories[i].getOwner() == owner) {
                cout << "Directory:" << endl;
                directories[i].Show();
                directories[i].saveToFile();
                return;
            }
        }
        cout << "No owner in dictionary: " << owner << endl;
    }

    void searchByTelephone(const Directory directories[], int size, const int& telephone) {
        for (int i = 0; i < size; ++i) {
            if (directories[i].getTelephone() == telephone) {
                cout << "Directory:" << endl;
                directories[i].Show();
                directories[i].saveToFile();
                return;
            }
        }
        cout << "No telephone found in the dictionary: " << telephone << endl;
    }

    void searchByActivity(const Directory directories[], int size, const string& activity) {
        for (int i = 0; i < size; ++i) {
            if (directories[i].getActivity() == owner) {
                cout << "Directory:" << endl;
                directories[i].Show();
                directories[i].saveToFile();
                return;
            }
        }
        cout << "No activity found in the dictionary: " << owner << endl;
    }


    void Show() const {
        cout << "Company Name: " << companyName << endl;
        cout << "Owner: " << owner << endl;
        cout << "Telephone: " << telephone << endl;
        cout << "Address: " << address << endl;
        cout << "Activity: " << activity << endl;
    }

    void saveToFile()const
    {
        ofstream outF("dictionary.txt", ios_base::out);

    }
};
