#include "RR.h"

RR::RR()
{

}

void RR::settsl(int tsl)
{
	timeslice = tsl;
}

int RR::gettsl()
{
	return timeslice;
}

void RR::ScheduleAlgo()
{
	Processes p1;
	if (p1.get_AT() + gettsl() == gettimestep())
	{
		rdyrr.enqueue(this->getrun());
		this->addrun(rdyrr.dequeue(p1));
	}

}


RR::~RR()
{

}
