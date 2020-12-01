#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Doorway_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.BPAllowSnappingWith
struct ACeiling_Doorway_Tek_C_BPAllowSnappingWith_Params
{
	class APrimalStructure**                           OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.UserConstructionScript
struct ACeiling_Doorway_Tek_C_UserConstructionScript_Params
{
};

// Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.ExecuteUbergraph_Ceiling_Doorway_Tek
struct ACeiling_Doorway_Tek_C_ExecuteUbergraph_Ceiling_Doorway_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
