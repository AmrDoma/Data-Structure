#include "SJF.h"

SJF::SJF()
{

}

void SJF::ScheduleAlgo(Processes p1)
{
	if (p1.get_WT() == p1.get_minwt())
	{
		rdysjf.enqueue(p1);
		this->addrun(p1);
	}

}

SJF::~SJF()
{

}
