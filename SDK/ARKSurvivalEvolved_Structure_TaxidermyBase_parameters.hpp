#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplyEquippedSnapshot
struct AStructure_TaxidermyBase_C_ApplyEquippedSnapshot_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_PoseIdx
struct AStructure_TaxidermyBase_C_OnRep_PoseIdx_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RefreshSnapshot
struct AStructure_TaxidermyBase_C_RefreshSnapshot_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPTryMultiUse
struct AStructure_TaxidermyBase_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPGetMultiUseEntries
struct AStructure_TaxidermyBase_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveSnapshot
struct AStructure_TaxidermyBase_C_RemoveSnapshot_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplySnapshot
struct AStructure_TaxidermyBase_C_ApplySnapshot_Params
{
	class UPrimalItem*                                 Snapshot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPNotifyInventoryItemChange
struct AStructure_TaxidermyBase_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UserConstructionScript
struct AStructure_TaxidermyBase_C_UserConstructionScript_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ReceiveBeginPlay
struct AStructure_TaxidermyBase_C_ReceiveBeginPlay_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ClientApplySnapshot
struct AStructure_TaxidermyBase_C_ClientApplySnapshot_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ClientRemoveSnapshot
struct AStructure_TaxidermyBase_C_ClientRemoveSnapshot_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ExecuteUbergraph_Structure_TaxidermyBase
struct AStructure_TaxidermyBase_C_ExecuteUbergraph_Structure_TaxidermyBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
