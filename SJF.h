#pragma once
#include "Processor.h"
#include "Scheduler\QueueADT.h"
using namespace std;

class SJF : public Processor
{
private:

	QueueADT<Processes> rdysjf;


public:
	SJF();

	void Processor::ScheduleAlgo();

	~SJF();




};

