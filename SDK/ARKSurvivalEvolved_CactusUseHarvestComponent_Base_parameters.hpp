#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CactusUseHarvestComponent_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CactusUseHarvestComponent_Base.CactusUseHarvestComponent_Base_C.BPCustomHarvestResource
struct UCactusUseHarvestComponent_Base_C_BPCustomHarvestResource_Params
{
	class UPrimalInventoryComponent**                  invComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumToGive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ToActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CactusUseHarvestComponent_Base.CactusUseHarvestComponent_Base_C.ExecuteUbergraph_CactusUseHarvestComponent_Base
struct UCactusUseHarvestComponent_Base_C_ExecuteUbergraph_CactusUseHarvestComponent_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
