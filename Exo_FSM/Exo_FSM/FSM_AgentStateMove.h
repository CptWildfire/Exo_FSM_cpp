#pragma once
#include "FSM_State.h"

class FSM_AgentStateMove : public FSM_State
{
public:
	FSM_AgentStateMove(FSM_StateMachine* _fsm);
	void Init() override;
	bool CanEnter() override;
	void Enter() override;
	void Run() override;
	void Exit() override;
	std::string DebugFSM() override;
protected:
	bool CanExit() override;
};

