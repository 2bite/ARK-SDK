#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinAttackRangeInput_Buffer_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IsWithinAttackRangeInput_Buffer_SRV.IsWithinAttackRangeInput_Buffer_SRV_C.ReceiveTick
struct UIsWithinAttackRangeInput_Buffer_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IsWithinAttackRangeInput_Buffer_SRV.IsWithinAttackRangeInput_Buffer_SRV_C.ExecuteUbergraph_IsWithinAttackRangeInput_Buffer_SRV
struct UIsWithinAttackRangeInput_Buffer_SRV_C_ExecuteUbergraph_IsWithinAttackRangeInput_Buffer_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
