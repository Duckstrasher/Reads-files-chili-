#include <conio.h>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void writeFile();

int main() {
	//write

	char opt;
	cout << "What would you like to do?" << endl;
	cout << "(O)pen" << endl;
	cout << "(L)oad\t" << endl;
	cin >> opt;
	cout << "\n";

	switch (opt)
	{
	case 'O': case'o':
		cout << "You chose to write a file" << endl;
		writeFile();
		break;
	case'L': case'l':
		cout << "You chose to load a file" << endl;
		break;
	default:
		cout << "\aNot a valid option" << endl;
		break;
	}
	cout << "\nThanks for using my prgram" << endl;

	
	return 0;
}

void writeFile() {
	cout << "Insert the name of your file: " << endl;
	string fileName;
	cin >> fileName;
	ofstream wFile;
	wFile.open(fileName + ".txt");
	cout << "Please insert a message to keep on fil" << endl;
	char word[20];
	vector<string> msg;
	while (fgets(word, 20, stdin)) {
		msg.push_back(word);
	}
	
	for (int i = 0; i < msg.size(); i++) {
		wFile.seekp(0, std::ios::end);
		wFile << msg[i];
	}
	wFile.close();
}