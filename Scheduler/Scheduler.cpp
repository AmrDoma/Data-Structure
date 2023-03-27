#include "Scheduler.h"
#include "..\Scheduler\QueueADT.h"
#include <iostream>
using namespace std;

Scheduler::Scheduler()
{

}

void Scheduler::LoadFile() {

	cout << "Enter the file name:";
	cin >> fileName;
	cout << endl;
	//newProc= new Process; - create new process, then edit all in it
	inFile.open(fileName + ".txt", ios::in);
	if (inFile.is_open()) {
		
		inFile >> nFCFS >> nSJF >> nRR; // inputs number of processors of each type
		for (int i = 0; i < nFCFS; i++)
			addFCFS(P);
		for (int i = 0; i < nSJF; i++)
			addSJF(P);
	
		nprocessors = nFCFS + nSJF + nRR;
		inFile >> tRR; // inputs time slice for RR
		for (int i = 0; i < nRR; i++)
			addRR(P,tRR);

		inFile >> RTF >> MaxW >> ForkProb; // Phase 2 stuff




		inFile >> nprocesses;

		for (int i = 0; i < nprocesses; i++) {
			inFile >> AT >> PID >> CT >> nIO;
			
			if (nIO > 0) {
				for (int i = 0; i < nIO; i++) {
					inFile.ignore();
					inFile >> IO_R;
					inFile.ignore();
					inFile >> IO_D;
					inFile.ignore(2);
				}
			}
			addNew(New, AT, PID, CT, nIO, IO_R, IO_D);
		}
		inFile.ignore(13);
		for (int i = 0; i < nsigkill; i++) {
			inFile >> tkillp >> idkillp;
		}
		cout << "File successfully loaded!" << endl;
	}
	else
		cout << "File not found";
	inFile.close();
}

void Scheduler::addFCFS(QueueADT<Processor> &P)
{
	FCFS P2;
	P.enqueue(P2);
}

void Scheduler::addSJF(QueueADT<Processor> &P)
{
	SJF P2;
	P.enqueue(P2);
}

void Scheduler::addRR(QueueADT<Processor> &P,int tsl)
{
	RR P2;
	P2.settsl(tsl);
	P.enqueue(P2);
}

void Scheduler::addNew(QueueADT<Processes>& New,int AT,int PID,int CT,int nIO,int IO_R,int IO_D)
{
	Processes P2(AT,PID,CT,nIO,IO_R,IO_D);
}

