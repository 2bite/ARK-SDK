#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeeHive_PlayerOwned_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPTryMultiUse
struct ABeeHive_PlayerOwned_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPGetInfoFromConsumedItemForPlacedStructure
struct ABeeHive_PlayerOwned_C_BPGetInfoFromConsumedItemForPlacedStructure_Params
{
	class UPrimalItem**                                ItemToConsumed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUpdateItemVisuals
struct ABeeHive_PlayerOwned_C_BPUpdateItemVisuals_Params
{
};

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUnstasis
struct ABeeHive_PlayerOwned_C_BPUnstasis_Params
{
};

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.UserConstructionScript
struct ABeeHive_PlayerOwned_C_UserConstructionScript_Params
{
};

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveBeginPlay
struct ABeeHive_PlayerOwned_C_ReceiveBeginPlay_Params
{
};

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveDestroyed
struct ABeeHive_PlayerOwned_C_ReceiveDestroyed_Params
{
};

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ExecuteUbergraph_BeeHive_PlayerOwned
struct ABeeHive_PlayerOwned_C_ExecuteUbergraph_BeeHive_PlayerOwned_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
