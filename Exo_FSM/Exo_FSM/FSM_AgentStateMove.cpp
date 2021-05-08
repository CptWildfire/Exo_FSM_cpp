#include "FSM_AgentStateMove.h"
#include "FSM_AgentStateIdle.h"
#include "FSM_AgentTransIdle.h"

FSM_AgentStateMove::FSM_AgentStateMove(FSM_StateMachine* _fsm) : FSM_State(_fsm) {}

void FSM_AgentStateMove::Init()
{
	allTrans.push_back(new FSM_AgentTransIdle(new FSM_AgentStateIdle(fsm), fsm));
}

bool FSM_AgentStateMove::CanEnter()
{
	return FSM_State::CanEnter();
}

void FSM_AgentStateMove::Enter()
{
	FSM_State::Enter();
}

void FSM_AgentStateMove::Run()
{
	FSM_State::Run();
}

void FSM_AgentStateMove::Exit()
{
	FSM_State::Exit();
}

std::string FSM_AgentStateMove::DebugFSM()
{
	return std::string("Move");
}

bool FSM_AgentStateMove::CanExit()
{
	return FSM_State::CanExit();
}
