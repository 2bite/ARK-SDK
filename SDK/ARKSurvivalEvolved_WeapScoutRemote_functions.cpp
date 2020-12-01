// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapScoutRemote_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapScoutRemote.WeapScoutRemote_C.BPGetDebugInfoString
// (NetRequest, Event, NetResponse, Public, NetServer, BlueprintCallable, Const, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AWeapScoutRemote_C::BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPGetDebugInfoString");

	AWeapScoutRemote_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.AllowTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapScoutRemote_C::AllowTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.AllowTargeting");

	AWeapScoutRemote_C_AllowTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPGetTargetingTooltipInfoLabel
// (Net, NetReliable, Exec, Event, NetResponse, Public, NetServer, BlueprintCallable, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AWeapScoutRemote_C::BPGetTargetingTooltipInfoLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPGetTargetingTooltipInfoLabel");

	AWeapScoutRemote_C_BPGetTargetingTooltipInfoLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPGetProjectileSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapScoutRemote_C::BPGetProjectileSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPGetProjectileSpeed");

	AWeapScoutRemote_C_BPGetProjectileSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.OnRep_GogglesMode
// ()

void AWeapScoutRemote_C::OnRep_GogglesMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.OnRep_GogglesMode");

	AWeapScoutRemote_C_OnRep_GogglesMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.OnRep_FiredScout
// ()

void AWeapScoutRemote_C::OnRep_FiredScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.OnRep_FiredScout");

	AWeapScoutRemote_C_OnRep_FiredScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPOverrideFPVMasterPoseComponent
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMeshComponent* AWeapScoutRemote_C::BPOverrideFPVMasterPoseComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPOverrideFPVMasterPoseComponent");

	AWeapScoutRemote_C_BPOverrideFPVMasterPoseComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPPreventSwitchingWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapScoutRemote_C::BPPreventSwitchingWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPPreventSwitchingWeapon");

	AWeapScoutRemote_C_BPPreventSwitchingWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.Setup Goggle Anim Instance Class 
// ()

void AWeapScoutRemote_C::Setup_Goggle_Anim_Instance_Class_()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Setup Goggle Anim Instance Class ");

	AWeapScoutRemote_C_Setup_Goggle_Anim_Instance_Class__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.Get Relevant GoggleAnim Instance Class
// ()
// Parameters:
// class UClass*                  ClassRef                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::Get_Relevant_GoggleAnim_Instance_Class(class UClass** ClassRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Get Relevant GoggleAnim Instance Class");

	AWeapScoutRemote_C_Get_Relevant_GoggleAnim_Instance_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClassRef != nullptr)
		*ClassRef = params.ClassRef;
}


// Function WeapScoutRemote.WeapScoutRemote_C.Get RelevantGrenade Anim Instance Class
// ()
// Parameters:
// class UClass*                  ClassRef                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::Get_RelevantGrenade_Anim_Instance_Class(class UClass** ClassRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Get RelevantGrenade Anim Instance Class");

	AWeapScoutRemote_C_Get_RelevantGrenade_Anim_Instance_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClassRef != nullptr)
		*ClassRef = params.ClassRef;
}


// Function WeapScoutRemote.WeapScoutRemote_C.Setup Grenade Anim Instance Class
// ()

void AWeapScoutRemote_C::Setup_Grenade_Anim_Instance_Class()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Setup Grenade Anim Instance Class");

	AWeapScoutRemote_C_Setup_Grenade_Anim_Instance_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPIsValidUnStasisCaster
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapScoutRemote_C::BPIsValidUnStasisCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPIsValidUnStasisCaster");

	AWeapScoutRemote_C_BPIsValidUnStasisCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPOnStopTargeting
// ()
// Parameters:
// bool*                          bFromGamepadLeft               (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::BPOnStopTargeting(bool* bFromGamepadLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPOnStopTargeting");

	AWeapScoutRemote_C_BPOnStopTargeting_Params params;
	params.bFromGamepadLeft = bFromGamepadLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.ReceiveTick
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Public, NetServer, BlueprintCallable, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ReceiveTick");

	AWeapScoutRemote_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.ScoutDespawned
// ()

void AWeapScoutRemote_C::ScoutDespawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ScoutDespawned");

	AWeapScoutRemote_C_ScoutDespawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.Show
// ()
// Parameters:
// class USceneComponent*         SceneComp                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::Show(class USceneComponent* SceneComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Show");

	AWeapScoutRemote_C_Show_Params params;
	params.SceneComp = SceneComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.Hide
// ()
// Parameters:
// class USceneComponent*         SceneComp                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::Hide(class USceneComponent* SceneComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Hide");

	AWeapScoutRemote_C_Hide_Params params;
	params.SceneComp = SceneComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.ScoutGrenadeReturned
// ()

void AWeapScoutRemote_C::ScoutGrenadeReturned()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ScoutGrenadeReturned");

	AWeapScoutRemote_C_ScoutGrenadeReturned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPFiredWeapon
// ()

void AWeapScoutRemote_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPFiredWeapon");

	AWeapScoutRemote_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPTryFireWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapScoutRemote_C::BPTryFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPTryFireWeapon");

	AWeapScoutRemote_C_BPTryFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.AllowUnequip
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapScoutRemote_C::AllowUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.AllowUnequip");

	AWeapScoutRemote_C_AllowUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPAnimNotifyCustomEvent");

	AWeapScoutRemote_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ReceiveEndPlay");

	AWeapScoutRemote_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPStartEquippedNotify
// ()

void AWeapScoutRemote_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPStartEquippedNotify");

	AWeapScoutRemote_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.ReceiveBeginPlay
// ()

void AWeapScoutRemote_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ReceiveBeginPlay");

	AWeapScoutRemote_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.Scout Launched
// ()
// Parameters:
// class AScout_Character_BP_C*   Scout                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::Scout_Launched(class AScout_Character_BP_C* Scout)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Scout Launched");

	AWeapScoutRemote_C_Scout_Launched_Params params;
	params.Scout = Scout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPGetActorForTargetingTooltip
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, BlueprintCallable, Const, NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AWeapScoutRemote_C::STATIC_BPGetActorForTargetingTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPGetActorForTargetingTooltip");

	AWeapScoutRemote_C_BPGetActorForTargetingTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.BPWeaponCanFire
// (NetReliable, Native, Static, Public, NetServer, BlueprintCallable, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapScoutRemote_C::STATIC_BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPWeaponCanFire");

	AWeapScoutRemote_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScoutRemote.WeapScoutRemote_C.UserConstructionScript
// ()

void AWeapScoutRemote_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.UserConstructionScript");

	AWeapScoutRemote_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutLaunched
// ()

void AWeapScoutRemote_C::MULTI_ScoutLaunched()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutLaunched");

	AWeapScoutRemote_C_MULTI_ScoutLaunched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ReleasedPossessingSurvivor
// ()

void AWeapScoutRemote_C::MULTI_ReleasedPossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ReleasedPossessingSurvivor");

	AWeapScoutRemote_C_MULTI_ReleasedPossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_ScoutPossessedBySurvivor
// ()

void AWeapScoutRemote_C::OWNINGCLIENT_ScoutPossessedBySurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_ScoutPossessedBySurvivor");

	AWeapScoutRemote_C_OWNINGCLIENT_ScoutPossessedBySurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_OnEquipNoScout
// ()

void AWeapScoutRemote_C::OWNINGCLIENT_OnEquipNoScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_OnEquipNoScout");

	AWeapScoutRemote_C_OWNINGCLIENT_OnEquipNoScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_OnEquipScoutActive
// ()

void AWeapScoutRemote_C::MULTI_OnEquipScoutActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_OnEquipScoutActive");

	AWeapScoutRemote_C_MULTI_OnEquipScoutActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutGrenadeReturnedEvent
// ()

void AWeapScoutRemote_C::MULTI_ScoutGrenadeReturnedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutGrenadeReturnedEvent");

	AWeapScoutRemote_C_MULTI_ScoutGrenadeReturnedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_FiredWeapon
// ()

void AWeapScoutRemote_C::MULTI_FiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_FiredWeapon");

	AWeapScoutRemote_C_MULTI_FiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutDespawned
// ()

void AWeapScoutRemote_C::MULTI_ScoutDespawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutDespawned");

	AWeapScoutRemote_C_MULTI_ScoutDespawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.SERVER_RecallScout
// ()

void AWeapScoutRemote_C::SERVER_RecallScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.SERVER_RecallScout");

	AWeapScoutRemote_C_SERVER_RecallScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.Initialize
// ()

void AWeapScoutRemote_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Initialize");

	AWeapScoutRemote_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.SERVER_ReleasedPossessingSurvivor
// ()

void AWeapScoutRemote_C::SERVER_ReleasedPossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.SERVER_ReleasedPossessingSurvivor");

	AWeapScoutRemote_C_SERVER_ReleasedPossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.SERVER_DoHandleFiring
// ()

void AWeapScoutRemote_C::SERVER_DoHandleFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.SERVER_DoHandleFiring");

	AWeapScoutRemote_C_SERVER_DoHandleFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.UpdateTooltipInfoText
// ()
// Parameters:
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::UpdateTooltipInfoText(class AShooterCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.UpdateTooltipInfoText");

	AWeapScoutRemote_C_UpdateTooltipInfoText_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.ExpireTooltipInfoText
// ()

void AWeapScoutRemote_C::ExpireTooltipInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ExpireTooltipInfoText");

	AWeapScoutRemote_C_ExpireTooltipInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScoutRemote.WeapScoutRemote_C.ExecuteUbergraph_WeapScoutRemote
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScoutRemote_C::ExecuteUbergraph_WeapScoutRemote(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ExecuteUbergraph_WeapScoutRemote");

	AWeapScoutRemote_C_ExecuteUbergraph_WeapScoutRemote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
