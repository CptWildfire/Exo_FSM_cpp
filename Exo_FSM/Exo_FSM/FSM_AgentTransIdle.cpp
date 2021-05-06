#include "FSM_AgentTransIdle.h"

#include "FSM_State.h"

FSM_AgentTransIdle::FSM_AgentTransIdle(FSM_State* _state, FSM_StateMachine* _fsm) : FSM_Transition(_state, _fsm){}

bool FSM_AgentTransIdle::CanTransit()
{
	return nextState->CanEnter();
}
