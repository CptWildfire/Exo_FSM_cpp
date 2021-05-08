#pragma once
#include "FSM_StateMachine.h"

class FSM_Agent
{
private:
	std::string name = "Agent";
	FSM_StateMachine* fsm;
	void Update();

public:
	FSM_Agent();
	FSM_Agent(std::string _name);
	std::string GetName();
	void Run();
	~FSM_Agent();
};

