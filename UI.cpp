#include "UI.h"
#include <fstream>
#include <string>
#include "Processes.h"


void UI::Save() {
	/*ofstream outFile;
	outFile.open("savelog.txt", ios::out);
	for (int i = 0; i < nprocesses; i++) {
		outFile << "TT   PID   AT   CT   IO_D   WT   RT   TRT";
		outFile << TT << "    " << PID << "     " << AT << "    " << CT << "    " << IO_D << "    " << WT << "    " << RT << "    " << TRT << endl;
	}
	outFile << "Processes:" << nprocesses << endl;
	outFile << "Avg WT=" << avgWT << ",     Avg RT=" << avgRT << ",      Avg TRT=" << avgTRT << endl;
	outFile << "Migration %:    RTF=" << RTFperc << "%,      MaxW=" << MaxWperc << "%\n";
	outFile << "Work Steal %:" << wstealperc << "%\n";
	outFile << "Processors: " << nprocessors << "[" << nFCFS << " FCFS, " << nSJF << " SJF, " << nRR << " RR]" << endl;
	outFile << "Processors Load" << endl;
	for (int i = 0; i < nprocessors; i++) {
		outFile << "p" << i + 1 << "=" << procload[i] << "%,   ";
	}
	outFile << "Processors Utilization" << endl;
	float total;
	for (int i = 0; i < nprocessors; i++) {
		outFile << "p" << i + 1 << "=" << procutil[i] << "%,   ";
		total = procutil[i] + total;
	}
	outFile << "Avg utilization= " << total / nprocessors << "%\n";*/

}