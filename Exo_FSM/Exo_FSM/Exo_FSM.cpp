#include <iostream>
#include <thread>
#include <windows.h>
#include "FSM_Agent.h"

void Credits()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4E);
	std::cout << "\n**************************\n***FSM cpp by Nathan P3***\n**************************\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}

int main()
{
	Credits();
	//
	FSM_Agent aMichel("Michel");
	FSM_Agent aJean("Jean");

	std::thread agent1(&FSM_Agent::Run, &aMichel);
	std::thread agent2(&FSM_Agent::Run, &aJean);
	
	agent1.join();
	agent2.join();
}
