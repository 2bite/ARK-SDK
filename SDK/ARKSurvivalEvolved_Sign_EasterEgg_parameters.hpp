#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_EasterEgg_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sign_EasterEgg.Sign_EasterEgg_C.BPTryMultiUse
struct ASign_EasterEgg_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sign_EasterEgg.Sign_EasterEgg_C.BPGetMultiUseEntries
struct ASign_EasterEgg_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Sign_EasterEgg.Sign_EasterEgg_C.UserConstructionScript
struct ASign_EasterEgg_C_UserConstructionScript_Params
{
};

// Function Sign_EasterEgg.Sign_EasterEgg_C.ReceiveBeginPlay
struct ASign_EasterEgg_C_ReceiveBeginPlay_Params
{
};

// Function Sign_EasterEgg.Sign_EasterEgg_C.ExecuteUbergraph_Sign_EasterEgg
struct ASign_EasterEgg_C_ExecuteUbergraph_Sign_EasterEgg_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
