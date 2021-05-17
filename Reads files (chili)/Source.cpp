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
		//reads char form txt and places in c, put c
		for (char c = arielFile.get(); arielFile.good(); c = arielFile.get()) {
			_putch(c);
		}

	}
	else if (arielFile.bad() ) {
		cout << "Failed to open document" << endl;

	}
	else if (arielFile.eof()) {
		cout << "Reached end of file succesfully" << endl;
	}
	cout << "The file has been read:\n" << endl;
	
	cout << "Goodbye, thank you for using my program" << endl;
	return 0;
}