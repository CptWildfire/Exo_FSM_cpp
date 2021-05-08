#include "FSM_Agent.h"

#include <iostream>

#include "FSM_AgentStateIdle.h"

FSM_Agent::FSM_Agent()
{
	fsm = new FSM_StateMachine(this);
	fsm->Init(new FSM_AgentStateIdle(fsm));
}

FSM_Agent::FSM_Agent(std::string _name) : FSM_Agent()
{
	name = _name;
}

void FSM_Agent::Update()
{
	while (true)
	{
		fsm->Run();
	}
}

std::string FSM_Agent::GetName()
{
	return name;
}

void FSM_Agent::Run()
{
	Update();
}

FSM_Agent::~FSM_Agent()
{
	delete(fsm);
}
