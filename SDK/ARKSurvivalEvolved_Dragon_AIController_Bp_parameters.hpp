#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_AIController_Bp_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.OnLosingTargetEvent
struct ADragon_AIController_Bp_C_OnLosingTargetEvent_Params
{
};

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ReceiveTick
struct ADragon_AIController_Bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ShouldStayOnLand
struct ADragon_AIController_Bp_C_ShouldStayOnLand_Params
{
	bool                                               _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.IsUsingSpline
struct ADragon_AIController_Bp_C_IsUsingSpline_Params
{
	bool                                               _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.CalculateAndSetWonderingAIStateEvent
struct ADragon_AIController_Bp_C_CalculateAndSetWonderingAIStateEvent_Params
{
	bool*                                              StateChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.OnPossess
struct ADragon_AIController_Bp_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.UserConstructionScript
struct ADragon_AIController_Bp_C_UserConstructionScript_Params
{
};

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ReceiveBeginPlay
struct ADragon_AIController_Bp_C_ReceiveBeginPlay_Params
{
};

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ExecuteUbergraph_Dragon_AIController_Bp
struct ADragon_AIController_Bp_C_ExecuteUbergraph_Dragon_AIController_Bp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
