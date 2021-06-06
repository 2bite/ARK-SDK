#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GetRandomPointOnGround_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GetRandomPointOnGround.GetRandomPointOnGround_C.ReceiveExecute
struct UGetRandomPointOnGround_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GetRandomPointOnGround.GetRandomPointOnGround_C.ExecuteUbergraph_GetRandomPointOnGround
struct UGetRandomPointOnGround_C_ExecuteUbergraph_GetRandomPointOnGround_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
