#pragma once
#include "FSM_StateMachine.h"

class FSM_Agent
{
private:
	std::string name = "Agent";
	FSM_StateMachine* fsm;
public:
	FSM_Agent();
	FSM_Agent(std::string _name);
	void Update();
	std::string GetName();
	~FSM_Agent();
};

