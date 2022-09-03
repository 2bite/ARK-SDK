// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveAnyDamage");

	ASinomacrops_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyStructurePlacedNearby
// ()
// Parameters:
// class APrimalStructure**       NewStructure                   (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyStructurePlacedNearby");

	ASinomacrops_Character_BP_C_BPNotifyStructurePlacedNearby_Params params;
	params.NewStructure = NewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamStaminaCheck
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// bool                           HasStamToScream                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::STATIC_ScreamStaminaCheck(bool* HasStamToScream)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamStaminaCheck");

	ASinomacrops_Character_BP_C_ScreamStaminaCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasStamToScream != nullptr)
		*HasStamToScream = params.HasStamToScream;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearPreventInventoryAccess
// ()

void ASinomacrops_Character_BP_C::ClearPreventInventoryAccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearPreventInventoryAccess");

	ASinomacrops_Character_BP_C_ClearPreventInventoryAccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.MountedImmobilizationCheck
// ()

void ASinomacrops_Character_BP_C::MountedImmobilizationCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.MountedImmobilizationCheck");

	ASinomacrops_Character_BP_C_MountedImmobilizationCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintDrawFloatingHUD");

	ASinomacrops_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.TamingTrapCheck
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// bool                           CheckPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTrapped                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::STATIC_TamingTrapCheck(bool CheckPlayer, bool* IsTrapped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.TamingTrapCheck");

	ASinomacrops_Character_BP_C_TamingTrapCheck_Params params;
	params.CheckPlayer = CheckPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTrapped != nullptr)
		*IsTrapped = params.IsTrapped;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyLevelUp");

	ASinomacrops_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowPlayMontage");

	ASinomacrops_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASinomacrops_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ASinomacrops_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.LaunchToBuddyChar
// (Exec, Event, MulticastDelegate, Public, Private, HasOutParms, NetClient, BlueprintEvent)

void ASinomacrops_Character_BP_C::LaunchToBuddyChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.LaunchToBuddyChar");

	ASinomacrops_Character_BP_C_LaunchToBuddyChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASinomacrops_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetGravityZScale");

	ASinomacrops_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::BPTamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTamedConsumeFoodItem");

	ASinomacrops_Character_BP_C_BPTamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnRep_MountSocketIndex
// ()

void ASinomacrops_Character_BP_C::OnRep_MountSocketIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnRep_MountSocketIndex");

	ASinomacrops_Character_BP_C_OnRep_MountSocketIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SpawnMountedFlapVFX
// (NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// bool                           IsWings                        (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::SpawnMountedFlapVFX(bool IsWings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SpawnMountedFlapVFX");

	ASinomacrops_Character_BP_C_SpawnMountedFlapVFX_Params params;
	params.IsWings = IsWings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateEyeWingMat
// ()
// Parameters:
// float                          val                            (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::UpdateEyeWingMat(float val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateEyeWingMat");

	ASinomacrops_Character_BP_C_UpdateEyeWingMat_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearLastThrowAvoidActors
// ()

void ASinomacrops_Character_BP_C::ClearLastThrowAvoidActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearLastThrowAvoidActors");

	ASinomacrops_Character_BP_C_ClearLastThrowAvoidActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPClientHandleNetExecCommand");

	ASinomacrops_Character_BP_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnScreamStart
// ()

void ASinomacrops_Character_BP_C::OnScreamStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnScreamStart");

	ASinomacrops_Character_BP_C_OnScreamStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTryMultiUse");

	ASinomacrops_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ASinomacrops_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetMultiUseEntries");

	ASinomacrops_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnClearMountedDino
// ()

void ASinomacrops_Character_BP_C::BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnClearMountedDino");

	ASinomacrops_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AnimNotifyMountedDino
// ()

void ASinomacrops_Character_BP_C::AnimNotifyMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AnimNotifyMountedDino");

	ASinomacrops_Character_BP_C_AnimNotifyMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshSinoMountType
// ()

void ASinomacrops_Character_BP_C::RefreshSinoMountType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshSinoMountType");

	ASinomacrops_Character_BP_C_RefreshSinoMountType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetCanBeMountedGlider
// ()
// Parameters:
// bool                           CanBeMountedGlider             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::GetCanBeMountedGlider(bool* CanBeMountedGlider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetCanBeMountedGlider");

	ASinomacrops_Character_BP_C_GetCanBeMountedGlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanBeMountedGlider != nullptr)
		*CanBeMountedGlider = params.CanBeMountedGlider;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.FlyAfterTamingFeed
// ()

void ASinomacrops_Character_BP_C::FlyAfterTamingFeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.FlyAfterTamingFeed");

	ASinomacrops_Character_BP_C_FlyAfterTamingFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintOverrideWantsToRun");

	ASinomacrops_Character_BP_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ResetChanceToFlyLand
// ()

void ASinomacrops_Character_BP_C::ResetChanceToFlyLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ResetChanceToFlyLand");

	ASinomacrops_Character_BP_C_ResetChanceToFlyLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowWakingTame
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::AllowWakingTame(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowWakingTame");

	ASinomacrops_Character_BP_C_AllowWakingTame_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateChanceToFlyLand
// ()
// Parameters:
// bool                           IsFly                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Chance                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDefault                      (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::UpdateChanceToFlyLand(bool IsFly, float Chance, bool IsDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateChanceToFlyLand");

	ASinomacrops_Character_BP_C_UpdateChanceToFlyLand_Params params;
	params.IsFly = IsFly;
	params.Chance = Chance;
	params.IsDefault = IsDefault;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OverrideRandomWanderLocation
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::STATIC_OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OverrideRandomWanderLocation");

	ASinomacrops_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPFedWakingTameEvent
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::BPFedWakingTameEvent(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPFedWakingTameEvent");

	ASinomacrops_Character_BP_C_BPFedWakingTameEvent_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BP_CanFly
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::BP_CanFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BP_CanFly");

	ASinomacrops_Character_BP_C_BP_CanFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshWildFollowPlayer
// (NetReliable, NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintEvent)

void ASinomacrops_Character_BP_C::RefreshWildFollowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshWildFollowPlayer");

	ASinomacrops_Character_BP_C_RefreshWildFollowPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearWildFollowPlayer
// ()

void ASinomacrops_Character_BP_C::ClearWildFollowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearWildFollowPlayer");

	ASinomacrops_Character_BP_C_ClearWildFollowPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SetWildFollowPlayer
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::SetWildFollowPlayer(class AShooterCharacter* ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SetWildFollowPlayer");

	ASinomacrops_Character_BP_C_SetWildFollowPlayer_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetWildShouldFollowPlayer
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetOnSuccess                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldFollow                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::GetWildShouldFollowPlayer(class AShooterCharacter* ShooterChar, bool SetOnSuccess, bool* ShouldFollow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetWildShouldFollowPlayer");

	ASinomacrops_Character_BP_C_GetWildShouldFollowPlayer_Params params;
	params.ShooterChar = ShooterChar;
	params.SetOnSuccess = SetOnSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFollow != nullptr)
		*ShouldFollow = params.ShouldFollow;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearBuddyChar
// ()

void ASinomacrops_Character_BP_C::ClearBuddyChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearBuddyChar");

	ASinomacrops_Character_BP_C_ClearBuddyChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ArriveAtBuddyCheck
// ()

void ASinomacrops_Character_BP_C::ArriveAtBuddyCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ArriveAtBuddyCheck");

	ASinomacrops_Character_BP_C_ArriveAtBuddyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.DinoShoulderMountedLaunch
// ()
// Parameters:
// struct FVector*                launchDir                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      throwingCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::DinoShoulderMountedLaunch(struct FVector* launchDir, class AShooterCharacter** throwingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.DinoShoulderMountedLaunch");

	ASinomacrops_Character_BP_C_DinoShoulderMountedLaunch_Params params;
	params.launchDir = launchDir;
	params.throwingCharacter = throwingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldScream
// ()
// Parameters:
// bool                           IsAI                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldScream                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::GetShouldScream(bool IsAI, bool* ShouldScream)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldScream");

	ASinomacrops_Character_BP_C_GetShouldScream_Params params;
	params.IsAI = IsAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldScream != nullptr)
		*ShouldScream = params.ShouldScream;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Scream
// ()

void ASinomacrops_Character_BP_C::Scream()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Scream");

	ASinomacrops_Character_BP_C_Scream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTimerServer
// ()

void ASinomacrops_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTimerServer");

	ASinomacrops_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintEvent)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASinomacrops_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAdjustOutputDamage");

	ASinomacrops_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldAttackActor
// (NetRequest, Native, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldAttack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::GetShouldAttackActor(class AActor* Actor, bool* ShouldAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldAttackActor");

	ASinomacrops_Character_BP_C_GetShouldAttackActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldAttack != nullptr)
		*ShouldAttack = params.ShouldAttack;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPShouldForceFlee");

	ASinomacrops_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPSetupTamed");

	ASinomacrops_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintCanAttack");

	ASinomacrops_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.InitSino
// ()

void ASinomacrops_Character_BP_C::InitSino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.InitSino");

	ASinomacrops_Character_BP_C_InitSino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SinoMovementStamDrainTick
// ()

void ASinomacrops_Character_BP_C::SinoMovementStamDrainTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SinoMovementStamDrainTick");

	ASinomacrops_Character_BP_C_SinoMovementStamDrainTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPServerHandleNetExecCommand");

	ASinomacrops_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnSetMountedDino
// ()

void ASinomacrops_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnSetMountedDino");

	ASinomacrops_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UserConstructionScript
// ()

void ASinomacrops_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UserConstructionScript");

	ASinomacrops_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__FinishedFunc
// ()

void ASinomacrops_Character_BP_C::Timeline_LerpMountSocket__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__FinishedFunc");

	ASinomacrops_Character_BP_C_Timeline_LerpMountSocket__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__UpdateFunc
// ()

void ASinomacrops_Character_BP_C::Timeline_LerpMountSocket__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__UpdateFunc");

	ASinomacrops_Character_BP_C_Timeline_LerpMountSocket__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__FinishedFunc
// ()

void ASinomacrops_Character_BP_C::Timeline_ScreamEyeWing__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__FinishedFunc");

	ASinomacrops_Character_BP_C_Timeline_ScreamEyeWing__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__UpdateFunc
// ()

void ASinomacrops_Character_BP_C::Timeline_ScreamEyeWing__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__UpdateFunc");

	ASinomacrops_Character_BP_C_Timeline_ScreamEyeWing__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveBeginPlay
// ()

void ASinomacrops_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveBeginPlay");

	ASinomacrops_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ASinomacrops_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_SpawnTamingVFX
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::Multi_SpawnTamingVFX(class AShooterCharacter* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_SpawnTamingVFX");

	ASinomacrops_Character_BP_C_Multi_SpawnTamingVFX_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PlayGliderMontage
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::Multi_PlayGliderMontage(int index, float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PlayGliderMontage");

	ASinomacrops_Character_BP_C_Multi_PlayGliderMontage_Params params;
	params.index = index;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_LerpMountSockets
// ()
// Parameters:
// int                            ToIndex                        (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::Multi_LerpMountSockets(int ToIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_LerpMountSockets");

	ASinomacrops_Character_BP_C_Multi_LerpMountSockets_Params params;
	params.ToIndex = ToIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.StopLerpMountSockets
// ()

void ASinomacrops_Character_BP_C::StopLerpMountSockets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.StopLerpMountSockets");

	ASinomacrops_Character_BP_C_StopLerpMountSockets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamUpdateEyeWing
// ()

void ASinomacrops_Character_BP_C::ScreamUpdateEyeWing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamUpdateEyeWing");

	ASinomacrops_Character_BP_C_ScreamUpdateEyeWing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_ThrowToBuddy
// ()
// Parameters:
// struct UObject_FTransform      Rot                            (Parm, IsPlainOldData)

void ASinomacrops_Character_BP_C::Multi_ThrowToBuddy(const struct UObject_FTransform& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_ThrowToBuddy");

	ASinomacrops_Character_BP_C_Multi_ThrowToBuddy_Params params;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PostImmobilizeRemount
// ()

void ASinomacrops_Character_BP_C::Multi_PostImmobilizeRemount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PostImmobilizeRemount");

	ASinomacrops_Character_BP_C_Multi_PostImmobilizeRemount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ExecuteUbergraph_Sinomacrops_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_Character_BP_C::ExecuteUbergraph_Sinomacrops_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ExecuteUbergraph_Sinomacrops_Character_BP");

	ASinomacrops_Character_BP_C_ExecuteUbergraph_Sinomacrops_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
