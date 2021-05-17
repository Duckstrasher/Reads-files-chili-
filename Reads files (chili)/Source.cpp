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
		cout << "The file was opened:\n";
		//reads formatted txt and pushes back to appropriate vector
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
	for (unsigned int i = 0; i < names.size(); i++) {
		cout << names[i] << "'s salary is: \t" << salary[i] << endl;
	}
	ofstream writeAriel;
	writeAriel.open("chili.txt");
		if (!writeAriel.is_open()) {
			cout << "The file was not opened succesfully" << endl;
	}

		writeAriel << "This is bucky´s method of writing to a file" << endl;
		writeAriel.close();
	return 0;
}