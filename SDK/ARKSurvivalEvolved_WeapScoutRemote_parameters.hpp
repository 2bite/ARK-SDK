#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapScoutRemote_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapScoutRemote.WeapScoutRemote_C.BPGetDebugInfoString
struct AWeapScoutRemote_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WeapScoutRemote.WeapScoutRemote_C.AllowTargeting
struct AWeapScoutRemote_C_AllowTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPGetTargetingTooltipInfoLabel
struct AWeapScoutRemote_C_BPGetTargetingTooltipInfoLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPGetProjectileSpeed
struct AWeapScoutRemote_C_BPGetProjectileSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.OnRep_GogglesMode
struct AWeapScoutRemote_C_OnRep_GogglesMode_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.OnRep_FiredScout
struct AWeapScoutRemote_C_OnRep_FiredScout_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPOverrideFPVMasterPoseComponent
struct AWeapScoutRemote_C_BPOverrideFPVMasterPoseComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPPreventSwitchingWeapon
struct AWeapScoutRemote_C_BPPreventSwitchingWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.Setup Goggle Anim Instance Class 
struct AWeapScoutRemote_C_Setup_Goggle_Anim_Instance_Class__Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.Get Relevant GoggleAnim Instance Class
struct AWeapScoutRemote_C_Get_Relevant_GoggleAnim_Instance_Class_Params
{
	class UClass*                                      ClassRef;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.Get RelevantGrenade Anim Instance Class
struct AWeapScoutRemote_C_Get_RelevantGrenade_Anim_Instance_Class_Params
{
	class UClass*                                      ClassRef;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.Setup Grenade Anim Instance Class
struct AWeapScoutRemote_C_Setup_Grenade_Anim_Instance_Class_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPIsValidUnStasisCaster
struct AWeapScoutRemote_C_BPIsValidUnStasisCaster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPOnStopTargeting
struct AWeapScoutRemote_C_BPOnStopTargeting_Params
{
	bool*                                              bFromGamepadLeft;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.ReceiveTick
struct AWeapScoutRemote_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.ScoutDespawned
struct AWeapScoutRemote_C_ScoutDespawned_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.Show
struct AWeapScoutRemote_C_Show_Params
{
	class USceneComponent*                             SceneComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.Hide
struct AWeapScoutRemote_C_Hide_Params
{
	class USceneComponent*                             SceneComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.ScoutGrenadeReturned
struct AWeapScoutRemote_C_ScoutGrenadeReturned_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPFiredWeapon
struct AWeapScoutRemote_C_BPFiredWeapon_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPTryFireWeapon
struct AWeapScoutRemote_C_BPTryFireWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.AllowUnequip
struct AWeapScoutRemote_C_AllowUnequip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPAnimNotifyCustomEvent
struct AWeapScoutRemote_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.ReceiveEndPlay
struct AWeapScoutRemote_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPStartEquippedNotify
struct AWeapScoutRemote_C_BPStartEquippedNotify_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.ReceiveBeginPlay
struct AWeapScoutRemote_C_ReceiveBeginPlay_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.Scout Launched
struct AWeapScoutRemote_C_Scout_Launched_Params
{
	class AScout_Character_BP_C*                       Scout;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPGetActorForTargetingTooltip
struct AWeapScoutRemote_C_BPGetActorForTargetingTooltip_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.BPWeaponCanFire
struct AWeapScoutRemote_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.UserConstructionScript
struct AWeapScoutRemote_C_UserConstructionScript_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutLaunched
struct AWeapScoutRemote_C_MULTI_ScoutLaunched_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ReleasedPossessingSurvivor
struct AWeapScoutRemote_C_MULTI_ReleasedPossessingSurvivor_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_ScoutPossessedBySurvivor
struct AWeapScoutRemote_C_OWNINGCLIENT_ScoutPossessedBySurvivor_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_OnEquipNoScout
struct AWeapScoutRemote_C_OWNINGCLIENT_OnEquipNoScout_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_OnEquipScoutActive
struct AWeapScoutRemote_C_MULTI_OnEquipScoutActive_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutGrenadeReturnedEvent
struct AWeapScoutRemote_C_MULTI_ScoutGrenadeReturnedEvent_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_FiredWeapon
struct AWeapScoutRemote_C_MULTI_FiredWeapon_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutDespawned
struct AWeapScoutRemote_C_MULTI_ScoutDespawned_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.SERVER_RecallScout
struct AWeapScoutRemote_C_SERVER_RecallScout_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.Initialize
struct AWeapScoutRemote_C_Initialize_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.SERVER_ReleasedPossessingSurvivor
struct AWeapScoutRemote_C_SERVER_ReleasedPossessingSurvivor_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.SERVER_DoHandleFiring
struct AWeapScoutRemote_C_SERVER_DoHandleFiring_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.UpdateTooltipInfoText
struct AWeapScoutRemote_C_UpdateTooltipInfoText_Params
{
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScoutRemote.WeapScoutRemote_C.ExpireTooltipInfoText
struct AWeapScoutRemote_C_ExpireTooltipInfoText_Params
{
};

// Function WeapScoutRemote.WeapScoutRemote_C.ExecuteUbergraph_WeapScoutRemote
struct AWeapScoutRemote_C_ExecuteUbergraph_WeapScoutRemote_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
