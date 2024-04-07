#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool compareFiles(const string& file1, const string& file2) {
    ifstream fin1(file1);
    ifstream fin2(file2);

    string line1, line2;
    while (getline(fin1, line1) && getline(fin2, line2)) {
        if (line1 != line2) {
            cout << "Non-matching line from file 1: " << line1 << endl;
            cout << "Non-matching line from file 2: " << line2 << endl;
            return false;
        }
    }

    if (getline(fin1, line1) || getline(fin2, line2)) {
        cout << "Files have different number of lines." << endl;
        return false;
    }

    cout << "Files are identical." << endl;
    return true;
}

void calculateStatistics(const string& inputFile, const string& outputFile) {
    ifstream fin(inputFile);
    ofstream fout(outputFile);

    string line;
    int characters = 0, lines = 0, vowels = 0, consonants = 0, digits = 0;

    while (getline(fin, line)) {
        characters += line.length();
        lines++;

        for (char c : line) {
            if (isalpha(c)) {
                char lowerC = tolower(c);
                if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u')
                    vowels++;
                else
                    consonants++;
            }
            else if (isdigit(c)) {
                digits++;
            }
        }
    }

    fout << "Number of characters: " << characters << endl;
    fout << "Number of lines: " << lines << endl;
    fout << "Number of vowels: " << vowels << endl;
    fout << "Number of consonant letters: " << consonants << endl;
    fout << "Number of digits: " << digits << endl;
}

int main() {
    string file1 = "file1.txt";
    string file2 = "file2.txt";
    string inputFile = "input.txt";
    string outputFile = "output.txt";

    cout << "Task 1:" << endl;
    if (compareFiles(file1, file2)) {
        cout << "Files match." << endl;
    }

    cout << "\nTask 2:" << endl;
    calculateStatistics(inputFile, outputFile);

    return 0;
}
