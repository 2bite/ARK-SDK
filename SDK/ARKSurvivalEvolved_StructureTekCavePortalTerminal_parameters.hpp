#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTekCavePortalTerminal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.BPTryMultiUse
struct AStructureTekCavePortalTerminal_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.BPGetMultiUseEntries
struct AStructureTekCavePortalTerminal_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.UserConstructionScript
struct AStructureTekCavePortalTerminal_C_UserConstructionScript_Params
{
};

// Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.ExecuteUbergraph_StructureTekCavePortalTerminal
struct AStructureTekCavePortalTerminal_C_ExecuteUbergraph_StructureTekCavePortalTerminal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
