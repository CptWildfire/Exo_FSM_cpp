#pragma once
#include "FSM_StateMachine.h"

class FSM_Agent
{
private:
	FSM_StateMachine* fsm;
public:
	FSM_Agent();
	void Update();
	~FSM_Agent();
};

