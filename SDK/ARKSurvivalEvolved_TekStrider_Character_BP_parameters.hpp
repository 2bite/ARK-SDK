#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStrider_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Variable Interface
struct ATekStrider_Character_BP_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNumBatteries
struct ATekStrider_Character_BP_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Transmitter VFX
struct ATekStrider_Character_BP_C_Restrict_Transmitter_VFX_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnStartCarried
struct ATekStrider_Character_BP_C_BP_OnStartCarried_Params
{
	class APrimalDinoCharacter**                       aDino;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPCanCryo
struct ATekStrider_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Number Of Missions Required To Tame This Strider Scaled By Level
struct ATekStrider_Character_BP_C_Get_Number_Of_Missions_Required_To_Tame_This_Strider_Scaled_By_Level_Params
{
	int                                                OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.release right click
struct ATekStrider_Character_BP_C_release_right_click_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeout Check for Still Holding Right Click
struct ATekStrider_Character_BP_C_Timeout_Check_for_Still_Holding_Right_Click_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.update shield item durability based on health
struct ATekStrider_Character_BP_C_update_shield_item_durability_based_on_health_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Deactivate Transmitter Vfx on Timer
struct ATekStrider_Character_BP_C_Deactivate_Transmitter_Vfx_on_Timer_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Triggered Lethal Dmg
struct ATekStrider_Character_BP_C_Triggered_Lethal_Dmg_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ResetLinkedDediStorageRepVars
struct ATekStrider_Character_BP_C_ResetLinkedDediStorageRepVars_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.MakeDediStorageTitleString
struct ATekStrider_Character_BP_C_MakeDediStorageTitleString_Params
{
	class FString                                      BoxName;                                                  // (Parm, ZeroConstructor)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ForShooterPC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToBox;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.UpdateLinkedDediStorageRepVars
struct ATekStrider_Character_BP_C_UpdateLinkedDediStorageRepVars_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ConstructLinkedDediStorageTitle
struct ATekStrider_Character_BP_C_ConstructLinkedDediStorageTitle_Params
{
	class AShooterPlayerController*                    ForShooterPC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Title;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel in Last Slot
struct ATekStrider_Character_BP_C_Has_Mutagel_in_Last_Slot_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasMutagelInLastSlot;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Force Destroy Strider
struct ATekStrider_Character_BP_C_Force_Destroy_Strider_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.affinity per hack calculation
struct ATekStrider_Character_BP_C_affinity_per_hack_calculation_Params
{
	float                                              Taming_speed_multiplier;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               in_grace_period;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              time_until_grace_period_ends;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              time_until_no_more_affinity;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              affinity_gained_before_taming_mult;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.amount of affinity gained as appropriate to the dino level
struct ATekStrider_Character_BP_C_amount_of_affinity_gained_as_appropriate_to_the_dino_level_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.RefreshNearbyDediStorageArrays
struct ATekStrider_Character_BP_C_RefreshNearbyDediStorageArrays_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferAnyItemsToNearbyDediStorages
struct ATekStrider_Character_BP_C_CanTransferAnyItemsToNearbyDediStorages_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferItemToDediStorage
struct ATekStrider_Character_BP_C_CanTransferItemToDediStorage_Params
{
	class UPrimalItem*                                 CheckItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_DedicatedStorage_C*                      CheckStorage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckForBlacklist;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanUseLinkedDediStorageLogic
struct ATekStrider_Character_BP_C_CanUseLinkedDediStorageLogic_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetLinkedDediStorageFloatingHudTitle
struct ATekStrider_Character_BP_C_GetLinkedDediStorageFloatingHudTitle_Params
{
	class AShooterPlayerController*                    ForShooterPC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      TitleString;                                              // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                TitleColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNameStringForDediStorage
struct ATekStrider_Character_BP_C_GetNameStringForDediStorage_Params
{
	class ABP_DedicatedStorage_C*                      ForStorage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ForShooterPC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAppendDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      NameString;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ValidateLinkedDediStorage
struct ATekStrider_Character_BP_C_ValidateLinkedDediStorage_Params
{
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToLinkedDediStorage
struct ATekStrider_Character_BP_C_TryTransferItemsToLinkedDediStorage_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.RemoveIncompatibleDediStoragesFromArray
struct ATekStrider_Character_BP_C_RemoveIncompatibleDediStoragesFromArray_Params
{
	TArray<class ABP_DedicatedStorage_C*>              FromArray;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToNearbyDediStorages
struct ATekStrider_Character_BP_C_TryTransferItemsToNearbyDediStorages_Params
{
	class AShooterPlayerController*                    ForShooterPC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsBlacklistedItemClass
struct ATekStrider_Character_BP_C_IsBlacklistedItemClass_Params
{
	class UClass*                                      CheckItemClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsDediStorageUsable
struct ATekStrider_Character_BP_C_IsDediStorageUsable_Params
{
	class ABP_DedicatedStorage_C*                      CheckStorage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.FindNearbyUsableDediStorageBoxes
struct ATekStrider_Character_BP_C_FindNearbyUsableDediStorageBoxes_Params
{
	bool                                               bSortByDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveIncompatibleStorages;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveLinkedStorage;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundAny;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_DedicatedStorage_C*>              FoundBoxes;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryDoDediStorageHarvestTransferMultiUse
struct ATekStrider_Character_BP_C_TryDoDediStorageHarvestTransferMultiUse_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClientDoDediStorageHarvestTransferMultiUse
struct ATekStrider_Character_BP_C_ClientDoDediStorageHarvestTransferMultiUse_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetDediStorageHarvestTransferMultiUseEntries
struct ATekStrider_Character_BP_C_GetDediStorageHarvestTransferMultiUseEntries_Params
{
	TArray<struct FMultiUseEntry>                      AppendToEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AShooterPlayerController*                    ForShooterPC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientHandleNetExecCommand
struct ATekStrider_Character_BP_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnRefreshColorization
struct ATekStrider_Character_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClearLinkedDediStorage
struct ATekStrider_Character_BP_C_ClearLinkedDediStorage_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnUncryo
struct ATekStrider_Character_BP_C_BP_OnUncryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnCryo
struct ATekStrider_Character_BP_C_BP_OnCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetLinkedDediStorage
struct ATekStrider_Character_BP_C_SetLinkedDediStorage_Params
{
	class ABP_DedicatedStorage_C*                      NewLinkedStorage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Dinos
struct ATekStrider_Character_BP_C_Change_Filter_to_Only_Dinos_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Humans
struct ATekStrider_Character_BP_C_Change_Filter_to_Only_Humans_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Both Dinos And Humans
struct ATekStrider_Character_BP_C_Change_Filter_to_Both_Dinos_And_Humans_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Quicktap Right Click
struct ATekStrider_Character_BP_C_Detect_Quicktap_Right_Click_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn tamed inventory
struct ATekStrider_Character_BP_C_spawn_tamed_inventory_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn wild inventory
struct ATekStrider_Character_BP_C_spawn_wild_inventory_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.determine and request appropriate melee attack
struct ATekStrider_Character_BP_C_determine_and_request_appropriate_melee_attack_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintGetAttackWeight
struct ATekStrider_Character_BP_C_BlueprintGetAttackWeight_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inputWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.combined can attack
struct ATekStrider_Character_BP_C_combined_can_attack_Params
{
	int                                                Attack_Index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DIst;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              attack_range_offset;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               can_attack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanRiderAttack
struct ATekStrider_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanAttack
struct ATekStrider_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Print String Manual
struct ATekStrider_Character_BP_C_Print_String_Manual_Params
{
	class FString                                      String;                                                   // (Parm, ZeroConstructor)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearRider
struct ATekStrider_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifySetRider
struct ATekStrider_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Capacity
struct ATekStrider_Character_BP_C_Get_Charge_Capacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.toggle transmitter vfx
struct ATekStrider_Character_BP_C_toggle_transmitter_vfx_Params
{
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             time_activated;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.update tame percent on material
struct ATekStrider_Character_BP_C_update_tame_percent_on_material_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up dynamic mats
struct ATekStrider_Character_BP_C_set_up_dynamic_mats_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Focus Suck Location at Target
struct ATekStrider_Character_BP_C_Focus_Suck_Location_at_Target_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPHandlePoop
struct ATekStrider_Character_BP_C_BPHandlePoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventFirstPerson
struct ATekStrider_Character_BP_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventInputType
struct ATekStrider_Character_BP_C_BPPreventInputType_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideHurtAnim
struct ATekStrider_Character_BP_C_BPOverrideHurtAnim_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageHitNormal;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPAdjustDamage
struct ATekStrider_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnLethalDamage
struct ATekStrider_Character_BP_C_BPOnLethalDamage_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Blend Time After Timer
struct ATekStrider_Character_BP_C_Reset_Blend_Time_After_Timer_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.set blend time
struct ATekStrider_Character_BP_C_set_blend_time_Params
{
	float                                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ATekStrider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.tick events
struct ATekStrider_Character_BP_C_tick_events_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ATekStrider_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Right Click
struct ATekStrider_Character_BP_C_Detect_Double_Tap_Right_Click_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Crouch
struct ATekStrider_Character_BP_C_Detect_Double_Tap_Crouch_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Current Inventory Mutagel Count
struct ATekStrider_Character_BP_C_Get_Current_Inventory_Mutagel_Count_Params
{
	class UObject*                                     PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                current_amount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Required Mutagel Count
struct ATekStrider_Character_BP_C_Get_Required_Mutagel_Count_Params
{
	int                                                needed_amount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Use Mutagel And Begin Hacking
struct ATekStrider_Character_BP_C_Use_Mutagel_And_Begin_Hacking_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.completed enough missions
struct ATekStrider_Character_BP_C_completed_enough_missions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.backup timer has expired to bypass the wander distance if needed
struct ATekStrider_Character_BP_C_backup_timer_has_expired_to_bypass_the_wander_distance_if_needed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.has wandered far enough to be able to hack again
struct ATekStrider_Character_BP_C_has_wandered_far_enough_to_be_able_to_hack_again_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	float                                              remaining_distance;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Able To Initiate A Hack Attempt
struct ATekStrider_Character_BP_C_Is_Able_To_Initiate_A_Hack_Attempt_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel Ready
struct ATekStrider_Character_BP_C_Has_Mutagel_Ready_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Required Mutagel
struct ATekStrider_Character_BP_C_Has_Required_Mutagel_Params
{
	class UObject*                                     Player_Controller;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	int                                                Mutagel_Player_Has;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Mutagel_Required;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn targeted hacking particle
struct ATekStrider_Character_BP_C_spawn_targeted_hacking_particle_Params
{
	struct FVector                                     hacking_loc;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect If Able To Be Hacked- For blinking lights only
struct ATekStrider_Character_BP_C_Detect_If_Able_To_Be_Hacked__For_blinking_lights_only_Params
{
	bool                                               can_hack;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               should_be_visible;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.
struct ATekStrider_Character_BP_C__Params
{
	float                                              _1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              _2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.advance hacking point
struct ATekStrider_Character_BP_C_advance_hacking_point_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up hacking interaction points
struct ATekStrider_Character_BP_C_set_up_hacking_interaction_points_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_RotationRate
struct ATekStrider_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Looking At Specific Hack Interaction Point
struct ATekStrider_Character_BP_C_Is_Looking_At_Specific_Hack_Interaction_Point_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Looking_at;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Hack_Interaction_Spot_World_Loc;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.activate current Hack Interaction Spot
struct ATekStrider_Character_BP_C_activate_current_Hack_Interaction_Spot_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveTick
struct ATekStrider_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideFloatingHUDLocation
struct ATekStrider_Character_BP_C_BPOverrideFloatingHUDLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Throttled Request Mission Count
struct ATekStrider_Character_BP_C_Throttled_Request_Mission_Count_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
struct ATekStrider_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
{
	bool                                               overrideTamingProgressBarIfActive;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit success
struct ATekStrider_Character_BP_C_on_hacking_hit_success_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit fail
struct ATekStrider_Character_BP_C_on_hacking_hit_fail_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveAnyDamage
struct ATekStrider_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.hacking success
struct ATekStrider_Character_BP_C_hacking_success_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.sync mission complete status
struct ATekStrider_Character_BP_C_sync_mission_complete_status_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Sync Mission Complete Status
struct ATekStrider_Character_BP_C_Restrict_Sync_Mission_Complete_Status_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyToggleHUD
struct ATekStrider_Character_BP_C_BPNotifyToggleHUD_Params
{
	bool*                                              bHudHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Passenger Weapon Changed
struct ATekStrider_Character_BP_C_On_Passenger_Weapon_Changed_Params
{
	class AShooterWeapon*                              newWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyAddPassenger
struct ATekStrider_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearPassenger
struct ATekStrider_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnBasedPawnRemovedNotify
struct ATekStrider_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params
{
	class AActor**                                     RemovedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ATekStrider_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Tek Transmitter
struct ATekStrider_Character_BP_C_Spawn_Tek_Transmitter_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientDoMultiUse
struct ATekStrider_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTryMultiUse
struct ATekStrider_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetMultiUseEntries
struct ATekStrider_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Bed
struct ATekStrider_Character_BP_C_Spawn_Bed_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPServerHandleNetExecCommand
struct ATekStrider_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.InterceptInputEvent
struct ATekStrider_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn platform saddle
struct ATekStrider_Character_BP_C_spawn_platform_saddle_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Attachments
struct ATekStrider_Character_BP_C_Spawn_Attachments_Params
{
	int                                                Manually_Set_Head;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Manually_Set_Chest;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveright
struct ATekStrider_Character_BP_C_Reset_Moveright_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveforward
struct ATekStrider_Character_BP_C_Reset_Moveforward_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveForward
struct ATekStrider_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveRight
struct ATekStrider_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetHUDElements
struct ATekStrider_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPChangedActorTeam
struct ATekStrider_Character_BP_C_BPChangedActorTeam_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerNonDedicated
struct ATekStrider_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintDrawFloatingHUD
struct ATekStrider_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerServer
struct ATekStrider_Character_BP_C_BPTimerServer_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Max Charge
struct ATekStrider_Character_BP_C_Update_Max_Charge_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyLevelUp
struct ATekStrider_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Unstasis Logic
struct ATekStrider_Character_BP_C_Unstasis_Logic_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPSetupTamed
struct ATekStrider_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnRep_bAutoChargeActive
struct ATekStrider_Character_BP_C_OnRep_bAutoChargeActive_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Actual Radius
struct ATekStrider_Character_BP_C_Get_Actual_Radius_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Passive Charge Gain
struct ATekStrider_Character_BP_C_Get_Passive_Charge_Gain_Params
{
	float                                              Charge_Gain;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Charge Radius
struct ATekStrider_Character_BP_C_Update_Charge_Radius_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Auto Charge Notify
struct ATekStrider_Character_BP_C_Auto_Charge_Notify_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Init
struct ATekStrider_Character_BP_C_Init_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Initialize Charge Buff
struct ATekStrider_Character_BP_C_Initialize_Charge_Buff_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Buff
struct ATekStrider_Character_BP_C_Create_Charge_Buff_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Destroy Charge Buff
struct ATekStrider_Character_BP_C_Destroy_Charge_Buff_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Charge Event
struct ATekStrider_Character_BP_C_On_Charge_Event_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Manager
struct ATekStrider_Character_BP_C_Create_Charge_Manager_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuffs
struct ATekStrider_Character_BP_C_GetAttachmentBuffs_Params
{
	TArray<class ABuff_TekStrider_Attachment_Base_C*>  Buffs;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetCrosshairAlpha
struct ATekStrider_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDoAttack
struct ATekStrider_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuff
struct ATekStrider_Character_BP_C_GetAttachmentBuff_Params
{
	TEnumAsByte<EPrimalEquipmentType>                  AttachmentType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ABuff_TekStrider_Attachment_Base_C*          Buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyInventoryItemChange
struct ATekStrider_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyStructurePlacedNearby
struct ATekStrider_Character_BP_C_BPNotifyStructurePlacedNearby_Params
{
	class APrimalStructure**                           NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.UserConstructionScript
struct ATekStrider_Character_BP_C_UserConstructionScript_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__FinishedFunc
struct ATekStrider_Character_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__UpdateFunc
struct ATekStrider_Character_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean MulticastInterface
struct ATekStrider_Character_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Float Multicast Interface
struct ATekStrider_Character_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Double MulticastInterface
struct ATekStrider_Character_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean Interface
struct ATekStrider_Character_BP_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventFloatInterface
struct ATekStrider_Character_BP_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventDoubleInterface
struct ATekStrider_Character_BP_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntInterface
struct ATekStrider_Character_BP_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntMulticastInterface
struct ATekStrider_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffAdded
struct ATekStrider_Character_BP_C_OnAttachmentBuffAdded_Params
{
	class ABuff_TekStrider_Attachment_Base_C*          Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffRemoved
struct ATekStrider_Character_BP_C_OnAttachmentBuffRemoved_Params
{
	class ABuff_TekStrider_Attachment_Base_C*          Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnJumpPressed
struct ATekStrider_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetInventoryTributeStatus
struct ATekStrider_Character_BP_C_SetInventoryTributeStatus_Params
{
	bool                                               IsTribute_;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPUnstasis
struct ATekStrider_Character_BP_C_BPUnstasis_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveBeginPlay
struct ATekStrider_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent
struct ATekStrider_Character_BP_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent_Multicast
struct ATekStrider_Character_BP_C_ChargeVariableEvent_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CheckForBatteriesAndUpdate_Multicast
struct ATekStrider_Character_BP_C_CheckForBatteriesAndUpdate_Multicast_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnDied_Event
struct ATekStrider_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CreateChargeBuff_Multicast
struct ATekStrider_Character_BP_C_CreateChargeBuff_Multicast_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.DestroyChargeBuff_Multicast
struct ATekStrider_Character_BP_C_DestroyChargeBuff_Multicast_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Interface
struct ATekStrider_Character_BP_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Trigger Multicast Interface
struct ATekStrider_Character_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Interface Check for Batteries and Update Multicast
struct ATekStrider_Character_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Set Charge Variable Interface
struct ATekStrider_Character_BP_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.RandomizeUntamedStart
struct ATekStrider_Character_BP_C_RandomizeUntamedStart_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.NetUpdateCharge
struct ATekStrider_Character_BP_C_NetUpdateCharge_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoPostBeginPlay
struct ATekStrider_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.fade in platform
struct ATekStrider_Character_BP_C_fade_in_platform_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multicast Start Taming
struct ATekStrider_Character_BP_C_Multicast_Start_Taming_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit success
struct ATekStrider_Character_BP_C_multicast_on_hack_hit_success_Params
{
	struct FVector                                     last_tame_location;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit fail
struct ATekStrider_Character_BP_C_multicast_on_hack_hit_fail_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack complete
struct ATekStrider_Character_BP_C_multicast_on_hack_complete_Params
{
	struct FVector                                     last_hack_spot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on complete tame
struct ATekStrider_Character_BP_C_multicast_on_complete_tame_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.set strider ref for hacking vfx
struct ATekStrider_Character_BP_C_set_strider_ref_for_hacking_vfx_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.immediately set platform visible
struct ATekStrider_Character_BP_C_immediately_set_platform_visible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.MultiOnStriderDestroyed
struct ATekStrider_Character_BP_C_MultiOnStriderDestroyed_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.EnableInputMulti
struct ATekStrider_Character_BP_C_EnableInputMulti_Params
{
	bool                                               NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieMulti
struct ATekStrider_Character_BP_C_GetReadyToDieMulti_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieSkip
struct ATekStrider_Character_BP_C_GetReadyToDieSkip_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on rocks
struct ATekStrider_Character_BP_C_multicast_play_resource_suck_vfx_on_rocks_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on trees
struct ATekStrider_Character_BP_C_multicast_play_resource_suck_vfx_on_trees_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast update tame percent on body
struct ATekStrider_Character_BP_C_multicast_update_tame_percent_on_body_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast activate transmitter vfx
struct ATekStrider_Character_BP_C_multicast_activate_transmitter_vfx_Params
{
	double                                             time_activated;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast deactivate transmitter vfx
struct ATekStrider_Character_BP_C_multicast_deactivate_transmitter_vfx_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetupEventBindingsForDediStorage
struct ATekStrider_Character_BP_C_SetupEventBindingsForDediStorage_Params
{
	class ABP_DedicatedStorage_C*                      ForStorage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBind;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnLinkedDediStorageDestroyed
struct ATekStrider_Character_BP_C_OnLinkedDediStorageDestroyed_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multi_RefreshLinkedDediStorageRef
struct ATekStrider_Character_BP_C_Multi_RefreshLinkedDediStorageRef_Params
{
	class ABP_DedicatedStorage_C*                      LinkedStorage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Server_RequestFixLinkedDediStorageRef
struct ATekStrider_Character_BP_C_Server_RequestFixLinkedDediStorageRef_Params
{
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnActorCustomEvent_Event
struct ATekStrider_Character_BP_C_OnActorCustomEvent_Event_Params
{
	struct FName                                       EventCustomName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventCustomString;                                        // (Parm, ZeroConstructor)
	class AActor*                                      InstigatorActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ExecuteUbergraph_TekStrider_Character_BP
struct ATekStrider_Character_BP_C_ExecuteUbergraph_TekStrider_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnStructurePlacedOnSaddle__DelegateSignature
struct ATekStrider_Character_BP_C_OnStructurePlacedOnSaddle__DelegateSignature_Params
{
	class APrimalStructure*                            Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
