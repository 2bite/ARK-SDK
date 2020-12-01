#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_DKFlockAdjustSpeed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ReceiveTick
struct UService_DKFlockAdjustSpeed_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ExecuteUbergraph_Service_DKFlockAdjustSpeed
struct UService_DKFlockAdjustSpeed_C_ExecuteUbergraph_Service_DKFlockAdjustSpeed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
