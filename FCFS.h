#pragma once
#include "Processor.h"
#include "Processes.h"
#include "Scheduler\QueueADT.h"
using namespace std;

class FCFS : public Processor
{
private:

    QueueADT<Processes> rdyfcfs;



public:
    FCFS();

    void Processor::ScheduleAlgo();

    ~FCFS();



};


