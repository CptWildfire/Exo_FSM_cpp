#include "FSM_Transition.h"

FSM_Transition::FSM_Transition()
{
}

FSM_Transition::FSM_Transition(FSM_State* _state, FSM_StateMachine* _fsm)
{
	nextState = _state;
	fsm = _fsm;
}

bool FSM_Transition::CanTransit()
{
	return nextState->CanEnter();
}

FSM_State* FSM_Transition::GetNextState()
{
	return nextState;
}
