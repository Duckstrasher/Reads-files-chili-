#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream in("chili.txt");

	for (char c = in.get(); in.good(); c = in.get()) {
		_putch(c);
	}

	while (!_kbhit);
	return 0;
}