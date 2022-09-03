#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_Fjordhawk_UpdateLootTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C.ReceiveTick
struct UService_Fjordhawk_UpdateLootTarget_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C.ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget
struct UService_Fjordhawk_UpdateLootTarget_C_ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
