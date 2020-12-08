#include <sstream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	string line, buff;
	string filename = "ExampleTexz.txt";
	ifstream inFile(filename);

	if (!inFile.is_open()) {
		cout << "File not available";
		exit(1);
	}
	int wordCount = 0;
	int lineCount = 0;
	int charCount = 0;

	std::vector<std::string> tokens;

	while (getline(inFile, line)) {
		stringstream ss(line);
		while (ss >> buff) {
			wordCount++;
			charCount = charCount + buff.size();
		}
		lineCount++;
	}

	cout << charCount << endl;
	cout << wordCount << endl;
	cout << lineCount << endl;

	return 0;
}
