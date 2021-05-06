#include "FSM_StateMachine.h"
#include <iostream>
#include "FSM_Agent.h"

void FSM_StateMachine::DebugFSM()
{
	if (!debug)return;
	std::cout << currentState->DebugFSM() << std::endl;
}

FSM_StateMachine::FSM_StateMachine(){}

FSM_StateMachine::FSM_StateMachine(FSM_Agent* _agent, FSM_State* _defaultState)
{
	agent = _agent;
	currentState = _defaultState;
	currentState->Init();
	
	active = true;
	debug = true;
}

void FSM_StateMachine::Run()
{
	if (!active)return;
	if (currentState == nullptr)return;
	if (!currentState->GetIsEnter())currentState->Enter();
	if (!currentState->GetIsFinish())
	{
		currentState->Run();
		DebugFSM();
	}
	else currentState->Exit();
}

void FSM_StateMachine::SwitchNextSate(FSM_State* _nextState)
{
	delete(currentState);
	currentState = _nextState;
}
