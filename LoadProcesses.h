#pragma once
#include <fstream>
#include <iostream>
using namespace std;
//#include "~\Process.h"
class LoadProcesses // : public Process - inherits from process to create
{
private:
   ifstream inFile;
	int countprocesses;
	// Process* newProc; - creates new process, allocates data given to it
public:
	void Execute();
	
};

