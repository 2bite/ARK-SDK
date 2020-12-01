#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_UpdateTargetZiplineAndLocation_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ReceiveActivation
struct UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ReceiveTick
struct UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV
struct UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
