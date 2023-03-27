#include "Processor.h"
#include "Scheduler/QueueADT.h"

Processor::Processor()
{

};

bool Processor::getbusy()
{
	return isbusy;
};

int Processor::getload()
{
	return load;
}

int Processor::getutil()
{
	return util;
}

void Processor::setbusy(bool x)
{
	isbusy = x;
};

void Processor::addready(Processes p1)
{
	Ready.enqueue(p1);
	
}

void Processor::removeready()
{
	Processes p1;
	Ready.dequeue(p1);

}

void Processor::addrun(Processes p1)
{
	Run = p1;
}

Processes Processor::getrun()
{
	return Run;
}

Processor::~Processor()
{

};