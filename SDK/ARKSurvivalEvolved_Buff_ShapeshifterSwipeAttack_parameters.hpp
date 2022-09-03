#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ShapeshifterSwipeAttack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.ReceiveBeginPlay
struct ABuff_ShapeshifterSwipeAttack_C_ReceiveBeginPlay_Params
{
};

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.AllowPostProcessEffect
struct ABuff_ShapeshifterSwipeAttack_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPDeactivated
struct ABuff_ShapeshifterSwipeAttack_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPSetupForInstigator
struct ABuff_ShapeshifterSwipeAttack_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BuffTickServer
struct ABuff_ShapeshifterSwipeAttack_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPActivated
struct ABuff_ShapeshifterSwipeAttack_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.UserConstructionScript
struct ABuff_ShapeshifterSwipeAttack_C_UserConstructionScript_Params
{
};

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.ExecuteUbergraph_Buff_ShapeshifterSwipeAttack
struct ABuff_ShapeshifterSwipeAttack_C_ExecuteUbergraph_Buff_ShapeshifterSwipeAttack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
