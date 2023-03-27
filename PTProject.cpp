#include "Scheduler.h"
#include "QueueADT.h"
#include <iostream>
#include <fstream>
using namespace std;

Scheduler::Scheduler(){};
void Scheduler::LoadFile(){
	cin >> fileName;

	//newProc= new Process; - create new process, then edit all in it
	inFile.open(fileName + ".txt", ios::in);
	if (inFile.is_open()) {
		inFile >> nFCFS >> nSJF >> nRR; // inputs number of processors of each type

		inFile >> tRR; // inputs time slice for RR

		inFile >> RTF >> MaxW >> ForkProb; // inputs thresholds RTF and MaxW

		inFile >> nprocesses;
		for (int i = 0; i < nprocesses; i++) {
			inFile >> AT >> PID >> CT >> nIO;
			P->set_CPU_time(CT);
			P->set_arrival_time(AT);
			if (nIO > 0) {
				for (int i = 0; i < nIO; i++) {
					inFile.ignore();
					inFile >> IO_R;
					inFile.ignore();
					inFile >> IO_D;
					inFile.ignore(2);
				}
			}

		}
		cout << "SIGKILL TIMES" << endl;
		for (int i = 0; i < nsigkill; i++) {
			inFile >> tkillp >> idkillp;
		}
	}
	else

	{
		cout << "File not found";
		inFile.close();

	}
}
