#include <conio.h>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void openFile();
void readFile();
void addFile();

int main() {
	//write

	char opt;
	do{
			cout << "What would you like to do?" << endl;
		cout << "(O)pen" << endl;
		cout << "(R)ead\t" << endl;
		cout << "(A)dd" << endl;
		cout << "(Q)uit" << endl;
		cin >> opt;
		cout << "\n";

		switch (opt)
		{
		case 'O': case'o':
			cout << "You chose to open a new file" << endl;
			openFile();
			break;
		case'R': case'r':
			cout << "You chose to load a file" << endl;
			readFile();
			break;
		case'A': case'a':
			cout << "You chose to add to a file" << endl;
			addFile();
			break;
		case 'Q': case 'q':
			cout << "Quit" << endl;
			break;
		default:
			cout << "\aNot a valid option" << endl;
			break;
		}
	} 	while (opt != 'q' && opt != 'Q');
	cout << "\nThanks for using my program" << endl;

	
	return 0;
}

void openFile() {
	cout << "Insert the name of your file: " << endl;
	string fileName;
	cin >> fileName;
	ofstream wFile;
	wFile.open(fileName + ".txt");
	cout << "Please insert a message to keep on file" << endl;
	char word[20];
	vector<string> msg;
	while (fgets(word, 20, stdin)) {
		msg.push_back(word);
	}
	
	for (unsigned int i = 0; i < msg.size(); i++) {
		wFile.seekp(0, std::ios::end);
		wFile << msg[i];
	}
	wFile.close();
}

void readFile()
{
	cout << "Type the name of the file you want to open" << endl;
	string fileName;
	fseek(stdin, 0, SEEK_END);
	cin >> fileName;
	cout << "\n";
	ifstream rFile;
	rFile.open(fileName + ".txt");

	if (rFile.is_open()) {
		cout << "The file was opened succesfully: \n\n" << endl;
		for (char c = rFile.get(); rFile.good(); c = rFile.get()) {
			_putch(c);
		}
	}
	if (rFile.bad()) {
		cout << "\aThe File has failed to open" << endl;
	}
	if (!rFile.is_open()) {
		cout << "\aThe File has failed to open" << endl;

	}
	cout << "\n\n\nend" << endl;
	rFile.close();
}

void addFile()
{
	cout << "Insert the name of the file you would like to add to" << endl;
	string fileName;
	cin >> fileName;
	cout << "\n";
	ofstream aFile;
	aFile.open(fileName + ".txt", std::ios::app);
	if (aFile.is_open()) {
		cout << "The File was opened succesfully" << endl;
		cout << "Please insert the message to append" << endl;
		vector<string>msg;
		char word[15];
		while (fgets(word, 15, stdin)) {
			aFile << word;
		}
	}
	if (!aFile.is_open()) {
		cout << "\aThe File failed to open" << endl;
	}
	cout << "end" << endl;
	aFile.close();
}
