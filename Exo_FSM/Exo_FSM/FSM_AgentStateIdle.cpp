#include "FSM_AgentStateIdle.h"
#include "FSM_AgentStateMove.h"
#include "FSM_AgentTransIdle.h"

FSM_AgentStateIdle::FSM_AgentStateIdle(FSM_StateMachine* _fsm) :FSM_State(_fsm) {}

bool FSM_AgentStateIdle::CanEnter()
{
	return FSM_State::CanEnter();
}

void FSM_AgentStateIdle::Enter()
{
	FSM_State::Enter();
}

void FSM_AgentStateIdle::Run()
{
	FSM_State::Run();
}

void FSM_AgentStateIdle::Exit()
{
	FSM_State::Exit();
}

bool FSM_AgentStateIdle::CanExit()
{
	return FSM_State::CanExit();
}

std::string FSM_AgentStateIdle::DebugFSM()
{
	return std::string("Idle");
}

void FSM_AgentStateIdle::Init()
{
	allTrans.push_back(new FSM_AgentTransIdle(new FSM_AgentStateMove(fsm), fsm));
}
