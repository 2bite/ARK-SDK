// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Netted_Material_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Netted_Material.Buff_Netted_Material_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.DrawBuffFloatingHUD");

	ABuff_Netted_Material_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.CanCutNet
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanCut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::CanCutNet(class AShooterCharacter* ShooterChar, bool* bCanCut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.CanCutNet");

	ABuff_Netted_Material_C_CanCutNet_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanCut != nullptr)
		*bCanCut = params.bCanCut;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPOverrideTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Netted_Material_C::BPOverrideTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPOverrideTargetingDesire");

	ABuff_Netted_Material_C_BPOverrideTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreventInstigatorMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Netted_Material_C::BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreventInstigatorMovementMode");

	ABuff_Netted_Material_C_BPPreventInstigatorMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreSetupForInstigator");

	ABuff_Netted_Material_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreventTekArmorBuffs
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABuff_Netted_Material_C::BPPreventTekArmorBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreventTekArmorBuffs");

	ABuff_Netted_Material_C_BPPreventTekArmorBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.PlayPinnedAnim
// ()

void ABuff_Netted_Material_C::PlayPinnedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.PlayPinnedAnim");

	ABuff_Netted_Material_C_PlayPinnedAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStopAltFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BPHandleOnStopAltFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStopAltFire");

	ABuff_Netted_Material_C_BPHandleOnStopAltFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStartAltFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BPHandleOnStartAltFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStartAltFire");

	ABuff_Netted_Material_C_BPHandleOnStartAltFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BuffTickServer");

	ABuff_Netted_Material_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPAdjustDamage_Ex
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpulseDir                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InDamageCauser                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Netted_Material_C::BPAdjustDamage_Ex(float* Damage, class AController** EventInstigator, class AActor** InDamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo, struct FVector* ImpulseDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPAdjustDamage_Ex");

	ABuff_Netted_Material_C_BPAdjustDamage_Ex_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.InDamageCauser = InDamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
	if (ImpulseDir != nullptr)
		*ImpulseDir = params.ImpulseDir;

	return params.ReturnValue;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPGetHUDElements
// (NetRequest, Native, Event, NetResponse, NetMulticast, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_Netted_Material_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPGetHUDElements");

	ABuff_Netted_Material_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BuffTickClient");

	ABuff_Netted_Material_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.TryCuttingRope
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABuff_Netted_Material_C::STATIC_TryCuttingRope()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.TryCuttingRope");

	ABuff_Netted_Material_C_TryCuttingRope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStopFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BPHandleOnStopFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStopFire");

	ABuff_Netted_Material_C_BPHandleOnStopFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStartFire");

	ABuff_Netted_Material_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Netted_Material_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPServerHandleNetExecCommand");

	ABuff_Netted_Material_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.ReduceNetHealth
// ()

void ABuff_Netted_Material_C::ReduceNetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.ReduceNetHealth");

	ABuff_Netted_Material_C_ReduceNetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.ReceiveDestroyed
// ()

void ABuff_Netted_Material_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.ReceiveDestroyed");

	ABuff_Netted_Material_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.FadeOutNet
// ()

void ABuff_Netted_Material_C::FadeOutNet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.FadeOutNet");

	ABuff_Netted_Material_C_FadeOutNet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPSetupForInstigator
// (NetReliable, NetRequest, Event, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPSetupForInstigator");

	ABuff_Netted_Material_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.OnRep_bSleepingEnabled
// ()

void ABuff_Netted_Material_C::OnRep_bSleepingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.OnRep_bSleepingEnabled");

	ABuff_Netted_Material_C_OnRep_bSleepingEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.BPDeactivated");

	ABuff_Netted_Material_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.UserConstructionScript
// ()

void ABuff_Netted_Material_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.UserConstructionScript");

	ABuff_Netted_Material_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Netted_Material.Buff_Netted_Material_C.ExecuteUbergraph_Buff_Netted_Material
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Netted_Material_C::ExecuteUbergraph_Buff_Netted_Material(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Netted_Material.Buff_Netted_Material_C.ExecuteUbergraph_Buff_Netted_Material");

	ABuff_Netted_Material_C_ExecuteUbergraph_Buff_Netted_Material_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
