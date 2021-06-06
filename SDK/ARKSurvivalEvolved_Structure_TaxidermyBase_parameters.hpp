#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnContainerRenamed
struct AStructure_TaxidermyBase_C_OnContainerRenamed_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Construct Name Renderer Component
struct AStructure_TaxidermyBase_C_Construct_Name_Renderer_Component_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveHairMeshes
struct AStructure_TaxidermyBase_C_RemoveHairMeshes_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_SnapshotPoseIndex
struct AStructure_TaxidermyBase_C_OnRep_SnapshotPoseIndex_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateDefaultSnapshot
struct AStructure_TaxidermyBase_C_CreateDefaultSnapshot_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPClientDoMultiUse
struct AStructure_TaxidermyBase_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetTextRendererColor
struct AStructure_TaxidermyBase_C_SetTextRendererColor_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateSnapshot
struct AStructure_TaxidermyBase_C_CreateSnapshot_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Default_Snapshot_Mat;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Capture_Character;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Non_Capture_Gender_Is_Male;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepPreviousSnapshot;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPPlacedStructure
struct AStructure_TaxidermyBase_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplyEquippedSnapshot
struct AStructure_TaxidermyBase_C_ApplyEquippedSnapshot_Params
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

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetRendererText
struct AStructure_TaxidermyBase_C_SetRendererText_Params
{
};

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Multi_CreateSnapshot
struct AStructure_TaxidermyBase_C_Multi_CreateSnapshot_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseDefaultSnapshotMaterial;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CaptureCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NonCaptureGenderIsMale;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepPreviousSnapshot;                                     // (Parm, ZeroConstructor, IsPlainOldData)
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
