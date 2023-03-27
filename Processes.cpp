#include <iostream>
using namespace std;
#include "Processes.h"



	Processes:: Processes(int id, int arrtime, int ResponseTime,int CPUtime,int Termination_Time, bool ProcessType, int ProcessState,int IO_Request,int IO_Duration)
	{
		PID=id;
		AT=arrtime;
		RT=ResponseTime;
		CT=CPUtime;
		TT=Termination_Time;
		TRT=Termination_Time-arrtime;
		WT=TRT-CT;
		if (ProcessType==true)
			Is_System=true;// lw el uer dakhel true yba el process type hwa system process
		else 
			Is_System=false;// lw el user 3aml false yba el process type hwa el user process
			
		
		if (ProcessState==1)
			process_state='NEW';
		else if (ProcessState==2)
			process_state='RDY';
		else if (ProcessState==3)
			process_state='RUN';
		else if (ProcessState==4)
			process_state='BLK';
		else 
			process_state='TRM';

		IOR=IO_Request;
		IOD=IO_Duration;
}
	Processes::Processes(int id, int arrtime, int CPUtime, int NIO, int IO_R=0, int IO_D=0)
	{
		PID = id;
		AT = arrtime;
		CT = CPUtime;
		IOnum = NIO;
		IOR = IO_R;
		IOD = IO_D;
	}
	;
	Processes::Processes()
	{

	};
	
	void Processes:: setPID(int id)
	{
		PID=id;
	}
	int Processes:: getPID()
	{
		return PID;
	}

	int Processes::get_minwt(Processes p1)
	{
		int minwt = 0;
		if (p1.get_WT() < WT)
		{
			minwt = p1.get_WT();
		}
		else
			minwt = WT;
		return minwt;
	}

	void Processes:: set_AT(int arrtime)
	{
		AT=arrtime;
	}
	int Processes:: get_AT()
	{
		return AT;
	}
	void Processes:: set_RT(int ResponseTime)
	{
		RT=ResponseTime;
	}
	int Processes:: get_RT()
	{
		return RT;
	}
	void Processes:: set_CT(int CPUtime)
	{
		CT=CPUtime;
	}
	int Processes:: get_CT()
	{
		return CT;
	}
	void Processes:: set_TT(int Termination_Time)
	{
		TT=Termination_Time;
	}
	int Processes:: get_TT()
	{
		return TT;
	}
	void Processes:: set_TRT()
	{
		TRT=TT-AT;
	}
	int Processes:: get_TRT()
	{
		return TRT;
	}
	void Processes:: set_WT()
	{
		WT=TRT-CT;
	}
	int Processes:: get_WT()
	{
		return WT;
	}
	void Processes:: set_IOR(int IO_Request)
	{
		IOR=IO_Request;
	}
	int Processes:: get_IOR()
	{
		return IOR;
	}
	void Processes:: set_IOD(int IO_Duration)
	{
		IOD=IO_Duration;
	}
	int Processes:: get_IOD()
	{
		return IOD;
	}

	void Processes:: set_Is_System(bool ProcessType)
	{
		if (ProcessType==true)
			Is_System=true;
		else 
			Is_System=false;
	}
	bool Processes:: get_Is_System()
	{
		return Is_System;
	}
	void Processes:: set_Process_State(int ProcessState)
	{
		if (ProcessState==1)
			process_state='NEW';
		else if (ProcessState==2)
			process_state='RDY';
		else if (ProcessState==3)
			process_state='RUN';
		else if (ProcessState==4)
			process_state='BLK';
		else 
			process_state='TRM';
	}
	string Processes:: get_Process_State()
	{
		return process_state;
	}