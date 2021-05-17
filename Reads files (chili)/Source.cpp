#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream arielFile;
	arielFile.open("chili.txt");
	if (arielFile.is_open()) {

		
		cout << "k, the file is open\n" << endl;
		for (char c = arielFile.get(); arielFile.good(); c = arielFile.get()) {
			_putch(c);
		}
	}

	if (arielFile.bad()) {
		cout << "Bad" << endl;
	}
	else if (arielFile.eof()) {
		cout << "\n\nSuccesfully reached end of file" << endl;
	}
	else {
		cout << "Some wierd error" << endl;
	}
	while (!_kbhit);
	return 0;
}