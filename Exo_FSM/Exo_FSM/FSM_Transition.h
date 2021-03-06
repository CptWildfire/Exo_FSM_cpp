#pragma once

class FSM_State;
class FSM_StateMachine;

class FSM_Transition
{
protected:
	FSM_StateMachine* fsm;
	FSM_State* nextState;
public:
	FSM_Transition();
	FSM_Transition(FSM_State* _state, FSM_StateMachine* _fsm);
	virtual ~FSM_Transition();
	virtual bool CanTransit();
	FSM_State* GetNextState();
};

