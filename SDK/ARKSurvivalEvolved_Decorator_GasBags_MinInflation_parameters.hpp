#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_GasBags_MinInflation_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.GetMaxInflation
struct UDecorator_GasBags_MinInflation_C_GetMaxInflation_Params
{
	class AActor*                                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxInflation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ReceiveConditionCheck
struct UDecorator_GasBags_MinInflation_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ExecuteUbergraph_Decorator_GasBags_MinInflation
struct UDecorator_GasBags_MinInflation_C_ExecuteUbergraph_Decorator_GasBags_MinInflation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
