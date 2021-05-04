#include "FSM_State.h"

#include "FSM_StateMachine.h"

FSM_State::FSM_State()
{
}

FSM_State::FSM_State(FSM_StateMachine* _fsm)
{
	fsm = _fsm;
}

bool FSM_State::CanEnter()
{
	return true;
}

void FSM_State::Enter()
{
	isEnter = true;
}

void FSM_State::Run()
{
	foundValidTrans = CanExit();
}

void FSM_State::Exit()
{
	fsm->SwitchNextSate(validTrans->GetNextState());
}

bool FSM_State::GetIsFinish()
{
	return foundValidTrans;
}

bool FSM_State::GetIsEnter()
{
	return isEnter;
}

std::string FSM_State::DebugFSM()
{
	return std::string("FSM - State");
}

bool FSM_State::CanExit()
{
	for (int i = 0; i < allTrans.size(); ++i)
	{
		if(allTrans[i]->CanTransit())
		{
			validTrans = allTrans[i];
			return true;
		}
	}
	return false;
}
