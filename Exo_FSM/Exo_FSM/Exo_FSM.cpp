#include <iostream>
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
	FSM_Agent agent;
	while (true)
	{
		agent.Update();
	}
}
