#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaijuAttackStateIceNeedle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackStart
struct UIceKaijuAttackStateIceNeedle_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.StartAnimationStateEvent
struct UIceKaijuAttackStateIceNeedle_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackTick
struct UIceKaijuAttackStateIceNeedle_C_BPOnAttackTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.TickAnimationStateEvent
struct UIceKaijuAttackStateIceNeedle_C_TickAnimationStateEvent_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.ExecuteUbergraph_IceKaijuAttackStateIceNeedle
struct UIceKaijuAttackStateIceNeedle_C_ExecuteUbergraph_IceKaijuAttackStateIceNeedle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
