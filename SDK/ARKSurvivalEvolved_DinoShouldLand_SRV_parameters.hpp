#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoShouldLand_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoShouldLand_SRV.DinoShouldLand_SRV_C.ReceiveTick
struct UDinoShouldLand_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoShouldLand_SRV.DinoShouldLand_SRV_C.ExecuteUbergraph_DinoShouldLand_SRV
struct UDinoShouldLand_SRV_C_ExecuteUbergraph_DinoShouldLand_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
