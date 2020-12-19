#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_AttackState_Leap_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnClearAttackState
struct UIceKaiju_AttackState_Leap_C_BPOnClearAttackState_Params
{
};

// Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackEnd
struct UIceKaiju_AttackState_Leap_C_BPOnAttackEnd_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackStart
struct UIceKaiju_AttackState_Leap_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.ExecuteUbergraph_IceKaiju_AttackState_Leap
struct UIceKaiju_AttackState_Leap_C_ExecuteUbergraph_IceKaiju_AttackState_Leap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
