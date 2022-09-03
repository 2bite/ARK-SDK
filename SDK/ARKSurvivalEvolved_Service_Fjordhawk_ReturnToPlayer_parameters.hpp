#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_Fjordhawk_ReturnToPlayer_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_Fjordhawk_ReturnToPlayer.Service_Fjordhawk_ReturnToPlayer_C.ReceiveTick
struct UService_Fjordhawk_ReturnToPlayer_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_Fjordhawk_ReturnToPlayer.Service_Fjordhawk_ReturnToPlayer_C.ExecuteUbergraph_Service_Fjordhawk_ReturnToPlayer
struct UService_Fjordhawk_ReturnToPlayer_C_ExecuteUbergraph_Service_Fjordhawk_ReturnToPlayer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
