#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_UpdateTargetZiplineAndLocation_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ReceiveActivation
struct UZipline_UpdateTargetZiplineAndLocation_SRV_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ReceiveTick
struct UZipline_UpdateTargetZiplineAndLocation_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV
struct UZipline_UpdateTargetZiplineAndLocation_SRV_C_ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
