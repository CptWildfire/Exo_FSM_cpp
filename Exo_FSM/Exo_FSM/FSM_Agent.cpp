#include "FSM_Agent.h"

#include <iostream>

#include "FSM_AgentStateIdle.h"

FSM_Agent::FSM_Agent()
{
	fsm = new FSM_StateMachine(this, new FSM_AgentStateIdle(fsm));
}

void FSM_Agent::Update()
{
	fsm->Run();
}

FSM_Agent::~FSM_Agent()
{
	delete(fsm);
}
