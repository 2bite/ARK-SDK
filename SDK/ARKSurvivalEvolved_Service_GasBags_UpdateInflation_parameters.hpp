#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_GasBags_UpdateInflation_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ReceiveTick
struct UService_GasBags_UpdateInflation_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ExecuteUbergraph_Service_GasBags_UpdateInflation
struct UService_GasBags_UpdateInflation_C_ExecuteUbergraph_Service_GasBags_UpdateInflation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
