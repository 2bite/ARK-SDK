// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Amargasaurus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNearbyTamingPCs
// ()

void AAmargasaurus_Character_BP_C::RefreshNearbyTamingPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNearbyTamingPCs");

	AAmargasaurus_Character_BP_C_RefreshNearbyTamingPCs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterBubbleVFX
// ()
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::SpawnWaterBubbleVFX(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterBubbleVFX");

	AAmargasaurus_Character_BP_C_SpawnWaterBubbleVFX_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateWaterTrailVFX
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Public, NetServer, NetClient, BlueprintEvent)

void AAmargasaurus_Character_BP_C::STATIC_UpdateWaterTrailVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateWaterTrailVFX");

	AAmargasaurus_Character_BP_C_UpdateWaterTrailVFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterEntryVFX
// (NetRequest, NetResponse, NetMulticast, Public, NetServer, NetClient, BlueprintEvent)

void AAmargasaurus_Character_BP_C::SpawnWaterEntryVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterEntryVFX");

	AAmargasaurus_Character_BP_C_SpawnWaterEntryVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateRiddenBuff
// ()
// Parameters:
// class AShooterCharacter*       Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClear                        (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::UpdateRiddenBuff(class AShooterCharacter* Rider, bool IsClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateRiddenBuff");

	AAmargasaurus_Character_BP_C_UpdateRiddenBuff_Params params;
	params.Rider = Rider;
	params.IsClear = IsClear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifySetRider");

	AAmargasaurus_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.K2_OnMovementModeChanged");

	AAmargasaurus_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ToggleLockedAim
// ()

void AAmargasaurus_Character_BP_C::ToggleLockedAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ToggleLockedAim");

	AAmargasaurus_Character_BP_C_ToggleLockedAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SendTamingHUDMessage
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::SendTamingHUDMessage(int index, int ColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SendTamingHUDMessage");

	AAmargasaurus_Character_BP_C_SendTamingHUDMessage_Params params;
	params.index = index;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CharacterNonAggroBuffCheck
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasNonAggroBuff                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::CharacterNonAggroBuffCheck(class AShooterCharacter* ShooterChar, bool* HasNonAggroBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CharacterNonAggroBuffCheck");

	AAmargasaurus_Character_BP_C_CharacterNonAggroBuffCheck_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasNonAggroBuff != nullptr)
		*HasNonAggroBuff = params.HasNonAggroBuff;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ApplyTempDebuffToHitActors
// ()

void AAmargasaurus_Character_BP_C::ApplyTempDebuffToHitActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ApplyTempDebuffToHitActors");

	AAmargasaurus_Character_BP_C_ApplyTempDebuffToHitActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAdjustOutputDamage
// (Native, Public, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAmargasaurus_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAdjustOutputDamage");

	AAmargasaurus_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalPossessedBy
// ()
// Parameters:
// class APlayerController**      ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPLocalPossessedBy(class APlayerController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalPossessedBy");

	AAmargasaurus_Character_BP_C_BPLocalPossessedBy_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalUnpossessed
// ()

void AAmargasaurus_Character_BP_C::BPLocalUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalUnpossessed");

	AAmargasaurus_Character_BP_C_BPLocalUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNonRiderPossessedCrosshair
// ()

void AAmargasaurus_Character_BP_C::RefreshNonRiderPossessedCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNonRiderPossessedCrosshair");

	AAmargasaurus_Character_BP_C_RefreshNonRiderPossessedCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeTypeToggleVFX
// ()
// Parameters:
// int                            SpikeTypeIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::SpawnSpikeTypeToggleVFX(int SpikeTypeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeTypeToggleVFX");

	AAmargasaurus_Character_BP_C_SpawnSpikeTypeToggleVFX_Params params;
	params.SpikeTypeIndex = SpikeTypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeColor
// ()

void AAmargasaurus_Character_BP_C::UpdateSpikeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeColor");

	AAmargasaurus_Character_BP_C_UpdateSpikeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_CurrentSpikeType
// ()

void AAmargasaurus_Character_BP_C::OnRep_CurrentSpikeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_CurrentSpikeType");

	AAmargasaurus_Character_BP_C_OnRep_CurrentSpikeType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeMuzzleVFX
// ()
// Parameters:
// int                            SpikeBoneIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SpikeTypeIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::SpawnSpikeMuzzleVFX(int SpikeBoneIndex, int SpikeTypeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeMuzzleVFX");

	AAmargasaurus_Character_BP_C_SpawnSpikeMuzzleVFX_Params params;
	params.SpikeBoneIndex = SpikeBoneIndex;
	params.SpikeTypeIndex = SpikeTypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPModifyDesiredRotation");

	AAmargasaurus_Character_BP_C_BPModifyDesiredRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_ActiveSpikes
// ()

void AAmargasaurus_Character_BP_C::OnRep_ActiveSpikes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_ActiveSpikes");

	AAmargasaurus_Character_BP_C_OnRep_ActiveSpikes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerNonDedicated
// ()

void AAmargasaurus_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerNonDedicated");

	AAmargasaurus_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeToRegen
// ()
// Parameters:
// int                            NextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::GetNextSpikeToRegen(int* NextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeToRegen");

	AAmargasaurus_Character_BP_C_GetNextSpikeToRegen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextIndex != nullptr)
		*NextIndex = params.NextIndex;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDoAttack");

	AAmargasaurus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideCameraViewTarget
// ()
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideCameraViewTarget");

	AAmargasaurus_Character_BP_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetCrosshairColor
// (NetReliable, NetRequest, Native, Static, Public, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor AAmargasaurus_Character_BP_C::STATIC_BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetCrosshairColor");

	AAmargasaurus_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bIsAimTargeting
// ()

void AAmargasaurus_Character_BP_C::OnRep_bIsAimTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bIsAimTargeting");

	AAmargasaurus_Character_BP_C_OnRep_bIsAimTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateTamingParticleEmitting
// ()
// Parameters:
// bool                           Emit                           (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::UpdateTamingParticleEmitting(bool Emit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateTamingParticleEmitting");

	AAmargasaurus_Character_BP_C_UpdateTamingParticleEmitting_Params params;
	params.Emit = Emit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPShouldForceFlee");

	AAmargasaurus_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintDrawFloatingHUD
// (Exec, Native, Event, MulticastDelegate, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintDrawFloatingHUD");

	AAmargasaurus_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.AllowWakingTame
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::AllowWakingTame(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.AllowWakingTame");

	AAmargasaurus_Character_BP_C_AllowWakingTame_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPFedWakingTameEvent
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPFedWakingTameEvent(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPFedWakingTameEvent");

	AAmargasaurus_Character_BP_C_BPFedWakingTameEvent_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bTamingWantsFed
// ()

void AAmargasaurus_Character_BP_C::OnRep_bTamingWantsFed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bTamingWantsFed");

	AAmargasaurus_Character_BP_C_OnRep_bTamingWantsFed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPServerHandleNetExecCommand");

	AAmargasaurus_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetTamingPC
// ()
// Parameters:
// class AShooterPlayerController* PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set                            (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::SetTamingPC(class AShooterPlayerController* PC, bool Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetTamingPC");

	AAmargasaurus_Character_BP_C_SetTamingPC_Params params;
	params.PC = PC;
	params.Set = Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.TamingTakeDamage
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::TamingTakeDamage(float Damage, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.TamingTakeDamage");

	AAmargasaurus_Character_BP_C_TamingTakeDamage_Params params;
	params.Damage = Damage;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerServer
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, BlueprintEvent)

void AAmargasaurus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerServer");

	AAmargasaurus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetWildFollowTargetFromTamingPC
// ()
// Parameters:
// bool                           Set                            (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::SetWildFollowTargetFromTamingPC(bool Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetWildFollowTargetFromTamingPC");

	AAmargasaurus_Character_BP_C_SetWildFollowTargetFromTamingPC_Params params;
	params.Set = Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ConvertDamageToAffinity
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::ConvertDamageToAffinity(float Damage, class UDamageType* DamageType, class AActor* DamageActor, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ConvertDamageToAffinity");

	AAmargasaurus_Character_BP_C_ConvertDamageToAffinity_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageActor = DamageActor;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AAmargasaurus_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");

	AAmargasaurus_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeType
// ()
// Parameters:
// int                            FromIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NextSpikeIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::GetNextSpikeType(int FromIndex, int* NextSpikeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeType");

	AAmargasaurus_Character_BP_C_GetNextSpikeType_Params params;
	params.FromIndex = FromIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSpikeIndex != nullptr)
		*NextSpikeIndex = params.NextSpikeIndex;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideFloatingHUDLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAmargasaurus_Character_BP_C::BPOverrideFloatingHUDLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideFloatingHUDLocation");

	AAmargasaurus_Character_BP_C_BPOverrideFloatingHUDLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideHurtAnim
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

class UAnimMontage* AAmargasaurus_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideHurtAnim");

	AAmargasaurus_Character_BP_C_BPOverrideHurtAnim_Params params;
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


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnJumpPressed
// ()

void AAmargasaurus_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnJumpPressed");

	AAmargasaurus_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAmargasaurus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AAmargasaurus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpikeStaminaCheck
// (NetRequest, Exec, Event, Static, Public, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// bool                           NotifyRiderOfFail              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::STATIC_SpikeStaminaCheck(bool NotifyRiderOfFail, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpikeStaminaCheck");

	AAmargasaurus_Character_BP_C_SpikeStaminaCheck_Params params;
	params.NotifyRiderOfFail = NotifyRiderOfFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDinoARKDownloadedBegin
// ()

void AAmargasaurus_Character_BP_C::BPDinoARKDownloadedBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDinoARKDownloadedBegin");

	AAmargasaurus_Character_BP_C_BPDinoARKDownloadedBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanRiderAttack");

	AAmargasaurus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPSetupTamed");

	AAmargasaurus_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RemoveSpike
// ()

void AAmargasaurus_Character_BP_C::RemoveSpike()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RemoveSpike");

	AAmargasaurus_Character_BP_C_RemoveSpike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTryMultiUse");

	AAmargasaurus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Event, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AAmargasaurus_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetMultiUseEntries");

	AAmargasaurus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RidingTick
// (Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::STATIC_RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RidingTick");

	AAmargasaurus_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetAimedSpikeTargetLoc
// (Public, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::GetAimedSpikeTargetLoc(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetAimedSpikeTargetLoc");

	AAmargasaurus_Character_BP_C_GetAimedSpikeTargetLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTriggerStasisEvent
// ()

void AAmargasaurus_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTriggerStasisEvent");

	AAmargasaurus_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeIndex
// ()
// Parameters:
// int                            NextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::GetNextSpikeIndex(int* NextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeIndex");

	AAmargasaurus_Character_BP_C_GetNextSpikeIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextIndex != nullptr)
		*NextIndex = params.NextIndex;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnUncryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BP_OnUncryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnUncryo");

	AAmargasaurus_Character_BP_C_BP_OnUncryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UnstasisRegenSpikes
// ()

void AAmargasaurus_Character_BP_C::UnstasisRegenSpikes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UnstasisRegenSpikes");

	AAmargasaurus_Character_BP_C_UnstasisRegenSpikes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPUnstasis
// ()

void AAmargasaurus_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPUnstasis");

	AAmargasaurus_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNumActiveSpikes
// ()
// Parameters:
// int                            NumSpikes                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::GetNumActiveSpikes(int* NumSpikes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNumActiveSpikes");

	AAmargasaurus_Character_BP_C_GetNumActiveSpikes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumSpikes != nullptr)
		*NumSpikes = params.NumSpikes;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupSpikes
// ()

void AAmargasaurus_Character_BP_C::SetupSpikes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupSpikes");

	AAmargasaurus_Character_BP_C_SetupSpikes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshSpikeVisuals
// (NetResponse, Static, Public, Private, NetServer, NetClient, BlueprintEvent)

void AAmargasaurus_Character_BP_C::STATIC_RefreshSpikeVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshSpikeVisuals");

	AAmargasaurus_Character_BP_C_RefreshSpikeVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CanShootSpike
// ()
// Parameters:
// bool                           CanShoot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::CanShootSpike(bool* CanShoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CanShootSpike");

	AAmargasaurus_Character_BP_C_CanShootSpike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanShoot != nullptr)
		*CanShoot = params.CanShoot;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RegenSpike
// ()

void AAmargasaurus_Character_BP_C::RegenSpike()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RegenSpike");

	AAmargasaurus_Character_BP_C_RegenSpike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetHUDElements
// (NetRequest, Exec, Event, NetMulticast, Public, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AAmargasaurus_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetHUDElements");

	AAmargasaurus_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanAttack");

	AAmargasaurus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifyClearRider");

	AAmargasaurus_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleOnStopTargeting");

	AAmargasaurus_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleControllerInitiatedAttack
// (Native, Event, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmargasaurus_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleControllerInitiatedAttack");

	AAmargasaurus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UserConstructionScript
// ()

void AAmargasaurus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UserConstructionScript");

	AAmargasaurus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__FinishedFunc
// ()

void AAmargasaurus_Character_BP_C::Timeline_SpikeEmissive__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__FinishedFunc");

	AAmargasaurus_Character_BP_C_Timeline_SpikeEmissive__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__UpdateFunc
// ()

void AAmargasaurus_Character_BP_C::Timeline_SpikeEmissive__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__UpdateFunc");

	AAmargasaurus_Character_BP_C_Timeline_SpikeEmissive__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_ShootSpike
// ()
// Parameters:
// struct FVector                 TargetLoc                      (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::Server_ShootSpike(const struct FVector& TargetLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_ShootSpike");

	AAmargasaurus_Character_BP_C_Server_ShootSpike_Params params;
	params.TargetLoc = TargetLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_LockRotRate
// ()
// Parameters:
// bool                           Lock                           (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::Multi_LockRotRate(bool Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_LockRotRate");

	AAmargasaurus_Character_BP_C_Multi_LockRotRate_Params params;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_LockRotRate
// ()
// Parameters:
// bool                           Lock                           (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::Server_LockRotRate(bool Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_LockRotRate");

	AAmargasaurus_Character_BP_C_Server_LockRotRate_Params params;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveBeginPlay
// ()

void AAmargasaurus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveBeginPlay");

	AAmargasaurus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_End
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPAnimNotifyCustomState_End(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_End");

	AAmargasaurus_Character_BP_C_BPAnimNotifyCustomState_End_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SpawnSpikeVFX
// ()
// Parameters:
// int                            SpikeBoneIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SpikeTypeIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::Multi_SpawnSpikeVFX(int SpikeBoneIndex, int SpikeTypeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SpawnSpikeVFX");

	AAmargasaurus_Character_BP_C_Multi_SpawnSpikeVFX_Params params;
	params.SpikeBoneIndex = SpikeBoneIndex;
	params.SpikeTypeIndex = SpikeTypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupTamingPCDamBind
// ()
// Parameters:
// bool                           Bind                           (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::SetupTamingPCDamBind(bool Bind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupTamingPCDamBind");

	AAmargasaurus_Character_BP_C_SetupTamingPCDamBind_Params params;
	params.Bind = Bind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnInstigatedAnyDamage_Event
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::OnInstigatedAnyDamage_Event(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnInstigatedAnyDamage_Event");

	AAmargasaurus_Character_BP_C_OnInstigatedAnyDamage_Event_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamagedActor = DamagedActor;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveAnyDamage");

	AAmargasaurus_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SetTamingParticleEmitting
// ()

void AAmargasaurus_Character_BP_C::Multi_SetTamingParticleEmitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SetTamingParticleEmitting");

	AAmargasaurus_Character_BP_C_Multi_SetTamingParticleEmitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveTick");

	AAmargasaurus_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_SetIsTargeting
// ()
// Parameters:
// bool                           IsTargeting                    (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::Server_SetIsTargeting(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_SetIsTargeting");

	AAmargasaurus_Character_BP_C_Server_SetIsTargeting_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_Begin
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_Begin");

	AAmargasaurus_Character_BP_C_BPAnimNotifyCustomState_Begin_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AAmargasaurus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_UpdateSpikeAimMats
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interp                         (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::Multi_UpdateSpikeAimMats(bool Enable, bool Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_UpdateSpikeAimMats");

	AAmargasaurus_Character_BP_C_Multi_UpdateSpikeAimMats_Params params;
	params.Enable = Enable;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeAimMats
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interp                         (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::UpdateSpikeAimMats(bool Enable, bool Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeAimMats");

	AAmargasaurus_Character_BP_C_UpdateSpikeAimMats_Params params;
	params.Enable = Enable;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ExecuteUbergraph_Amargasaurus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_Character_BP_C::ExecuteUbergraph_Amargasaurus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ExecuteUbergraph_Amargasaurus_Character_BP");

	AAmargasaurus_Character_BP_C_ExecuteUbergraph_Amargasaurus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
