#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PortableRope_Ladder_Preplaced_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPGetMultiUseEntries
struct APortableRope_Ladder_Preplaced_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPPlacedStructure
struct APortableRope_Ladder_Preplaced_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.UserConstructionScript
struct APortableRope_Ladder_Preplaced_C_UserConstructionScript_Params
{
};

// Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.ExecuteUbergraph_PortableRope_Ladder_Preplaced
struct APortableRope_Ladder_Preplaced_C_ExecuteUbergraph_PortableRope_Ladder_Preplaced_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
