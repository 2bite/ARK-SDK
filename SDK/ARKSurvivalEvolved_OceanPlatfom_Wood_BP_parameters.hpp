#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatfom_Wood_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnDemolish
struct AOceanPlatfom_Wood_BP_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnStructurePickup
struct AOceanPlatfom_Wood_BP_C_BPOnStructurePickup_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                NewlyPickedUpItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsQuickPickup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPPlacedStructure
struct AOceanPlatfom_Wood_BP_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedFromTransform
struct AOceanPlatfom_Wood_BP_C_BPOverrideSnappedFromTransform_Params
{
	class APrimalStructure**                           ParentStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ParentSnapFromIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ParentSnapFromName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    UnsnappedPlacementPos;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   UnsnappedPlacementRot;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SnappedPlacementPos;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   SnappedPlacementRot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SnapToIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SnapToName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                bForceInvalidateSnap;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedToTransform
struct AOceanPlatfom_Wood_BP_C_BPOverrideSnappedToTransform_Params
{
	class APrimalStructure**                           childStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ChildSnapFromIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ChildSnapFromName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    UnsnappedPlacementPos;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   UnsnappedPlacementRot;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SnappedPlacementPos;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   SnappedPlacementRot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SnapToIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SnapToName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                bForceInvalidateSnap;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.UserConstructionScript
struct AOceanPlatfom_Wood_BP_C_UserConstructionScript_Params
{
};

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ReceiveBeginPlay
struct AOceanPlatfom_Wood_BP_C_ReceiveBeginPlay_Params
{
};

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ExecuteUbergraph_OceanPlatfom_Wood_BP
struct AOceanPlatfom_Wood_BP_C_ExecuteUbergraph_OceanPlatfom_Wood_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
