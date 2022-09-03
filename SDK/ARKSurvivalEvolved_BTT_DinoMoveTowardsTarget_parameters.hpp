#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_DinoMoveTowardsTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveAbort
struct UBTT_DinoMoveTowardsTarget_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveTick
struct UBTT_DinoMoveTowardsTarget_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveExecute
struct UBTT_DinoMoveTowardsTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ExecuteUbergraph_BTT_DinoMoveTowardsTarget
struct UBTT_DinoMoveTowardsTarget_C_ExecuteUbergraph_BTT_DinoMoveTowardsTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
