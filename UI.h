#pragma once
#include <fstream>
#include <iostream>
using namespace std;
#include "Processes.h"
class UI // : public Process - inherits from process to create
{
private:
	Processes* P;
	ifstream inFile;
	string fileName;

	// Process* newProc; - creates new process, allocates data given to it
public:
	void Load();
	void Save();

};

