#include "Scheduler\QueueADT.h"
#include "Processes.h"
using namespace std;


class Processor
{
private:

	Processes Run;
	bool isbusy;
	int load;
	int util; //processor utilization
	
	QueueADT<Processes> Ready;



public:

	Processor();
	bool getbusy();
	int getload();
	int getutil();
	void setbusy(bool x);
	void addready(Processes p1);
	void addrun(Processes p1);
	Processes getrun();
	void removeready();
	virtual void ScheduleAlgo() = 0;
	~Processor();



};

