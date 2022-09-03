#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureMinigunBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureMinigunBP.StructureMinigunBP_C.GetHudData
struct AStructureMinigunBP_C_GetHudData_Params
{
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentAmmoItemTemplate;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AmmoItemTemplates;                                        // (Parm, OutParm, ZeroConstructor)
	int                                                LowAmmoWarningAmount;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPGetDamageMultiplier
struct AStructureMinigunBP_C_BPGetDamageMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.UpdateItemStats
struct AStructureMinigunBP_C_UpdateItemStats_Params
{
	class UPrimalItem*                                 newItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPOverrideCantBuildReasonString
struct AStructureMinigunBP_C_BPOverrideCantBuildReasonString_Params
{
	int*                                               CantBuildReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPIsAllowedToBuild
struct AStructureMinigunBP_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.Update Spin Sounds
struct AStructureMinigunBP_C_Update_Spin_Sounds_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPPlacedStructure
struct AStructureMinigunBP_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPSetPlayerConstructor
struct AStructureMinigunBP_C_BPSetPlayerConstructor_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.PlacementInitialization
struct AStructureMinigunBP_C_PlacementInitialization_Params
{
	class AShooterWeapon*                              constructorWeapon;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.PlacementTickActions
struct AStructureMinigunBP_C_PlacementTickActions_Params
{
	bool                                               reachedDestination;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.UpdateCustomItemData
struct AStructureMinigunBP_C_UpdateCustomItemData_Params
{
	class UPrimalItem*                                 self2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.UpdateMaterials
struct AStructureMinigunBP_C_UpdateMaterials_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPFiredWeapon
struct AStructureMinigunBP_C_BPFiredWeapon_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPSeatedPlayer
struct AStructureMinigunBP_C_BPSeatedPlayer_Params
{
	class AShooterCharacter**                          SeatedChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.SwitchMinigunTPVCameraView
struct AStructureMinigunBP_C_SwitchMinigunTPVCameraView_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.Is First Person View
struct AStructureMinigunBP_C_Is_First_Person_View_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.Is Client or SinglePlayer
struct AStructureMinigunBP_C_Is_Client_or_SinglePlayer_Params
{
	bool                                               Res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPGetInfoFromConsumedItemForPlacedStructure
struct AStructureMinigunBP_C_BPGetInfoFromConsumedItemForPlacedStructure_Params
{
	class UPrimalItem**                                ItemToConsumed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPReleasedPlayer
struct AStructureMinigunBP_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPCanFire
struct AStructureMinigunBP_C_BPCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPGetMultiUseEntries
struct AStructureMinigunBP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPTryMultiUse
struct AStructureMinigunBP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.UserConstructionScript
struct AStructureMinigunBP_C_UserConstructionScript_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.ReceiveTick
struct AStructureMinigunBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.TickSpinSpeed
struct AStructureMinigunBP_C_TickSpinSpeed_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.BPApplyCustomDurabilityOnPickup
struct AStructureMinigunBP_C_BPApplyCustomDurabilityOnPickup_Params
{
	class UPrimalItem**                                PickedUp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.TickTPV
struct AStructureMinigunBP_C_TickTPV_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.ReceiveBeginPlay
struct AStructureMinigunBP_C_ReceiveBeginPlay_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.TickOverheat
struct AStructureMinigunBP_C_TickOverheat_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.Multi_AttachSocket
struct AStructureMinigunBP_C_Multi_AttachSocket_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.Multi_DetachCable
struct AStructureMinigunBP_C_Multi_DetachCable_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.CableMat
struct AStructureMinigunBP_C_CableMat_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.StartPlacement_Multicast
struct AStructureMinigunBP_C_StartPlacement_Multicast_Params
{
	class AShooterCharacter*                           constructor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.PlacementAnimationTickEvent
struct AStructureMinigunBP_C_PlacementAnimationTickEvent_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.NetOnOverheated
struct AStructureMinigunBP_C_NetOnOverheated_Params
{
	bool                                               Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureMinigunBP.StructureMinigunBP_C.StartShellLoop
struct AStructureMinigunBP_C_StartShellLoop_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.StopShellLoop
struct AStructureMinigunBP_C_StopShellLoop_Params
{
};

// Function StructureMinigunBP.StructureMinigunBP_C.ExecuteUbergraph_StructureMinigunBP
struct AStructureMinigunBP_C_ExecuteUbergraph_StructureMinigunBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
