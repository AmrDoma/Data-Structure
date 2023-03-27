#include <iostream>
#include "Scheduler/QueueADT.h"
using namespace std;


class Processes
{
	private:
		int PID;
		int AT;
		int RT;
		int CT;
		int TT;
		int TRT;
		int WT;
		bool Is_System;
		string process_state;
		int IOR;
		int IOD;
		int IOnum;
public:
	Processes(int PID, int AT, int RT,int CT,int TT, bool Is_system, int process_state,int IOR,int IOD);
	Processes(int id, int arrtime, int CPUtime, int NIO, int IO_R = 0, int IO_D = 0);
	Processes();
	
	void setPID(int PID);
	int getPID();
	void set_AT(int AT);
	int get_AT();
	void set_RT(int RT);
	int get_RT();
	void set_CT(int CT);
	int get_CT();
	void set_TT(int TT);
	int get_TT();
	void set_TRT(); 
	int get_TRT();
	void set_WT();
	int get_WT();
	void set_IOR(int IOR);
	int get_minwt(Processes p1);
	int get_IOR();
	void set_IOD(int IOD);
	int get_IOD();
	void set_Is_System(bool Is_system);
	bool get_Is_System();
	void set_Process_State(int process_state);
	string get_Process_State();
	
};