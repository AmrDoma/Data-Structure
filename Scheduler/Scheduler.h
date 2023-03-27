#pragma once
#include "..\Processes.h"
#include "..\Processor.h"
#include "QueueADT.h"
#include "NEW.h"
#include "BLK.h"
#include "RDY.h"
#include <fstream>
#include "..\FCFS.h"
#include "..\SJF.h"
#include "..\RR.h"

class Scheduler
{
private:
	int nFCFS, nSJF, nRR, tRR, nprocesses, nprocessors, AT, CT, PID, nIO, IO_R, IO_D, nsigkill, tkillp, idkillp, RTF, MaxW, ForkProb;
	int TT, PID, WT, RT, TRT, avgWT, avgRT, avgTRT, RTFperc, wstealperc, MaxWperc;
	ifstream inFile;
	string fileName;

	QueueADT <Processor> P;
	QueueADT <Processes> New;
	QueueADT <Processes> Blk;
	QueueADT <Processes> Trm;

public:
	Scheduler(); //Default constructor
	void LoadFile();
	void addFCFS(QueueADT<Processor> &P);
	void addSJF(QueueADT<Processor> &P);
	void addRR(QueueADT<Processor> &P, int tsl);
	void addNew(QueueADT<Processes>& P, int AT, int PID, int CT, int nIO, int IO_R, int IO_D);

};

