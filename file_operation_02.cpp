// file_handling_showcase.cpp

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createAndWriteFile(const string& filename) {
    ofstream outFile(filename); // Opens in write mode (creates or overwrites)

    if (outFile.is_open()) {
        outFile << "Hello, this is the first line.\n";
        outFile << "This is the second line.\n";
        outFile.close();
        cout << "File '" << filename << "' created and written successfully.\n";
    } else {
        cerr << "Error: Could not open file for writing.\n";
    }
}

void readFile(const string& filename) {
    ifstream inFile(filename);

    if (inFile.is_open()) {
        cout << "\nReading contents of '" << filename << "':\n";
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cerr << "Error: File '" << filename << "' not found or can't be opened.\n";
    }
}

void appendToFile(const string& filename) {
    ofstream outFile(filename, ios::app); // Open in append mode

    if (outFile.is_open()) {
        outFile << "This line was appended later.\n";
        outFile.close();
        cout << "Data appended to '" << filename << "' successfully.\n";
    } else {
        cerr << "Error: Could not open file for appending.\n";
    }
}

void readLinesWithLineNumber(const string& filename) {
    ifstream inFile(filename);

    if (inFile.is_open()) {
        cout << "\nReading '" << filename << "' line by line:\n";
        string line;
        int lineNumber = 1;
        while (getline(inFile, line)) {
            cout << "Line " << lineNumber++ << ": " << line << endl;
        }
        inFile.close();
    } else {
        cerr << "Error: Could not open file for reading.\n";
    }
}

int main() {
    string filename = "demo_file.txt";

    createAndWriteFile(filename);
    readFile(filename);

    appendToFile(filename);
    readFile(filename);

    readLinesWithLineNumber(filename);

    return 0;
}
