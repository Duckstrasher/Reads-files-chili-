#include <conio.h>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> names;
	vector<double> salary;
	string tname;
	double tsalary;
	ifstream arielFile;
	arielFile.open("chili.txt");
	
	if (arielFile.is_open()) {
		while (arielFile >> tname >> tsalary) {
			names.push_back(tname);
			salary.push_back(tsalary);
		}
	}
	else if (!arielFile.is_open()) {
		cout << "The file could not be opened" << endl;
	}
	else {
		cout << "IDK WTf" << endl;
	}
	cout << "The file has been read:\n" << endl;

	for (int i = 0; i < sizeof(names); i++) {
		cout << names[i] << ":\t" << salary[i] << endl;
	}
	while (!_kbhit);
	return 0;
}