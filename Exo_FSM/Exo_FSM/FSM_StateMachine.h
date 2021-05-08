#pragma once
#include "FSM_State.h"

class FSM_Agent;
class FSM_StateMachine
{
private:
	bool active = false;
	bool debug = false;
	FSM_Agent* agent;
	FSM_State* currentState;

	void DebugFSM();

public:
	FSM_StateMachine();
	FSM_StateMachine(FSM_Agent* _agent);
	void Init(FSM_State* _defaultState);
	void Run();
	void SwitchNextSate(FSM_State* _nextState);
	FSM_State* GetCurrentState();
};

