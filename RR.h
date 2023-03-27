#pragma once
#include "Processor.h"
#include "Scheduler\QueueADT.h"
using namespace std;


class RR :public Processor
{
private:
	QueueADT<Processes> rdyrr;

	int timeslice;

public:
	RR();

	void settsl(int tsl);

	int gettsl();

	void Processor::ScheduleAlgo();

	~RR();



};

