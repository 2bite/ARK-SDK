#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateFollowSpline_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnTickEvent
struct UDinoAttackStateFollowSpline_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnBeginEvent
struct UDinoAttackStateFollowSpline_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.ShouldSkipIntervalCheckEvent
struct UDinoAttackStateFollowSpline_C_ShouldSkipIntervalCheckEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.EndAnimationStateEvent
struct UDinoAttackStateFollowSpline_C_EndAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnChildStateEndedEvent
struct UDinoAttackStateFollowSpline_C_OnChildStateEndedEvent_Params
{
	class UPrimalAIState**                             PrimalAIState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.StartAnimationStateEvent
struct UDinoAttackStateFollowSpline_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.TickAnimationStateEvent
struct UDinoAttackStateFollowSpline_C_TickAnimationStateEvent_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnCanUseStateEvent
struct UDinoAttackStateFollowSpline_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnEndEvent
struct UDinoAttackStateFollowSpline_C_OnEndEvent_Params
{
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.TickRangedState
struct UDinoAttackStateFollowSpline_C_TickRangedState_Params
{
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.GotoNextSpline
struct UDinoAttackStateFollowSpline_C_GotoNextSpline_Params
{
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.UpgradePawnAcceleration
struct UDinoAttackStateFollowSpline_C_UpgradePawnAcceleration_Params
{
	bool                                               Upgrade;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.FindDragonSplines
struct UDinoAttackStateFollowSpline_C_FindDragonSplines_Params
{
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.ExecuteUbergraph_DinoAttackStateFollowSpline
struct UDinoAttackStateFollowSpline_C_ExecuteUbergraph_DinoAttackStateFollowSpline_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
