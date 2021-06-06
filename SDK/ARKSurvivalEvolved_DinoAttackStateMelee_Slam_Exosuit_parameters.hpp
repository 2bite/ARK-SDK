#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Slam_Exosuit_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.StartAnimationStateEvent
struct UDinoAttackStateMelee_Slam_Exosuit_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.BPGetSocketLocation
struct UDinoAttackStateMelee_Slam_Exosuit_C_BPGetSocketLocation_Params
{
	struct FName                                       SocketName;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit
struct UDinoAttackStateMelee_Slam_Exosuit_C_ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
