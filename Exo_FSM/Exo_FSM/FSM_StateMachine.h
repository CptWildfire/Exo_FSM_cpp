#pragma once
#include "FSM_State.h"

class FSM_Agent;
class FSM_StateMachine
{
private:
	FSM_Agent* agent;
	FSM_State* currentState;

public:
	FSM_StateMachine();
	FSM_StateMachine(FSM_Agent* _agent, FSM_State* _defaultState);
	void Run();
	void SwitchNextSate(FSM_State* _nextState);
};

