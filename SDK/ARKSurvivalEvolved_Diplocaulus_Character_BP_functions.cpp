// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplocaulus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.RidingTick");

	ADiplocaulus_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPNotifyClearRider");

	ADiplocaulus_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPNotifySetRider");

	ADiplocaulus_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.TryToGiveOxygen
// ()
// Parameters:
// bool                           IsAutoFill                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* GiveTo                         (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::TryToGiveOxygen(bool IsAutoFill, class AShooterPlayerController* GiveTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.TryToGiveOxygen");

	ADiplocaulus_Character_BP_C_TryToGiveOxygen_Params params;
	params.IsAutoFill = IsAutoFill;
	params.GiveTo = GiveTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiplocaulus_Character_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BlueprintOverrideWantsToRun");

	ADiplocaulus_Character_BP_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ReceiveAnyDamage");

	ADiplocaulus_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPOnMovementModeChangedNotify");

	ADiplocaulus_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ChangeLandSwimState
// (Event, Static, NetMulticast, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::STATIC_ChangeLandSwimState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ChangeLandSwimState");

	ADiplocaulus_Character_BP_C_ChangeLandSwimState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiplocaulus_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPPreventRiding");

	ADiplocaulus_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADiplocaulus_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPGetMultiUseEntries");

	ADiplocaulus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiplocaulus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPTryMultiUse");

	ADiplocaulus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BlueprintDrawFloatingHUD");

	ADiplocaulus_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.UserConstructionScript
// ()

void ADiplocaulus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.UserConstructionScript");

	ADiplocaulus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ReceiveBeginPlay
// ()

void ADiplocaulus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ReceiveBeginPlay");

	ADiplocaulus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.MultSpawnTakeBreathFX
// ()

void ADiplocaulus_Character_BP_C::MultSpawnTakeBreathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.MultSpawnTakeBreathFX");

	ADiplocaulus_Character_BP_C_MultSpawnTakeBreathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ExecuteUbergraph_Diplocaulus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_C::ExecuteUbergraph_Diplocaulus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ExecuteUbergraph_Diplocaulus_Character_BP");

	ADiplocaulus_Character_BP_C_ExecuteUbergraph_Diplocaulus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
