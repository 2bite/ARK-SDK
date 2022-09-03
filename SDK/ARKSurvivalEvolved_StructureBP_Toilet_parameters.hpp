#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Toilet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureBP_Toilet.StructureBP_Toilet_C.BPTryMultiUse
struct AStructureBP_Toilet_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.BPGetMultiUseEntries
struct AStructureBP_Toilet_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.BPHandleSitterPoop
struct AStructureBP_Toilet_C_BPHandleSitterPoop_Params
{
	class AShooterCharacter**                          ForSitter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.BPUnstasis
struct AStructureBP_Toilet_C_BPUnstasis_Params
{
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.ReceiveBeginPlay
struct AStructureBP_Toilet_C_ReceiveBeginPlay_Params
{
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.OnRep_bHasPoop
struct AStructureBP_Toilet_C_OnRep_bHasPoop_Params
{
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.BPNotifyInventoryItemChange
struct AStructureBP_Toilet_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.BPContainerActivated
struct AStructureBP_Toilet_C_BPContainerActivated_Params
{
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.BPContainerDeactivated
struct AStructureBP_Toilet_C_BPContainerDeactivated_Params
{
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.UserConstructionScript
struct AStructureBP_Toilet_C_UserConstructionScript_Params
{
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.NetFlushedToilet
struct AStructureBP_Toilet_C_NetFlushedToilet_Params
{
};

// Function StructureBP_Toilet.StructureBP_Toilet_C.ExecuteUbergraph_StructureBP_Toilet
struct AStructureBP_Toilet_C_ExecuteUbergraph_StructureBP_Toilet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
