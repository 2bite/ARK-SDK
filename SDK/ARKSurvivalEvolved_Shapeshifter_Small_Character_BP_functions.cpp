// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Small_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideMutationLabels
// (Net, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          male                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShapeshifter_Small_Character_BP_C::STATIC_BPOverrideMutationLabels(bool* male)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideMutationLabels");

	AShapeshifter_Small_Character_BP_C_BPOverrideMutationLabels_Params params;
	params.male = male;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPNotifyLevelUp");

	AShapeshifter_Small_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetBiglyStats
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void AShapeshifter_Small_Character_BP_C::GetBiglyStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetBiglyStats");

	AShapeshifter_Small_Character_BP_C_GetBiglyStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetStatusNameString
// (Native, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShapeshifter_Small_Character_BP_C::STATIC_BPGetStatusNameString(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetStatusNameString");

	AShapeshifter_Small_Character_BP_C_BPGetStatusNameString_Params params;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateBiglyStatsCache
// ()
// Parameters:
// class APrimalCharacter*        Bigly                          (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::UpdateBiglyStatsCache(class APrimalCharacter* Bigly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateBiglyStatsCache");

	AShapeshifter_Small_Character_BP_C_UpdateBiglyStatsCache_Params params;
	params.Bigly = Bigly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPBecameNewBaby
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalDinoCharacter**   Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::STATIC_BPBecameNewBaby(class APrimalDinoCharacter** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPBecameNewBaby");

	AShapeshifter_Small_Character_BP_C_BPBecameNewBaby_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DoMate
// (Net, NetRequest, NetResponse, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalDinoCharacter**   WithMate                       (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::STATIC_DoMate(class APrimalDinoCharacter** WithMate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DoMate");

	AShapeshifter_Small_Character_BP_C_DoMate_Params params;
	params.WithMate = WithMate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnDinoCheat");

	AShapeshifter_Small_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_bAllowMating
// ()

void AShapeshifter_Small_Character_BP_C::OnRep_bAllowMating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_bAllowMating");

	AShapeshifter_Small_Character_BP_C_OnRep_bAllowMating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanCryo");

	AShapeshifter_Small_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateAllowMating
// ()

void AShapeshifter_Small_Character_BP_C::UpdateAllowMating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateAllowMating");

	AShapeshifter_Small_Character_BP_C_UpdateAllowMating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintDrawFloatingHUD");

	AShapeshifter_Small_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BP_OnSetDeath
// ()

void AShapeshifter_Small_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BP_OnSetDeath");

	AShapeshifter_Small_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Spawn Bigly Fn
// (NetReliable, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void AShapeshifter_Small_Character_BP_C::STATIC_Spawn_Bigly_Fn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Spawn Bigly Fn");

	AShapeshifter_Small_Character_BP_C_Spawn_Bigly_Fn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerNonDedicated
// ()

void AShapeshifter_Small_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerNonDedicated");

	AShapeshifter_Small_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Throttled TickFn
// ()

void AShapeshifter_Small_Character_BP_C::Throttled_TickFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Throttled TickFn");

	AShapeshifter_Small_Character_BP_C_Throttled_TickFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check Wild Should Random TransformFn
// ()

void AShapeshifter_Small_Character_BP_C::Check_Wild_Should_Random_TransformFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check Wild Should Random TransformFn");

	AShapeshifter_Small_Character_BP_C_Check_Wild_Should_Random_TransformFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.StartTransform
// ()
// Parameters:
// bool                           SpawnBigly                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           QueueRoar                      (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::StartTransform(bool SpawnBigly, bool QueueRoar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.StartTransform");

	AShapeshifter_Small_Character_BP_C_StartTransform_Params params;
	params.SpawnBigly = SpawnBigly;
	params.QueueRoar = QueueRoar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.IsTransforming
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::IsTransforming(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.IsTransforming");

	AShapeshifter_Small_Character_BP_C_IsTransforming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanMountOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPCanMountOnCharacter(class APrimalCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanMountOnCharacter");

	AShapeshifter_Small_Character_BP_C_BPCanMountOnCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetMultiUseEntries
// (Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AShapeshifter_Small_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetMultiUseEntries");

	AShapeshifter_Small_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AllowPlayMontage");

	AShapeshifter_Small_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideTamingDescriptionLabel
// (Net, NetReliable, NetRequest, Native, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FSlateColor             TextColor                      (Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShapeshifter_Small_Character_BP_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideTamingDescriptionLabel");

	AShapeshifter_Small_Character_BP_C_BPOverrideTamingDescriptionLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextColor != nullptr)
		*TextColor = params.TextColor;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDisplayTamedMessage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPDisplayTamedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDisplayTamedMessage");

	AShapeshifter_Small_Character_BP_C_BPDisplayTamedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintTamedTick
// ()

void AShapeshifter_Small_Character_BP_C::BlueprintTamedTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintTamedTick");

	AShapeshifter_Small_Character_BP_C_BlueprintTamedTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_InitialReplicationComplete
// ()

void AShapeshifter_Small_Character_BP_C::OnRep_InitialReplicationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_InitialReplicationComplete");

	AShapeshifter_Small_Character_BP_C_OnRep_InitialReplicationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AShapeshifter_Small_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnLanded");

	AShapeshifter_Small_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DinoShoulderMountedLaunch
// ()
// Parameters:
// struct FVector*                launchDir                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      throwingCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::DinoShoulderMountedLaunch(struct FVector* launchDir, class AShooterCharacter** throwingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DinoShoulderMountedLaunch");

	AShapeshifter_Small_Character_BP_C_DinoShoulderMountedLaunch_Params params;
	params.launchDir = launchDir;
	params.throwingCharacter = throwingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPModifyAimOffsetNoTarget
// ()
// Parameters:
// struct FRotator                Aim                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AShapeshifter_Small_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPModifyAimOffsetNoTarget");

	AShapeshifter_Small_Character_BP_C_BPModifyAimOffsetNoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Aim != nullptr)
		*Aim = params.Aim;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPHandlePoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPHandlePoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPHandlePoop");

	AShapeshifter_Small_Character_BP_C_BPHandlePoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintCanAttack");

	AShapeshifter_Small_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CalculateTransformationCountRequiredForTame
// ()
// Parameters:
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::CalculateTransformationCountRequiredForTame(int Level, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CalculateTransformationCountRequiredForTame");

	AShapeshifter_Small_Character_BP_C_CalculateTransformationCountRequiredForTame_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UnTransform
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TransformationCount            (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    Bigly                          (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* TamingController               (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::STATIC_UnTransform(int TransformationCount, class APrimalDinoCharacter* Bigly, class AShooterPlayerController* TamingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UnTransform");

	AShapeshifter_Small_Character_BP_C_UnTransform_Params params;
	params.TransformationCount = TransformationCount;
	params.Bigly = Bigly;
	params.TamingController = TamingController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Calculate Current Element Count Required for Transform
// ()
// Parameters:
// int                            cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::Calculate_Current_Element_Count_Required_for_Transform(int* cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Calculate Current Element Count Required for Transform");

	AShapeshifter_Small_Character_BP_C_Calculate_Current_Element_Count_Required_for_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cost != nullptr)
		*cost = params.cost;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
// (Net, Event, NetResponse, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           overrideTorpidityProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPDinoTooltipCustomTorpidityProgressBar(bool* overrideTorpidityProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar");

	AShapeshifter_Small_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTorpidityProgressBarIfActive != nullptr)
		*overrideTorpidityProgressBarIfActive = params.overrideTorpidityProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
// (Native, Event, NetResponse, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           overrideTamingProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");

	AShapeshifter_Small_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTamingProgressBarIfActive != nullptr)
		*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.K2_OnMovementModeChanged");

	AShapeshifter_Small_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryThrowPoop
// ()

void AShapeshifter_Small_Character_BP_C::TryThrowPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryThrowPoop");

	AShapeshifter_Small_Character_BP_C_TryThrowPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShapeshifter_Small_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPAdjustDamage");

	AShapeshifter_Small_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnTamedProcessOrder");

	AShapeshifter_Small_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Try Digging
// ()

void AShapeshifter_Small_Character_BP_C::Try_Digging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Try Digging");

	AShapeshifter_Small_Character_BP_C_Try_Digging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.FindTargetWithElementEquipped
// ()
// Parameters:
// class APrimalCharacter*        Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::FindTargetWithElementEquipped(class APrimalCharacter** Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.FindTargetWithElementEquipped");

	AShapeshifter_Small_Character_BP_C_FindTargetWithElementEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPShouldForceFlee");

	AShapeshifter_Small_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPPreventOrderAllowed
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPPreventOrderAllowed(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPPreventOrderAllowed");

	AShapeshifter_Small_Character_BP_C_BPPreventOrderAllowed_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetAddictionAmount
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::SetAddictionAmount(float amount, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetAddictionAmount");

	AShapeshifter_Small_Character_BP_C_SetAddictionAmount_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetAddictedAmount
// ()
// Parameters:
// float                          Addiction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::GetAddictedAmount(float* Addiction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetAddictedAmount");

	AShapeshifter_Small_Character_BP_C_GetAddictedAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Addiction != nullptr)
		*Addiction = params.Addiction;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetTarget
// ()
// Parameters:
// class AActor*                  Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::GetTarget(class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetTarget");

	AShapeshifter_Small_Character_BP_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TargetHasElement
// (Net, NetReliable, Exec, NetResponse, Static, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::STATIC_TargetHasElement(class AShooterCharacter* Target, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TargetHasElement");

	AShapeshifter_Small_Character_BP_C_TargetHasElement_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DisableBegging
// ()

void AShapeshifter_Small_Character_BP_C::DisableBegging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DisableBegging");

	AShapeshifter_Small_Character_BP_C_DisableBegging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetTarget
// (Net, Exec, Native, NetResponse, Static, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::STATIC_SetTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetTarget");

	AShapeshifter_Small_Character_BP_C_SetTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.No Controller RequestMountTransform to Bigly
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void AShapeshifter_Small_Character_BP_C::STATIC_No_Controller_RequestMountTransform_to_Bigly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.No Controller RequestMountTransform to Bigly");

	AShapeshifter_Small_Character_BP_C_No_Controller_RequestMountTransform_to_Bigly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPIsBasedOnActor
// ()
// Parameters:
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::BPIsBasedOnActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPIsBasedOnActor");

	AShapeshifter_Small_Character_BP_C_BPIsBasedOnActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerServer
// ()

void AShapeshifter_Small_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerServer");

	AShapeshifter_Small_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check for ElementFn
// ()

void AShapeshifter_Small_Character_BP_C::Check_for_ElementFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check for ElementFn");

	AShapeshifter_Small_Character_BP_C_Check_for_ElementFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnUpdateUberpounce
// ()

void AShapeshifter_Small_Character_BP_C::OnUpdateUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnUpdateUberpounce");

	AShapeshifter_Small_Character_BP_C_OnUpdateUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryPounce
// ()

void AShapeshifter_Small_Character_BP_C::TryPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryPounce");

	AShapeshifter_Small_Character_BP_C_TryPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnClearMountedDino
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void AShapeshifter_Small_Character_BP_C::STATIC_BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnClearMountedDino");

	AShapeshifter_Small_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnSetMountedDino
// ()

void AShapeshifter_Small_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnSetMountedDino");

	AShapeshifter_Small_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Transform
// ()
// Parameters:
// class UAnimMontage*            TransformAnim                  (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::Transform(class UAnimMontage* TransformAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Transform");

	AShapeshifter_Small_Character_BP_C_Transform_Params params;
	params.TransformAnim = TransformAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBegFn
// ()

void AShapeshifter_Small_Character_BP_C::TryBegFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBegFn");

	AShapeshifter_Small_Character_BP_C_TryBegFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveTick
// (Net, NetReliable, NetRequest, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveTick");

	AShapeshifter_Small_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveBeginPlay
// ()

void AShapeshifter_Small_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveBeginPlay");

	AShapeshifter_Small_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPServerHandleNetExecCommand
// (NetReliable, NetResponse, Static, MulticastDelegate, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Small_Character_BP_C::STATIC_BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPServerHandleNetExecCommand");

	AShapeshifter_Small_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.IsPlayerNearby
// ()
// Parameters:
// bool                           bNearby                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::IsPlayerNearby(bool* bNearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.IsPlayerNearby");

	AShapeshifter_Small_Character_BP_C_IsPlayerNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNearby != nullptr)
		*bNearby = params.bNearby;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UserConstructionScript
// ()

void AShapeshifter_Small_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UserConstructionScript");

	AShapeshifter_Small_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_AteElement
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_AteElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_AteElement");

	AShapeshifter_Small_Character_BP_C_AnimNotify_AteElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_Transform
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_Transform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_Transform");

	AShapeshifter_Small_Character_BP_C_AnimNotify_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SpawnBigly
// ()

void AShapeshifter_Small_Character_BP_C::SpawnBigly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SpawnBigly");

	AShapeshifter_Small_Character_BP_C_SpawnBigly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBeg
// ()

void AShapeshifter_Small_Character_BP_C::TryBeg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBeg");

	AShapeshifter_Small_Character_BP_C_TryBeg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnBegEnd
// ()

void AShapeshifter_Small_Character_BP_C::OnBegEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnBegEnd");

	AShapeshifter_Small_Character_BP_C_OnBegEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowTransform
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_ThrowTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowTransform");

	AShapeshifter_Small_Character_BP_C_AnimNotify_ThrowTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_EatingElement
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_EatingElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_EatingElement");

	AShapeshifter_Small_Character_BP_C_AnimNotify_EatingElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ServerRequestMountTransformToBigly
// ()

void AShapeshifter_Small_Character_BP_C::ServerRequestMountTransformToBigly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ServerRequestMountTransformToBigly");

	AShapeshifter_Small_Character_BP_C_ServerRequestMountTransformToBigly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_OnFinishedSniffing
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_OnFinishedSniffing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_OnFinishedSniffing");

	AShapeshifter_Small_Character_BP_C_AnimNotify_OnFinishedSniffing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ResetAllowFlee
// ()

void AShapeshifter_Small_Character_BP_C::ResetAllowFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ResetAllowFlee");

	AShapeshifter_Small_Character_BP_C_ResetAllowFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_DiggingComplete
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_DiggingComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_DiggingComplete");

	AShapeshifter_Small_Character_BP_C_AnimNotify_DiggingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowPoop
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_ThrowPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowPoop");

	AShapeshifter_Small_Character_BP_C_AnimNotify_ThrowPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartTransformScaling
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_StartTransformScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartTransformScaling");

	AShapeshifter_Small_Character_BP_C_AnimNotify_StartTransformScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TransformScaling
// ()

void AShapeshifter_Small_Character_BP_C::TransformScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TransformScaling");

	AShapeshifter_Small_Character_BP_C_TransformScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_InitBigly
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_InitBigly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_InitBigly");

	AShapeshifter_Small_Character_BP_C_AnimNotify_InitBigly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_UnTransform
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_UnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_UnTransform");

	AShapeshifter_Small_Character_BP_C_AnimNotify_UnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CheckWildShouldRandomTransform
// ()

void AShapeshifter_Small_Character_BP_C::CheckWildShouldRandomTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CheckWildShouldRandomTransform");

	AShapeshifter_Small_Character_BP_C_CheckWildShouldRandomTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartSniff
// ()

void AShapeshifter_Small_Character_BP_C::AnimNotify_StartSniff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartSniff");

	AShapeshifter_Small_Character_BP_C_AnimNotify_StartSniff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.LevelUpRefresh
// ()

void AShapeshifter_Small_Character_BP_C::LevelUpRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.LevelUpRefresh");

	AShapeshifter_Small_Character_BP_C_LevelUpRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ExecuteUbergraph_Shapeshifter_Small_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_Character_BP_C::ExecuteUbergraph_Shapeshifter_Small_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ExecuteUbergraph_Shapeshifter_Small_Character_BP");

	AShapeshifter_Small_Character_BP_C_ExecuteUbergraph_Shapeshifter_Small_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
