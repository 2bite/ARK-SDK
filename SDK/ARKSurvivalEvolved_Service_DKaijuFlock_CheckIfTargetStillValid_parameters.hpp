#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_DKaijuFlock_CheckIfTargetStillValid_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ReceiveTick
struct UService_DKaijuFlock_CheckIfTargetStillValid_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ReceiveActivation
struct UService_DKaijuFlock_CheckIfTargetStillValid_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ExecuteUbergraph_Service_DKaijuFlock_CheckIfTargetStillValid
struct UService_DKaijuFlock_CheckIfTargetStillValid_C_ExecuteUbergraph_Service_DKaijuFlock_CheckIfTargetStillValid_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
