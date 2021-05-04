#include "FSM_StateMachine.h"
#include <iostream>
#include "FSM_Agent.h"

FSM_StateMachine::FSM_StateMachine()
{
}

FSM_StateMachine::FSM_StateMachine(FSM_Agent* _agent, FSM_State* _defaultState)
{
}

void FSM_StateMachine::Run()
{
	std::cout << currentState->DebugFSM() << std::endl;
}

void FSM_StateMachine::SwitchNextSate(FSM_State* _nextState)
{
}
