#include "FSM_Agent.h"
#include "FSM_AgentStateIdle.h"

FSM_Agent::FSM_Agent()
{
	fsm = new FSM_StateMachine(this, new FSM_AgentStateIdle(fsm));
}

FSM_Agent::~FSM_Agent()
{
	delete(fsm);
}
