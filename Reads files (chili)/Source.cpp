#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream arielFile;
	arielFile.open("Essay.docx");
	if (arielFile.is_open()) {

		
		cout << "k, the file is open" << endl;
		for (char c = arielFile.get(); arielFile.good(); c = arielFile.get()) {
			_putch(c);
		}
	}
	else {
		cout << "The file was closed succesfully" << endl;
	}
	
	arielFile.close();
	if (!arielFile.is_open()) {
		cout << "dude, we closed rthe file" << endl;
	}
	while (!_kbhit);
	return 0;
}