#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CheckForBlockade_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveTick
struct UCheckForBlockade_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveActivation
struct UCheckForBlockade_SRV_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveDeactivation
struct UCheckForBlockade_SRV_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ExecuteUbergraph_CheckForBlockade_SRV
struct UCheckForBlockade_SRV_C_ExecuteUbergraph_CheckForBlockade_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
