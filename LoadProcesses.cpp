#include "LoadProcesses.h"
#include <fstream>
#include <string>
void LoadProcesses::Execute() {
	string fileName;
	ifstream inFile;
	cin >> fileName;
	inFile.open(fileName + ".txt", ios::in);
	if (inFile.is_open()) {
		inFile >> SDrawColor >> SFillColor >> countfigs;
	}
	else
		cout << "File not found";
	inFile.close();
}