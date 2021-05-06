#pragma once
#include "FSM_State.h"

class FSM_AgentStateIdle : public FSM_State
{
public:
	FSM_AgentStateIdle(FSM_StateMachine* _fsm);
	
	bool CanEnter() override;
	void Enter() override;
	void Run() override;
	void Exit() override;
protected:
	bool CanExit() override;
public:
	std::string DebugFSM() override;
	void Init() override;
};

