#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Lystro_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lystro_Character_BP.Lystro_Character_BP_C.BPTryMultiUse
struct ALystro_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Lystro_Character_BP.Lystro_Character_BP_C.Has XPBuff
struct ALystro_Character_BP_C_Has_XPBuff_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lystro_Character_BP.Lystro_Character_BP_C.BPGetMultiUseEntries
struct ALystro_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Lystro_Character_BP.Lystro_Character_BP_C.UserConstructionScript
struct ALystro_Character_BP_C_UserConstructionScript_Params
{
};

// Function Lystro_Character_BP.Lystro_Character_BP_C.ExecuteUbergraph_Lystro_Character_BP
struct ALystro_Character_BP_C_ExecuteUbergraph_Lystro_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
