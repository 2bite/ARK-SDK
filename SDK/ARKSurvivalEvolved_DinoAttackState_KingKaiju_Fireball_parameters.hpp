#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_KingKaiju_Fireball_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.BPOnAttackStart
struct UDinoAttackState_KingKaiju_Fireball_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.BPOnAttackEnd
struct UDinoAttackState_KingKaiju_Fireball_C_BPOnAttackEnd_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.StartAnimationStateEvent
struct UDinoAttackState_KingKaiju_Fireball_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.ExecuteUbergraph_DinoAttackState_KingKaiju_Fireball
struct UDinoAttackState_KingKaiju_Fireball_C_ExecuteUbergraph_DinoAttackState_KingKaiju_Fireball_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
