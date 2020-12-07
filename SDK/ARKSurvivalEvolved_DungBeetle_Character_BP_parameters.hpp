#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungBeetle_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPCharacterSleeped
struct ADungBeetle_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPCharacterUnsleeped
struct ADungBeetle_Character_BP_C_BPCharacterUnsleeped_Params
{
};

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPGetMultiUseEntries
struct ADungBeetle_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPTryMultiUse
struct ADungBeetle_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.UserConstructionScript
struct ADungBeetle_Character_BP_C_UserConstructionScript_Params
{
};

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.ReceiveBeginPlay
struct ADungBeetle_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.OnDied_Event
struct ADungBeetle_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.ExecuteUbergraph_DungBeetle_Character_BP
struct ADungBeetle_Character_BP_C_ExecuteUbergraph_DungBeetle_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
