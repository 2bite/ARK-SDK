#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_INetMaterialInterface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function INetMaterialInterface.INetMaterialInterface_C.GetMaterialIndicesToSupportNet
struct UINetMaterialInterface_C_GetMaterialIndicesToSupportNet_Params
{
	TArray<int>                                        MaterialIndices;                                          // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
