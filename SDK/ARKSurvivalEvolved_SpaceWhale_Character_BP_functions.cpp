// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhale_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASpaceWhale_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");

	ASpaceWhale_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyToggleHUD
// ()
// Parameters:
// bool*                          bHUDHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::BPNotifyToggleHUD(bool* bHUDHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyToggleHUD");

	ASpaceWhale_Character_BP_C_BPNotifyToggleHUD_Params params;
	params.bHUDHidden = bHUDHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::BPModifyDesiredRotation(struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyDesiredRotation");

	ASpaceWhale_Character_BP_C_BPModifyDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPCustomIsRelevantForClient
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::BPCustomIsRelevantForClient(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPCustomIsRelevantForClient");

	ASpaceWhale_Character_BP_C_BPCustomIsRelevantForClient_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPSetupTamed");

	ASpaceWhale_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DestroyHudWidget
// ()
// Parameters:
// bool                           DestroyNow                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::DestroyHudWidget(bool DestroyNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DestroyHudWidget");

	ASpaceWhale_Character_BP_C_DestroyHudWidget_Params params;
	params.DestroyNow = DestroyNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifySetRider");

	ASpaceWhale_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PlayTurretRotationSound
// ()
// Parameters:
// int                            InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::PlayTurretRotationSound(int InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PlayTurretRotationSound");

	ASpaceWhale_Character_BP_C_PlayTurretRotationSound_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CalculateUpshiftCameraOffset
// ()
// Parameters:
// float                          Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::CalculateUpshiftCameraOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CalculateUpshiftCameraOffset");

	ASpaceWhale_Character_BP_C_CalculateUpshiftCameraOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAdjustDamage
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetValidate)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceWhale_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAdjustDamage");

	ASpaceWhale_Character_BP_C_BPAdjustDamage_Params params;
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


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_PreventMovementMode");

	ASpaceWhale_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnSetDeath
// ()

void ASpaceWhale_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnSetDeath");

	ASpaceWhale_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombProduction
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::UpdateBombProduction(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombProduction");

	ASpaceWhale_Character_BP_C_UpdateBombProduction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CurrentTeleportCost
// ()
// Parameters:
// int                            NumCharacters                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceWhale_Character_BP_C::CurrentTeleportCost(int NumCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CurrentTeleportCost");

	ASpaceWhale_Character_BP_C_CurrentTeleportCost_Params params;
	params.NumCharacters = NumCharacters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BreakGrapples
// ()

void ASpaceWhale_Character_BP_C::BreakGrapples()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BreakGrapples");

	ASpaceWhale_Character_BP_C_BreakGrapples_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SpawnDownShiftBurst
// ()

void ASpaceWhale_Character_BP_C::SpawnDownShiftBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SpawnDownShiftBurst");

	ASpaceWhale_Character_BP_C_SpawnDownShiftBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSaddleColor
// ()
// Parameters:
// int                            theRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ASpaceWhale_Character_BP_C::GetSaddleColor(int theRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSaddleColor");

	ASpaceWhale_Character_BP_C_GetSaddleColor_Params params;
	params.theRegion = theRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTeleportingCharacters
// ()
// Parameters:
// TArray<class APrimalCharacter*> TeleportingCharacters          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASpaceWhale_Character_BP_C::UpdateTeleportingCharacters(TArray<class APrimalCharacter*>* TeleportingCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTeleportingCharacters");

	ASpaceWhale_Character_BP_C_UpdateTeleportingCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeleportingCharacters != nullptr)
		*TeleportingCharacters = params.TeleportingCharacters;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.Local Request Bomb Targeting
// ()
// Parameters:
// bool                           NewBombTargetingMode           (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::Local_Request_Bomb_Targeting(bool NewBombTargetingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.Local Request Bomb Targeting");

	ASpaceWhale_Character_BP_C_Local_Request_Bomb_Targeting_Params params;
	params.NewBombTargetingMode = NewBombTargetingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTarget
// ()

void ASpaceWhale_Character_BP_C::UpdateHyperdriveTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTarget");

	ASpaceWhale_Character_BP_C_UpdateHyperdriveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombing
// (Native, MulticastDelegate, Private, Protected, Delegate, NetServer, NetValidate)

void ASpaceWhale_Character_BP_C::UpdateBombing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombing");

	ASpaceWhale_Character_BP_C_UpdateBombing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DropBomb
// (NetRequest, Event, MulticastDelegate, Private, Protected, Delegate, NetServer, NetValidate)

void ASpaceWhale_Character_BP_C::DropBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DropBomb");

	ASpaceWhale_Character_BP_C_DropBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleOnStopFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::BPHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleOnStopFire");

	ASpaceWhale_Character_BP_C_BPHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ShouldPlayBlinkEffect
// ()
// Parameters:
// bool                           ShouldPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::ShouldPlayBlinkEffect(bool* ShouldPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ShouldPlayBlinkEffect");

	ASpaceWhale_Character_BP_C_ShouldPlayBlinkEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldPlay != nullptr)
		*ShouldPlay = params.ShouldPlay;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SetSaddleVisibility
// ()
// Parameters:
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::SetSaddleVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SetSaddleVisibility");

	ASpaceWhale_Character_BP_C_SetSaddleVisibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ResetMaterials
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, NetValidate)

void ASpaceWhale_Character_BP_C::ResetMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ResetMaterials");

	ASpaceWhale_Character_BP_C_ResetMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAnimNotifyCustomState_Begin
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Delegate, NetServer, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::STATIC_BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAnimNotifyCustomState_Begin");

	ASpaceWhale_Character_BP_C_BPAnimNotifyCustomState_Begin_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (Event, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::STATIC_BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ASpaceWhale_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceFleeTeleport
// ()

void ASpaceWhale_Character_BP_C::ForceFleeTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceFleeTeleport");

	ASpaceWhale_Character_BP_C_ForceFleeTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetDesiredRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ASpaceWhale_Character_BP_C::GetDesiredRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetDesiredRotation");

	ASpaceWhale_Character_BP_C_GetDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateSpeedEffects
// ()

void ASpaceWhale_Character_BP_C::UpdateSpeedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateSpeedEffects");

	ASpaceWhale_Character_BP_C_UpdateSpeedEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTurretRotation
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, NetValidate)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::STATIC_UpdateTurretRotation(float DeltaTime, int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTurretRotation");

	ASpaceWhale_Character_BP_C_UpdateTurretRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.IsLocalControllerTagged
// ()
// Parameters:
// TArray<class APrimalCharacter*> Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::IsLocalControllerTagged(TArray<class APrimalCharacter*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.IsLocalControllerTagged");

	ASpaceWhale_Character_BP_C_IsLocalControllerTagged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBlinkEffect
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, NetValidate)

void ASpaceWhale_Character_BP_C::UpdateBlinkEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBlinkEffect");

	ASpaceWhale_Character_BP_C_UpdateBlinkEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CompleteTeleport
// ()
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::CompleteTeleport(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CompleteTeleport");

	ASpaceWhale_Character_BP_C_CompleteTeleport_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ChargeTimeLeft
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceWhale_Character_BP_C::ChargeTimeLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ChargeTimeLeft");

	ASpaceWhale_Character_BP_C_ChargeTimeLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CheckTeleportAngle
// ()
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::CheckTeleportAngle(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CheckTeleportAngle");

	ASpaceWhale_Character_BP_C_CheckTeleportAngle_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.FireForTurretForPlayer
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FireLeft                       (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::FireForTurretForPlayer(class AShooterCharacter* Player, bool FireLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.FireForTurretForPlayer");

	ASpaceWhale_Character_BP_C_FireForTurretForPlayer_Params params;
	params.Player = Player;
	params.FireLeft = FireLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetFireTransformForPlayer
// (NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, NetValidate)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FirePosition                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FireDirection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FireLeft                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::STATIC_GetFireTransformForPlayer(class AShooterCharacter* Player, struct FVector* FirePosition, struct FVector* FireDirection, bool* FireLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetFireTransformForPlayer");

	ASpaceWhale_Character_BP_C_GetFireTransformForPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirePosition != nullptr)
		*FirePosition = params.FirePosition;
	if (FireDirection != nullptr)
		*FireDirection = params.FireDirection;
	if (FireLeft != nullptr)
		*FireLeft = params.FireLeft;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnSaddleEquipped
// ()
// Parameters:
// bool                           Equipped                       (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::OnSaddleEquipped(bool Equipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnSaddleEquipped");

	ASpaceWhale_Character_BP_C_OnSaddleEquipped_Params params;
	params.Equipped = Equipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsChargingHyperspaceJump
// ()

void ASpaceWhale_Character_BP_C::OnRep_IsChargingHyperspaceJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsChargingHyperspaceJump");

	ASpaceWhale_Character_BP_C_OnRep_IsChargingHyperspaceJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearRider");

	ASpaceWhale_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPDrawToRiderHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPDrawToRiderHUD");

	ASpaceWhale_Character_BP_C_BPDrawToRiderHUD_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdatePassengerSeatRotation
// ()
// Parameters:
// int                            PassengerIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::UpdatePassengerSeatRotation(int PassengerIndex, const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdatePassengerSeatRotation");

	ASpaceWhale_Character_BP_C_UpdatePassengerSeatRotation_Params params;
	params.PassengerIndex = PassengerIndex;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCurrentTeleportRadius
// ()
// Parameters:
// bool                           GetSmoothedDisplayValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceWhale_Character_BP_C::GetCurrentTeleportRadius(bool GetSmoothedDisplayValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCurrentTeleportRadius");

	ASpaceWhale_Character_BP_C_GetCurrentTeleportRadius_Params params;
	params.GetSmoothedDisplayValue = GetSmoothedDisplayValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ASpaceWhale_Character_BP_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPForceCameraStyle");

	ASpaceWhale_Character_BP_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.InTargetingMode
// ()
// Parameters:
// bool                           IsTargeting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::InTargetingMode(bool* IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.InTargetingMode");

	ASpaceWhale_Character_BP_C_InTargetingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTargeting != nullptr)
		*IsTargeting = params.IsTargeting;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingBomb
// ()

void ASpaceWhale_Character_BP_C::OnRep_IsTargetingBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingBomb");

	ASpaceWhale_Character_BP_C_OnRep_IsTargetingBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingHyperdrive
// ()

void ASpaceWhale_Character_BP_C::OnRep_IsTargetingHyperdrive()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingHyperdrive");

	ASpaceWhale_Character_BP_C_OnRep_IsTargetingHyperdrive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyForwardDirectionInput
// ()
// Parameters:
// struct FVector                 directionInput                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ASpaceWhale_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyForwardDirectionInput");

	ASpaceWhale_Character_BP_C_BPModifyForwardDirectionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directionInput != nullptr)
		*directionInput = params.directionInput;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPShouldLimitForwardDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::BPShouldLimitForwardDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPShouldLimitForwardDirection");

	ASpaceWhale_Character_BP_C_BPShouldLimitForwardDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideFlyingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ASpaceWhale_Character_BP_C::BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideFlyingVelocity");

	ASpaceWhale_Character_BP_C_BPOverrideFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCharactersToMassTeleport
// ()
// Parameters:
// struct FVector                 NearWorldLoc                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalCharacter*> FriendlyCharacters             (Parm, OutParm, ZeroConstructor)

void ASpaceWhale_Character_BP_C::GetCharactersToMassTeleport(const struct FVector& NearWorldLoc, TArray<class APrimalCharacter*>* FriendlyCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCharactersToMassTeleport");

	ASpaceWhale_Character_BP_C_GetCharactersToMassTeleport_Params params;
	params.NearWorldLoc = NearWorldLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendlyCharacters != nullptr)
		*FriendlyCharacters = params.FriendlyCharacters;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.AllowedToUseHyperdrive
// ()
// Parameters:
// bool                           CheckTimer                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::AllowedToUseHyperdrive(bool CheckTimer, const struct FVector& Target, bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.AllowedToUseHyperdrive");

	ASpaceWhale_Character_BP_C_AllowedToUseHyperdrive_Params params;
	params.CheckTimer = CheckTimer;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ModifyCosmicEnergy
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceNetUpdate                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::ModifyCosmicEnergy(float Delta, bool ForceNetUpdate, float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ModifyCosmicEnergy");

	ASpaceWhale_Character_BP_C_ModifyCosmicEnergy_Params params;
	params.Delta = Delta;
	params.ForceNetUpdate = ForceNetUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCosmicEnergy
// ()
// Parameters:
// bool                           GetSmoothedDisplayValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::GetCosmicEnergy(bool GetSmoothedDisplayValue, float* current, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCosmicEnergy");

	ASpaceWhale_Character_BP_C_GetCosmicEnergy_Params params;
	params.GetSmoothedDisplayValue = GetSmoothedDisplayValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (current != nullptr)
		*current = params.current;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetMaxCosmicEnergy
// ()
// Parameters:
// float                          MaxEnergy                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::GetMaxCosmicEnergy(float* MaxEnergy)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetMaxCosmicEnergy");

	ASpaceWhale_Character_BP_C_GetMaxCosmicEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxEnergy != nullptr)
		*MaxEnergy = params.MaxEnergy;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOnMassTeleportEvent
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState>* EventState                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter**       TeleportInitiatedByChar        (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::BPOnMassTeleportEvent(TEnumAsByte<EMassTeleportState>* EventState, class APrimalCharacter** TeleportInitiatedByChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOnMassTeleportEvent");

	ASpaceWhale_Character_BP_C_BPOnMassTeleportEvent_Params params;
	params.EventState = EventState;
	params.TeleportInitiatedByChar = TeleportInitiatedByChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ASpaceWhale_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPGetHUDElements");

	ASpaceWhale_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.HyperdriveTargetingTrace
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, NetValidate)
// Parameters:
// struct FVector                 TraceStartLoc                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStartDir                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WhaleStartLoc                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DebugDrawDuration              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           foundValidLocation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::STATIC_HyperdriveTargetingTrace(const struct FVector& TraceStartLoc, const struct FVector& TraceStartDir, const struct FVector& WhaleStartLoc, float DebugDrawDuration, bool* foundValidLocation, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.HyperdriveTargetingTrace");

	ASpaceWhale_Character_BP_C_HyperdriveTargetingTrace_Params params;
	params.TraceStartLoc = TraceStartLoc;
	params.TraceStartDir = TraceStartDir;
	params.WhaleStartLoc = WhaleStartLoc;
	params.DebugDrawDuration = DebugDrawDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundValidLocation != nullptr)
		*foundValidLocation = params.foundValidLocation;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTargetingMode
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::UpdateHyperdriveTargetingMode(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTargetingMode");

	ASpaceWhale_Character_BP_C_UpdateHyperdriveTargetingMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideCameraViewTarget
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, NetValidate)
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

void ASpaceWhale_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideCameraViewTarget");

	ASpaceWhale_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveTick
// (NetRequest, Event, NetResponse, Static, Delegate, NetServer, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveTick");

	ASpaceWhale_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleControllerInitiatedAttack");

	ASpaceWhale_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanRiderAttack");

	ASpaceWhale_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceWhale_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanAttack");

	ASpaceWhale_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideGetAttackAnimationIndex
// (Exec, NetResponse, Public, Protected, NetServer, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASpaceWhale_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ASpaceWhale_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearPassenger
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, Protected, NetServer, NetValidate)
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearPassenger");

	ASpaceWhale_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyAddPassenger");

	ASpaceWhale_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UserConstructionScript
// (Exec, Event, Static, Public, Protected, NetServer, NetValidate)

void ASpaceWhale_Character_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UserConstructionScript");

	ASpaceWhale_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStartHyperspaceJump
// ()
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::ServerRequestStartHyperspaceJump(const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStartHyperspaceJump");

	ASpaceWhale_Character_BP_C_ServerRequestStartHyperspaceJump_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientAckHyperspaceJump
// ()
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OrigLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::ClientAckHyperspaceJump(bool Success, const struct FVector& OrigLocation, const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientAckHyperspaceJump");

	ASpaceWhale_Character_BP_C_ClientAckHyperspaceJump_Params params;
	params.Success = Success;
	params.OrigLocation = OrigLocation;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiUpdateCurrentGear
// ()
// Parameters:
// int                            NewGear                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::MultiUpdateCurrentGear(int NewGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiUpdateCurrentGear");

	ASpaceWhale_Character_BP_C_MultiUpdateCurrentGear_Params params;
	params.NewGear = NewGear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveBeginPlay
// ()

void ASpaceWhale_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveBeginPlay");

	ASpaceWhale_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DelayedGearFixup
// ()

void ASpaceWhale_Character_BP_C::DelayedGearFixup()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DelayedGearFixup");

	ASpaceWhale_Character_BP_C_DelayedGearFixup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateCurrentGear
// ()
// Parameters:
// int                            NewGear                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::UpdateCurrentGear(int NewGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateCurrentGear");

	ASpaceWhale_Character_BP_C_UpdateCurrentGear_Params params;
	params.NewGear = NewGear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetHyperdriveTargetingMode
// ()
// Parameters:
// bool                           NewTargetingMode               (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::ServerRequestSetHyperdriveTargetingMode(bool NewTargetingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetHyperdriveTargetingMode");

	ASpaceWhale_Character_BP_C_ServerRequestSetHyperdriveTargetingMode_Params params;
	params.NewTargetingMode = NewTargetingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestDropBomb
// ()

void ASpaceWhale_Character_BP_C::ServerRequestDropBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestDropBomb");

	ASpaceWhale_Character_BP_C_ServerRequestDropBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetBombTargetingMode
// ()
// Parameters:
// bool                           NewBombTargetingMode           (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::ServerRequestSetBombTargetingMode(bool NewBombTargetingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetBombTargetingMode");

	ASpaceWhale_Character_BP_C_ServerRequestSetBombTargetingMode_Params params;
	params.NewBombTargetingMode = NewBombTargetingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpPressed
// ()

void ASpaceWhale_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpPressed");

	ASpaceWhale_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpReleased
// ()

void ASpaceWhale_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpReleased");

	ASpaceWhale_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiHyperspaceJumpVFX
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::MultiHyperspaceJumpVFX(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiHyperspaceJumpVFX");

	ASpaceWhale_Character_BP_C_MultiHyperspaceJumpVFX_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.StartHyperspaceJump
// ()

void ASpaceWhale_Character_BP_C::StartHyperspaceJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.StartHyperspaceJump");

	ASpaceWhale_Character_BP_C_StartHyperspaceJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestCancelHyperspaceJump
// ()

void ASpaceWhale_Character_BP_C::ServerRequestCancelHyperspaceJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestCancelHyperspaceJump");

	ASpaceWhale_Character_BP_C_ServerRequestCancelHyperspaceJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientStartHyperspaceJump
// ()
// Parameters:
// TArray<class APrimalCharacter*> TaggedCharacters               (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASpaceWhale_Character_BP_C::ClientStartHyperspaceJump(TArray<class APrimalCharacter*>* TaggedCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientStartHyperspaceJump");

	ASpaceWhale_Character_BP_C_ClientStartHyperspaceJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TaggedCharacters != nullptr)
		*TaggedCharacters = params.TaggedCharacters;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientCancelHyperspaceJump
// ()

void ASpaceWhale_Character_BP_C::ClientCancelHyperspaceJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientCancelHyperspaceJump");

	ASpaceWhale_Character_BP_C_ClientCancelHyperspaceJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStopBombs
// ()

void ASpaceWhale_Character_BP_C::ServerRequestStopBombs()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStopBombs");

	ASpaceWhale_Character_BP_C_ServerRequestStopBombs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientPlayBombVFX
// ()

void ASpaceWhale_Character_BP_C::ClientPlayBombVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientPlayBombVFX");

	ASpaceWhale_Character_BP_C_ClientPlayBombVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForPlayers
// ()

void ASpaceWhale_Character_BP_C::ScanForPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForPlayers");

	ASpaceWhale_Character_BP_C_ScanForPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientForceMeshRelevant
// ()

void ASpaceWhale_Character_BP_C::ClientForceMeshRelevant()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientForceMeshRelevant");

	ASpaceWhale_Character_BP_C_ClientForceMeshRelevant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceHideSaddle
// ()

void ASpaceWhale_Character_BP_C::ForceHideSaddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceHideSaddle");

	ASpaceWhale_Character_BP_C_ForceHideSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PostJumpComplete
// ()

void ASpaceWhale_Character_BP_C::PostJumpComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PostJumpComplete");

	ASpaceWhale_Character_BP_C_PostJumpComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForTeleportActors
// ()

void ASpaceWhale_Character_BP_C::ScanForTeleportActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForTeleportActors");

	ASpaceWhale_Character_BP_C_ScanForTeleportActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHit
// ()

void ASpaceWhale_Character_BP_C::TorporHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHit");

	ASpaceWhale_Character_BP_C_TorporHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitRight
// ()

void ASpaceWhale_Character_BP_C::TorporHitRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitRight");

	ASpaceWhale_Character_BP_C_TorporHitRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitLeft
// ()

void ASpaceWhale_Character_BP_C::TorporHitLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitLeft");

	ASpaceWhale_Character_BP_C_TorporHitLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClearTorporHit
// ()

void ASpaceWhale_Character_BP_C::ClearTorporHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClearTorporHit");

	ASpaceWhale_Character_BP_C_ClearTorporHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ExecuteUbergraph_SpaceWhale_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_C::ExecuteUbergraph_SpaceWhale_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ExecuteUbergraph_SpaceWhale_Character_BP");

	ASpaceWhale_Character_BP_C_ExecuteUbergraph_SpaceWhale_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
