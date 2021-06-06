#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsDragon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.RemoveDeadCharactersInContainer
struct UDinoAttackStateMinionsDragon_C_RemoveDeadCharactersInContainer_Params
{
	TArray<class APrimalDinoCharacter*>                Container_In;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APrimalDinoCharacter*>                ReturnArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.EndAnimationStateEvent
struct UDinoAttackStateMinionsDragon_C_EndAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.TickAnimationStateEvent
struct UDinoAttackStateMinionsDragon_C_TickAnimationStateEvent_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.StartAnimationStateEvent
struct UDinoAttackStateMinionsDragon_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnCanUseStateEvent
struct UDinoAttackStateMinionsDragon_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnEndEvent
struct UDinoAttackStateMinionsDragon_C_OnEndEvent_Params
{
};

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnTickEvent
struct UDinoAttackStateMinionsDragon_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnBeginEvent
struct UDinoAttackStateMinionsDragon_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.ExecuteUbergraph_DinoAttackStateMinionsDragon
struct UDinoAttackStateMinionsDragon_C_ExecuteUbergraph_DinoAttackStateMinionsDragon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
