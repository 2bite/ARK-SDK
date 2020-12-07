#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cannon_SM_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cannon_SM.Cannon_SM_C.IsValidToFire
struct ACannon_SM_C_IsValidToFire_Params
{
	bool                                               ValidToFire;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cannon_SM.Cannon_SM_C.BPTryMultiUse
struct ACannon_SM_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cannon_SM.Cannon_SM_C.BPGetMultiUseEntries
struct ACannon_SM_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Cannon_SM.Cannon_SM_C.UserConstructionScript
struct ACannon_SM_C_UserConstructionScript_Params
{
};

// Function Cannon_SM.Cannon_SM_C.CannonFire
struct ACannon_SM_C_CannonFire_Params
{
};

// Function Cannon_SM.Cannon_SM_C.BPNotifyInventoryItemChange
struct ACannon_SM_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cannon_SM.Cannon_SM_C.BPClientDoMultiUse
struct ACannon_SM_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cannon_SM.Cannon_SM_C.ExecuteUbergraph_Cannon_SM
struct ACannon_SM_C_ExecuteUbergraph_Cannon_SM_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
