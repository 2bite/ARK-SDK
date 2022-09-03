// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Exosuit_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetHudData
// ()
// Parameters:
// bool                           bUsesChestBeam                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bCanUseChestBeam               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ChestBeamEnergyPercent         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ChestBeamState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FuelItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EnergyPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentMode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPreparingJump               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::GetHudData(bool* bUsesChestBeam, bool* bCanUseChestBeam, float* ChestBeamEnergyPercent, int* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int* CurrentMode, bool* bIsPreparingJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetHudData");

	AExosuit_Character_BP_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUsesChestBeam != nullptr)
		*bUsesChestBeam = params.bUsesChestBeam;
	if (bCanUseChestBeam != nullptr)
		*bCanUseChestBeam = params.bCanUseChestBeam;
	if (ChestBeamEnergyPercent != nullptr)
		*ChestBeamEnergyPercent = params.ChestBeamEnergyPercent;
	if (ChestBeamState != nullptr)
		*ChestBeamState = params.ChestBeamState;
	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
	if (FuelItem != nullptr)
		*FuelItem = params.FuelItem;
	if (EnergyPercent != nullptr)
		*EnergyPercent = params.EnergyPercent;
	if (CurrentMode != nullptr)
		*CurrentMode = params.CurrentMode;
	if (bIsPreparingJump != nullptr)
		*bIsPreparingJump = params.bIsPreparingJump;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasOfflineRider
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::HasOfflineRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasOfflineRider");

	AExosuit_Character_BP_C_HasOfflineRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BP_OnCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnCryo");

	AExosuit_Character_BP_C_BP_OnCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetFinalBeamTarget
// ()
// Parameters:
// class AActor*                  FinalTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::GetFinalBeamTarget(class AActor** FinalTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetFinalBeamTarget");

	AExosuit_Character_BP_C_GetFinalBeamTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalTarget != nullptr)
		*FinalTarget = params.FinalTarget;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> AExosuit_Character_BP_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPForceCameraStyle");

	AExosuit_Character_BP_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerNonDedicated
// ()

void AExosuit_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerNonDedicated");

	AExosuit_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetFPVMaterialParamter
// ()
// Parameters:
// bool                           bIsFPV                         (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::SetFPVMaterialParamter(bool bIsFPV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetFPVMaterialParamter");

	AExosuit_Character_BP_C_SetFPVMaterialParamter_Params params;
	params.bIsFPV = bIsFPV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedCameraMode
// ()
// Parameters:
// bool                           bIsFPV                         (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::OnChangedCameraMode(bool bIsFPV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedCameraMode");

	AExosuit_Character_BP_C_OnChangedCameraMode_Params params;
	params.bIsFPV = bIsFPV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnJumped
// ()

void AExosuit_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnJumped");

	AExosuit_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DisableExperienceAndLevelUps
// ()

void AExosuit_Character_BP_C::DisableExperienceAndLevelUps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DisableExperienceAndLevelUps");

	AExosuit_Character_BP_C_DisableExperienceAndLevelUps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPSetupTamed");

	AExosuit_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyExosuit
// ()

void AExosuit_Character_BP_C::DestroyExosuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyExosuit");

	AExosuit_Character_BP_C_DestroyExosuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldRequestStructuresPlacedOnFloor
// ()
// Parameters:
// class APrimalStructure*        Structure                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::ShouldRequestStructuresPlacedOnFloor(class APrimalStructure* Structure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldRequestStructuresPlacedOnFloor");

	AExosuit_Character_BP_C_ShouldRequestStructuresPlacedOnFloor_Params params;
	params.Structure = Structure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldKnockbackChar
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldKnockback                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::ShouldKnockbackChar(class APrimalCharacter* Char, bool* ShouldKnockback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldKnockbackChar");

	AExosuit_Character_BP_C_ShouldKnockbackChar_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldKnockback != nullptr)
		*ShouldKnockback = params.ShouldKnockback;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.RemovedAttachedStructure
// ()

void AExosuit_Character_BP_C::RemovedAttachedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.RemovedAttachedStructure");

	AExosuit_Character_BP_C_RemovedAttachedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAttachedStructure
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent)

void AExosuit_Character_BP_C::SetupAttachedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAttachedStructure");

	AExosuit_Character_BP_C_SetupAttachedStructure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClientInitAttachedStructure
// ()

void AExosuit_Character_BP_C::ClientInitAttachedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClientInitAttachedStructure");

	AExosuit_Character_BP_C_ClientInitAttachedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_AttachedStructureID
// ()

void AExosuit_Character_BP_C::OnRep_AttachedStructureID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_AttachedStructureID");

	AExosuit_Character_BP_C_OnRep_AttachedStructureID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AExosuit_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AExosuit_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintDrawFloatingHUD
// (NetRequest, Native, Event, NetResponse, Static, Protected, Delegate, NetClient, BlueprintEvent)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::STATIC_BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintDrawFloatingHUD");

	AExosuit_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AExosuit_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustDamage");

	AExosuit_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsAllowedToAutoRepair
// ()
// Parameters:
// bool                           IsAllowed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::IsAllowedToAutoRepair(bool* IsAllowed, float* TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsAllowedToAutoRepair");

	AExosuit_Character_BP_C_IsAllowedToAutoRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAllowed != nullptr)
		*IsAllowed = params.IsAllowed;
	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerServer
// ()

void AExosuit_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerServer");

	AExosuit_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTryMultiUse");

	AExosuit_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetMultiUseEntries
// (NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AExosuit_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetMultiUseEntries");

	AExosuit_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ModifyHudMultiUseLoc
// ()
// Parameters:
// struct FVector2D               theVec                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::ModifyHudMultiUseLoc(class APlayerController** PC, int* index, struct FVector2D* theVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ModifyHudMultiUseLoc");

	AExosuit_Character_BP_C_ModifyHudMultiUseLoc_Params params;
	params.PC = PC;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theVec != nullptr)
		*theVec = params.theVec;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasSavedMaterialForComponent
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        Structure                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::STATIC_HasSavedMaterialForComponent(class USceneComponent* Component, class APrimalStructure* Structure, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasSavedMaterialForComponent");

	AExosuit_Character_BP_C_HasSavedMaterialForComponent_Params params;
	params.Component = Component;
	params.Structure = Structure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpPressed
// ()

void AExosuit_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpPressed");

	AExosuit_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideJumpZModifier
// ()
// Parameters:
// float*                         InJumpZModifier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AExosuit_Character_BP_C::BPOverrideJumpZModifier(float* InJumpZModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideJumpZModifier");

	AExosuit_Character_BP_C_BPOverrideJumpZModifier_Params params;
	params.InJumpZModifier = InJumpZModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_End
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPAnimNotifyCustomState_End(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_End");

	AExosuit_Character_BP_C_BPAnimNotifyCustomState_End_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_Begin
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_Begin");

	AExosuit_Character_BP_C_BPAnimNotifyCustomState_Begin_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_InterceptMoveRight");

	AExosuit_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintPlayDying");

	AExosuit_Character_BP_C_BlueprintPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateFuel
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUpdateEnergyPercentRep    (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::UpdateFuel(float DeltaTime, bool ForceUpdateEnergyPercentRep)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateFuel");

	AExosuit_Character_BP_C_UpdateFuel_Params params;
	params.DeltaTime = DeltaTime;
	params.ForceUpdateEnergyPercentRep = ForceUpdateEnergyPercentRep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyInventoryItemChange");

	AExosuit_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetRunning
// ()
// Parameters:
// bool*                          bNewIsRunning                  (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BP_OnSetRunning(bool* bNewIsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetRunning");

	AExosuit_Character_BP_C_BP_OnSetRunning_Params params;
	params.bNewIsRunning = bNewIsRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AExosuit_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	AExosuit_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideCharacterParticle
// ()
// Parameters:
// class UParticleSystem**        ParticleIn                     (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* AExosuit_Character_BP_C::BPOverrideCharacterParticle(class UParticleSystem** ParticleIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideCharacterParticle");

	AExosuit_Character_BP_C_BPOverrideCharacterParticle_Params params;
	params.ParticleIn = ParticleIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardLocation
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AExosuit_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardLocation");

	AExosuit_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardDirection
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AExosuit_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardDirection");

	AExosuit_Character_BP_C_BPGetRiderUnboardDirection_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveBeginPlay
// ()

void AExosuit_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveBeginPlay");

	AExosuit_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnMovementModeChangedNotify");

	AExosuit_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyToggleHUD
// ()
// Parameters:
// bool*                          bHudHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPNotifyToggleHUD(bool* bHudHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyToggleHUD");

	AExosuit_Character_BP_C_BPNotifyToggleHUD_Params params;
	params.bHudHidden = bHudHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAimedStructure
// ()
// Parameters:
// class APrimalStructure*        InStructure                    (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::SetupAimedStructure(class APrimalStructure* InStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAimedStructure");

	AExosuit_Character_BP_C_SetupAimedStructure_Params params;
	params.InStructure = InStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachHandBeams
// (Exec, Event, Static, Public, Private, BlueprintEvent)

void AExosuit_Character_BP_C::STATIC_AttachHandBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachHandBeams");

	AExosuit_Character_BP_C_AttachHandBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AExosuit_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustAttackIndex");

	AExosuit_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.FillEnergy
// ()

void AExosuit_Character_BP_C::FillEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.FillEnergy");

	AExosuit_Character_BP_C_FillEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPostLoadedFromSaveGame
// ()

void AExosuit_Character_BP_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPostLoadedFromSaveGame");

	AExosuit_Character_BP_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	AExosuit_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
	params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPreventRiding");

	AExosuit_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetChestBeamEnergy
// ()
// Parameters:
// float                          RemainingEnergy                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::GetChestBeamEnergy(float* RemainingEnergy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetChestBeamEnergy");

	AExosuit_Character_BP_C_GetChestBeamEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingEnergy != nullptr)
		*RemainingEnergy = params.RemainingEnergy;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor AExosuit_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairColor");

	AExosuit_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Cycle Mode
// ()

void AExosuit_Character_BP_C::Cycle_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Cycle Mode");

	AExosuit_Character_BP_C_Cycle_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SyncHUD
// ()

void AExosuit_Character_BP_C::SyncHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SyncHUD");

	AExosuit_Character_BP_C_SyncHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyHudWidget
// ()
// Parameters:
// bool                           DestroyNow                     (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::DestroyHudWidget(bool DestroyNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyHudWidget");

	AExosuit_Character_BP_C_DestroyHudWidget_Params params;
	params.DestroyNow = DestroyNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupHUDWidget
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::SetupHUDWidget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupHUDWidget");

	AExosuit_Character_BP_C_SetupHUDWidget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsModeAllowed
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsAllowed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::IsModeAllowed(int NewMode, bool* bIsAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsModeAllowed");

	AExosuit_Character_BP_C_IsModeAllowed_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsAllowed != nullptr)
		*bIsAllowed = params.bIsAllowed;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetCurrentMode
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::SetCurrentMode(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetCurrentMode");

	AExosuit_Character_BP_C_SetCurrentMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveDestroyed
// ()

void AExosuit_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveDestroyed");

	AExosuit_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void AExosuit_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.InterceptInputEvent");

	AExosuit_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpReleased
// ()

void AExosuit_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpReleased");

	AExosuit_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AExosuit_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetGravityZScale");

	AExosuit_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AExosuit_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetJumpVelocity
// ()
// Parameters:
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForPreview                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidTrajectory          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AdjustedEndLocation            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::GetJumpVelocity(const struct FVector& StartLocation, const struct FVector& EndLocation, bool bForPreview, struct FVector2D* Velocity, bool* bFoundValidTrajectory, float* Gravity, struct FVector* AdjustedEndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetJumpVelocity");

	AExosuit_Character_BP_C_GetJumpVelocity_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.bForPreview = bForPreview;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (bFoundValidTrajectory != nullptr)
		*bFoundValidTrajectory = params.bFoundValidTrajectory;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;
	if (AdjustedEndLocation != nullptr)
		*AdjustedEndLocation = params.AdjustedEndLocation;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AExosuit_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnLanded");

	AExosuit_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustImpulseFromDamage
// ()
// Parameters:
// struct FVector*                DesiredImpulse                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AExosuit_Character_BP_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustImpulseFromDamage");

	AExosuit_Character_BP_C_BPAdjustImpulseFromDamage_Params params;
	params.DesiredImpulse = DesiredImpulse;
	params.DamageTaken = DamageTaken;
	params.TheDamageEvent = TheDamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideHurtAnim
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageHitNormal           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AExosuit_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideHurtAnim");

	AExosuit_Character_BP_C_BPOverrideHurtAnim_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.bIsPointDamage = bIsPointDamage;
	params.PointDamageLocation = PointDamageLocation;
	params.PointDamageHitNormal = PointDamageHitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetDeath
// ()

void AExosuit_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetDeath");

	AExosuit_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_OfflineRider
// ()

void AExosuit_Character_BP_C::OnRep_OfflineRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_OfflineRider");

	AExosuit_Character_BP_C_OnRep_OfflineRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetJumpPreviewVisibility
// ()
// Parameters:
// bool                           NewVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::SetJumpPreviewVisibility(bool NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetJumpPreviewVisibility");

	AExosuit_Character_BP_C_SetJumpPreviewVisibility_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateJumpPreview
// (NetReliable, Native, Event, Static, Public, Private, BlueprintEvent)

void AExosuit_Character_BP_C::STATIC_UpdateJumpPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateJumpPreview");

	AExosuit_Character_BP_C_UpdateJumpPreview_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPLimitPlayerRotation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               InViewRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AExosuit_Character_BP_C::BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPLimitPlayerRotation");

	AExosuit_Character_BP_C_BPLimitPlayerRotation_Params params;
	params.viewingCharacter = viewingCharacter;
	params.InViewRotation = InViewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetChestBeamState
// ()
// Parameters:
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReplicateToOwner               (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::SetChestBeamState(int NewState, bool ReplicateToOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetChestBeamState");

	AExosuit_Character_BP_C_SetChestBeamState_Params params;
	params.NewState = NewState;
	params.ReplicateToOwner = ReplicateToOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_ChestBeamState
// ()

void AExosuit_Character_BP_C::OnRep_ChestBeamState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_ChestBeamState");

	AExosuit_Character_BP_C_OnRep_ChestBeamState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AExosuit_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairAlpha");

	AExosuit_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanUseChestBeam
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           ShouldDeplete                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool AExosuit_Character_BP_C::CanUseChestBeam(bool* ShouldDeplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanUseChestBeam");

	AExosuit_Character_BP_C_CanUseChestBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldDeplete != nullptr)
		*ShouldDeplete = params.ShouldDeplete;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStopJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::BPOnStopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStopJump");

	AExosuit_Character_BP_C_BPOnStopJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStartJump");

	AExosuit_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.LocalClientUpdateChestBeamLocation
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, BlueprintEvent)

void AExosuit_Character_BP_C::STATIC_LocalClientUpdateChestBeamLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.LocalClientUpdateChestBeamLocation");

	AExosuit_Character_BP_C_LocalClientUpdateChestBeamLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.EnableChestBeamFX
// ()
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::EnableChestBeamFX(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.EnableChestBeamFX");

	AExosuit_Character_BP_C_EnableChestBeamFX_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleOnStopTargeting");

	AExosuit_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanJumpInternal");

	AExosuit_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetAddForwardVelocityOnJump
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AExosuit_Character_BP_C::BPGetAddForwardVelocityOnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetAddForwardVelocityOnJump");

	AExosuit_Character_BP_C_BPGetAddForwardVelocityOnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetTargetingDesirability
// ()
// Parameters:
// class AActor**                 Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AExosuit_Character_BP_C::BPGetTargetingDesirability(class AActor** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetTargetingDesirability");

	AExosuit_Character_BP_C_BPGetTargetingDesirability_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetHighlightColor
// ()
// Parameters:
// class APrimalStructure*        ForStructure                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::SetHighlightColor(class APrimalStructure* ForStructure, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetHighlightColor");

	AExosuit_Character_BP_C_SetHighlightColor_Params params;
	params.ForStructure = ForStructure;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifySetRider");

	AExosuit_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetStructureHighlighted
// (NetReliable, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalStructure*        Structure                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewHighlighted                (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::SetStructureHighlighted(class APrimalStructure* Structure, bool bNewHighlighted, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetStructureHighlighted");

	AExosuit_Character_BP_C_SetStructureHighlighted_Params params;
	params.Structure = Structure;
	params.bNewHighlighted = bNewHighlighted;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.StoreStructure
// ()
// Parameters:
// class APrimalStructure*        StructureToGrab                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowNotifications             (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::StoreStructure(class APrimalStructure* StructureToGrab, bool bShowNotifications)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.StoreStructure");

	AExosuit_Character_BP_C_StoreStructure_Params params;
	params.StructureToGrab = StructureToGrab;
	params.bShowNotifications = bShowNotifications;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetStructurePlacer
// ()
// Parameters:
// class APrimalStructurePlacer*  OutStructurePlacer             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::GetStructurePlacer(class APrimalStructurePlacer** OutStructurePlacer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetStructurePlacer");

	AExosuit_Character_BP_C_GetStructurePlacer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStructurePlacer != nullptr)
		*OutStructurePlacer = params.OutStructurePlacer;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyClearRider");

	AExosuit_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPDrawToRiderHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPDrawToRiderHUD");

	AExosuit_Character_BP_C_BPDrawToRiderHUD_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanAttachStructure
// ()
// Parameters:
// class APrimalStructure*        PrimalStructure                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanGrab                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::CanAttachStructure(class APrimalStructure* PrimalStructure, bool* bCanGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanAttachStructure");

	AExosuit_Character_BP_C_CanAttachStructure_Params params;
	params.PrimalStructure = PrimalStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanGrab != nullptr)
		*bCanGrab = params.bCanGrab;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateAimedStructure
// ()

void AExosuit_Character_BP_C::UpdateAimedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateAimedStructure");

	AExosuit_Character_BP_C_UpdateAimedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Set Last Aimed Structure
// ()
// Parameters:
// class APrimalStructure*        LastAimedStructure             (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Set_Last_Aimed_Structure(class APrimalStructure* LastAimedStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Set Last Aimed Structure");

	AExosuit_Character_BP_C_Set_Last_Aimed_Structure_Params params;
	params.LastAimedStructure = LastAimedStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ResetLastAimedStructure
// ()

void AExosuit_Character_BP_C::ResetLastAimedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ResetLastAimedStructure");

	AExosuit_Character_BP_C_ResetLastAimedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnPreviewStructure
// ()

void AExosuit_Character_BP_C::SpawnPreviewStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnPreviewStructure");

	AExosuit_Character_BP_C_SpawnPreviewStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.RidingTick
// (NetRequest, Native, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::STATIC_RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.RidingTick");

	AExosuit_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetAimedStructure
// (NetReliable, MulticastDelegate, Protected, NetClient, BlueprintEvent)
// Parameters:
// class APrimalStructure*        OutStructure                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::GetAimedStructure(class APrimalStructure** OutStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetAimedStructure");

	AExosuit_Character_BP_C_GetAimedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStructure != nullptr)
		*OutStructure = params.OutStructure;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleControllerInitiatedAttack");

	AExosuit_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.UserConstructionScript
// ()

void AExosuit_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.UserConstructionScript");

	AExosuit_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestPlacement
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ViewRotation                   (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_RequestPlacement(const struct FVector& Location, const struct FRotator& Rotation, const struct FRotator& ViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestPlacement");

	AExosuit_Character_BP_C_Server_RequestPlacement_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.ViewRotation = ViewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestAttachStructure
// ()
// Parameters:
// class APrimalStructure*        StructureToGrab                (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_RequestAttachStructure(class APrimalStructure* StructureToGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestAttachStructure");

	AExosuit_Character_BP_C_Server_RequestAttachStructure_Params params;
	params.StructureToGrab = StructureToGrab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreStructure
// ()
// Parameters:
// class APrimalStructure*        StructureToGrab                (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_RequestStoreStructure(class APrimalStructure* StructureToGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreStructure");

	AExosuit_Character_BP_C_Server_RequestStoreStructure_Params params;
	params.StructureToGrab = StructureToGrab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BindReceivedStructuresDelegate
// ()
// Parameters:
// class AShooterPlayerController* ShooterPC                      (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::BindReceivedStructuresDelegate(class AShooterPlayerController* ShooterPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BindReceivedStructuresDelegate");

	AExosuit_Character_BP_C_BindReceivedStructuresDelegate_Params params;
	params.ShooterPC = ShooterPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event
// ()
// Parameters:
// class APrimalStructure*        Structure                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalStructure*> StructuresPlacedOnFloor        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AExosuit_Character_BP_C::OnClientReceiveStructuresPlacedOnFloor_Event(class APrimalStructure* Structure, TArray<class APrimalStructure*>* StructuresPlacedOnFloor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event");

	AExosuit_Character_BP_C_OnClientReceiveStructuresPlacedOnFloor_Event_Params params;
	params.Structure = Structure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StructuresPlacedOnFloor != nullptr)
		*StructuresPlacedOnFloor = params.StructuresPlacedOnFloor;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestJump
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          HeldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasBlockingHIt                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_RequestJump(const struct FVector& Location, float HeldTime, bool bWasBlockingHIt, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestJump");

	AExosuit_Character_BP_C_Server_RequestJump_Params params;
	params.Location = Location;
	params.HeldTime = HeldTime;
	params.bWasBlockingHIt = bWasBlockingHIt;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetBeamEndLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasHit                        (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_SetBeamEndLocation(const struct FVector& Location, bool bWasHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetBeamEndLocation");

	AExosuit_Character_BP_C_Server_SetBeamEndLocation_Params params;
	params.Location = Location;
	params.bWasHit = bWasHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SetBeamEndLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasHit                        (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Multicast_SetBeamEndLocation(const struct FVector& Location, bool bWasHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SetBeamEndLocation");

	AExosuit_Character_BP_C_Multicast_SetBeamEndLocation_Params params;
	params.Location = Location;
	params.bWasHit = bWasHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestChestBeamState
// ()
// Parameters:
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_RequestChestBeamState(int NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestChestBeamState");

	AExosuit_Character_BP_C_Server_RequestChestBeamState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachOfflineRider
// ()

void AExosuit_Character_BP_C::AttachOfflineRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachOfflineRider");

	AExosuit_Character_BP_C_AttachOfflineRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoKnockback
// ()

void AExosuit_Character_BP_C::DoKnockback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoKnockback");

	AExosuit_Character_BP_C_DoKnockback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_KnockbackFX
// ()

void AExosuit_Character_BP_C::Multicast_KnockbackFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_KnockbackFX");

	AExosuit_Character_BP_C_Multicast_KnockbackFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SpawnLandedFX
// ()

void AExosuit_Character_BP_C::Multicast_SpawnLandedFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SpawnLandedFX");

	AExosuit_Character_BP_C_Multicast_SpawnLandedFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnLandedFX
// ()

void AExosuit_Character_BP_C::SpawnLandedFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnLandedFX");

	AExosuit_Character_BP_C_SpawnLandedFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetPreparingJump
// ()
// Parameters:
// bool                           NewIsPreparingJump             (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_SetPreparingJump(bool NewIsPreparingJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetPreparingJump");

	AExosuit_Character_BP_C_Server_SetPreparingJump_Params params;
	params.NewIsPreparingJump = NewIsPreparingJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoAttachStructure
// ()

void AExosuit_Character_BP_C::DoAttachStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoAttachStructure");

	AExosuit_Character_BP_C_DoAttachStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoPlacement
// ()

void AExosuit_Character_BP_C::DoPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoPlacement");

	AExosuit_Character_BP_C_DoPlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_DoPlacment
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Multicast_DoPlacment(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_DoPlacment");

	AExosuit_Character_BP_C_Multicast_DoPlacment_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetCurrentMode
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_SetCurrentMode(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetCurrentMode");

	AExosuit_Character_BP_C_Server_SetCurrentMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ServerRestart
// ()

void AExosuit_Character_BP_C::ServerRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ServerRestart");

	AExosuit_Character_BP_C_ServerRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_HideAttachedStructure
// ()

void AExosuit_Character_BP_C::Multicast_HideAttachedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_HideAttachedStructure");

	AExosuit_Character_BP_C_Multicast_HideAttachedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ShowAttachedStructure
// ()

void AExosuit_Character_BP_C::Multicast_ShowAttachedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ShowAttachedStructure");

	AExosuit_Character_BP_C_Multicast_ShowAttachedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ResetPendingAttachedStructure
// ()

void AExosuit_Character_BP_C::Multicast_ResetPendingAttachedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ResetPendingAttachedStructure");

	AExosuit_Character_BP_C_Multicast_ResetPendingAttachedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedPhysicsVolume
// ()
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::OnChangedPhysicsVolume(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedPhysicsVolume");

	AExosuit_Character_BP_C_OnChangedPhysicsVolume_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetStartedRunning
// ()
// Parameters:
// double                         Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Server_SetStartedRunning(double Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetStartedRunning");

	AExosuit_Character_BP_C_Server_SetStartedRunning_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_KnockbackChars
// ()
// Parameters:
// TArray<class APrimalCharacter*> Chars                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Impulses                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AExosuit_Character_BP_C::Server_KnockbackChars(TArray<class APrimalCharacter*>* Chars, TArray<struct FVector>* Impulses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_KnockbackChars");

	AExosuit_Character_BP_C_Server_KnockbackChars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Chars != nullptr)
		*Chars = params.Chars;
	if (Impulses != nullptr)
		*Impulses = params.Impulses;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearMoveIgnoredActors
// ()

void AExosuit_Character_BP_C::ClearMoveIgnoredActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearMoveIgnoredActors");

	AExosuit_Character_BP_C_ClearMoveIgnoredActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearHUDReference
// ()

void AExosuit_Character_BP_C::ClearHUDReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearHUDReference");

	AExosuit_Character_BP_C_ClearHUDReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_StoredStructureFX
// ()
// Parameters:
// bool                           bForceOnOwningClient           (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::Multicast_StoredStructureFX(bool bForceOnOwningClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_StoredStructureFX");

	AExosuit_Character_BP_C_Multicast_StoredStructureFX_Params params;
	params.bForceOnOwningClient = bForceOnOwningClient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearRiderIgnoreExosuitCollision
// ()

void AExosuit_Character_BP_C::ClearRiderIgnoreExosuitCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearRiderIgnoreExosuitCollision");

	AExosuit_Character_BP_C_ClearRiderIgnoreExosuitCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DelayedRequestStoreStructure
// ()

void AExosuit_Character_BP_C::DelayedRequestStoreStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DelayedRequestStoreStructure");

	AExosuit_Character_BP_C_DelayedRequestStoreStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreAttachedStructure
// ()

void AExosuit_Character_BP_C::Server_RequestStoreAttachedStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreAttachedStructure");

	AExosuit_Character_BP_C_Server_RequestStoreAttachedStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ExecuteUbergraph_Exosuit_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_Character_BP_C::ExecuteUbergraph_Exosuit_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ExecuteUbergraph_Exosuit_Character_BP");

	AExosuit_Character_BP_C_ExecuteUbergraph_Exosuit_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
