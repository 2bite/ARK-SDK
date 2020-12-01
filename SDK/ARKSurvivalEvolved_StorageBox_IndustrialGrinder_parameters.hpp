#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_IndustrialGrinder_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GrindAllItems
struct AStorageBox_IndustrialGrinder_C_GrindAllItems_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.IsValidForGrindingAll
struct AStorageBox_IndustrialGrinder_C_IsValidForGrindingAll_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPPreGetMultiUseEntries
struct AStorageBox_IndustrialGrinder_C_BPPreGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.HasCraftingRequirementsGreaterThanOne
struct AStorageBox_IndustrialGrinder_C_HasCraftingRequirementsGreaterThanOne_Params
{
	class UPrimalItem*                                 InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TRUE;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GetReplacementItem
struct AStorageBox_IndustrialGrinder_C_GetReplacementItem_Params
{
	class UClass*                                      InItemClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutItemClass;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.IsValidGrindingItem
struct AStorageBox_IndustrialGrinder_C_IsValidGrindingItem_Params
{
	class UPrimalItem*                                 ItemToCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GrindItem
struct AStorageBox_IndustrialGrinder_C_GrindItem_Params
{
	class UPrimalItem*                                 ItemToGrind;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GrindStack;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MuteSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPServerHandleNetExecCommand
struct AStorageBox_IndustrialGrinder_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPClientDoMultiUse
struct AStorageBox_IndustrialGrinder_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPGetMultiUseEntries
struct AStorageBox_IndustrialGrinder_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.UserConstructionScript
struct AStorageBox_IndustrialGrinder_C_UserConstructionScript_Params
{
};

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.ExecuteUbergraph_StorageBox_IndustrialGrinder
struct AStorageBox_IndustrialGrinder_C_ExecuteUbergraph_StorageBox_IndustrialGrinder_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
