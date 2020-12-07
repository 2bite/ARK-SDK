#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsPrimalStructure_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IsPrimalStructure.IsPrimalStructure_C.ReceiveConditionCheck
struct UIsPrimalStructure_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IsPrimalStructure.IsPrimalStructure_C.ExecuteUbergraph_IsPrimalStructure
struct UIsPrimalStructure_C_ExecuteUbergraph_IsPrimalStructure_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
