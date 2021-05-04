#pragma once
#include <string>
#include <vector>
#include "FSM_Transition.h"

class FSM_StateMachine;
class FSM_State
{
protected:
	FSM_StateMachine* fsm;
	FSM_State* nextState;
	FSM_Transition* validTrans;
	std::vector<FSM_Transition*> allTrans;

	bool isEnter = false;
	bool foundValidTrans = false;

public:
	FSM_State();
	FSM_State(FSM_StateMachine* _fsm);
	
	virtual bool CanEnter();
	virtual void Enter();
	virtual void Run();
	virtual void Exit();
	
	bool GetIsFinish();
	bool GetIsEnter();
	virtual std::string DebugFSM();

protected:
	virtual bool CanExit();
};

