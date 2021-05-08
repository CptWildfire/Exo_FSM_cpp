#include "FSM_StateMachine.h"
#include <iostream>
#include "FSM_Agent.h"

void FSM_StateMachine::DebugFSM()
{
	if (!debug)return;
	std::cout << agent->GetName() << " : " << currentState->DebugFSM() << std::endl;
}

FSM_StateMachine::FSM_StateMachine() {}

FSM_StateMachine::FSM_StateMachine(FSM_Agent* _agent)
{
	agent = _agent;
	debug = true;
}

void FSM_StateMachine::Init(FSM_State* _defaultState)
{
	currentState = _defaultState;
	currentState->Init();
	active = true;
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
	if(!currentState)return;
	
	FSM_State* _oldState = currentState;
	currentState = _nextState;
	currentState->Init();
	delete(_oldState);
}

FSM_State* FSM_StateMachine::GetCurrentState()
{
	return currentState;
}
