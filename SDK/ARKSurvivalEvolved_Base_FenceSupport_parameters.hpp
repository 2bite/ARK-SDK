#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_FenceSupport_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_FenceSupport.Base_FenceSupport_C.BPPlacedStructure
struct ABase_FenceSupport_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_FenceSupport.Base_FenceSupport_C.BPTreatAsFoundationForSnappedStructure
struct ABase_FenceSupport_C_BPTreatAsFoundationForSnappedStructure_Params
{
	class APrimalStructure**                           OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlacementData                              WithPlacementData;                                        // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Base_FenceSupport.Base_FenceSupport_C.UserConstructionScript
struct ABase_FenceSupport_C_UserConstructionScript_Params
{
};

// Function Base_FenceSupport.Base_FenceSupport_C.ExecuteUbergraph_Base_FenceSupport
struct ABase_FenceSupport_C_ExecuteUbergraph_Base_FenceSupport_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
