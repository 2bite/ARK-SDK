#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoShouldFly_Corrupt_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoShouldFly_Corrupt_SRV.DinoShouldFly_Corrupt_SRV_C.ReceiveTick
struct UDinoShouldFly_Corrupt_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoShouldFly_Corrupt_SRV.DinoShouldFly_Corrupt_SRV_C.ExecuteUbergraph_DinoShouldFly_Corrupt_SRV
struct UDinoShouldFly_Corrupt_SRV_C_ExecuteUbergraph_DinoShouldFly_Corrupt_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
