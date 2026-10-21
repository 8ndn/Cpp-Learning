#include <iostream>
#include <string>

enum ProcessState {

	RUNNING = 10,
	SUSPENDED = 11,
	TERMINATED = 12

};
struct ProcessInfo {

	int pid;
	std::string processName;
	ProcessState State;

};

int main() {

	ProcessInfo proc1 = {120 , "ida.exe" , RUNNING};
	ProcessInfo proc2 = { 154, "ghidra.exe", TERMINATED };

	std::cout << "The Process 1 " << proc1.processName << " Is running on the pid " << proc1.pid << " And The State of it is : " << (proc1.State == 10 ? "RUNNING" : "Not Running") << std::endl;

	std::cout << "The Process 1 " << proc2.processName << " Is running on the pid " << proc1.pid << " And the State of it is  : " << (proc2.State == 12 ? "TERMINATED" : "Other") << std::endl;

	return 0;

}
