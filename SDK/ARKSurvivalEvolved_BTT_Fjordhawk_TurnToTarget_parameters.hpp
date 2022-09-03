#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Fjordhawk_TurnToTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ReceiveTick
struct UBTT_Fjordhawk_TurnToTarget_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget
struct UBTT_Fjordhawk_TurnToTarget_C_ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
