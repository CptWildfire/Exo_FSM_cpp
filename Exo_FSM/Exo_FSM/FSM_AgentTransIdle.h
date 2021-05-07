#pragma once
#include "FSM_Transition.h"

class FSM_AgentTransIdle : public FSM_Transition
{
public:
	FSM_AgentTransIdle(FSM_State* _state, FSM_StateMachine* _fsm);
	~FSM_AgentTransIdle() override;
	bool CanTransit() override;
};

