// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cherufe_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.OnRep_bAllowMating
// ()

void ACherufe_Character_BP_C::OnRep_bAllowMating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.OnRep_bAllowMating");

	ACherufe_Character_BP_C_OnRep_bAllowMating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintDrawFloatingHUD");

	ACherufe_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetAllowMating
// ()
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::GetAllowMating(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetAllowMating");

	ACherufe_Character_BP_C_GetAllowMating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateAllowMating
// ()

void ACherufe_Character_BP_C::UpdateAllowMating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateAllowMating");

	ACherufe_Character_BP_C_UpdateAllowMating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateForgeCharging
// ()

void ACherufe_Character_BP_C::UpdateForgeCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateForgeCharging");

	ACherufe_Character_BP_C_UpdateForgeCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACherufe_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ACherufe_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateTargetingAndAiming
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::STATIC_UpdateTargetingAndAiming(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateTargetingAndAiming");

	ACherufe_Character_BP_C_UpdateTargetingAndAiming_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTimerNonDedicated
// ()

void ACherufe_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTimerNonDedicated");

	ACherufe_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTimerServer
// ()

void ACherufe_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTimerServer");

	ACherufe_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACherufe_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_InterceptMoveForward");

	ACherufe_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.IsConsumingOil
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::IsConsumingOil(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.IsConsumingOil");

	ACherufe_Character_BP_C_IsConsumingOil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	ACherufe_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
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


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPOverrideCameraViewTarget
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

void ACherufe_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPOverrideCameraViewTarget");

	ACherufe_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Update Targeting Location Particle
// ()
// Parameters:
// bool                           IsVisialbe                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::Update_Targeting_Location_Particle(bool IsVisialbe, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.Update Targeting Location Particle");

	ACherufe_Character_BP_C_Update_Targeting_Location_Particle_Params params;
	params.IsVisialbe = IsVisialbe;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.CheckRaining
// ()
// Parameters:
// bool                           ThisCharacterIsOpenToSkyAndItIsRaining (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::CheckRaining(bool* ThisCharacterIsOpenToSkyAndItIsRaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.CheckRaining");

	ACherufe_Character_BP_C_CheckRaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThisCharacterIsOpenToSkyAndItIsRaining != nullptr)
		*ThisCharacterIsOpenToSkyAndItIsRaining = params.ThisCharacterIsOpenToSkyAndItIsRaining;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.SpawnNestEgg
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ACherufe_Character_BP_C::STATIC_SpawnNestEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.SpawnNestEgg");

	ACherufe_Character_BP_C_SpawnNestEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPNotifySetRider");

	ACherufe_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPNotifyClearRider");

	ACherufe_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ToggleInOutWaterVFX
// ()
// Parameters:
// bool                           InWater                        (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::ToggleInOutWaterVFX(bool InWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ToggleInOutWaterVFX");

	ACherufe_Character_BP_C_ToggleInOutWaterVFX_Params params;
	params.InWater = InWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPOnMovementModeChangedNotify");

	ACherufe_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.SetForgeEnabled
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::SetForgeEnabled(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.SetForgeEnabled");

	ACherufe_Character_BP_C_SetForgeEnabled_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateVFX
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::UpdateVFX(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateVFX");

	ACherufe_Character_BP_C_UpdateVFX_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.PushBackPawns
// ()

void ACherufe_Character_BP_C::PushBackPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.PushBackPawns");

	ACherufe_Character_BP_C_PushBackPawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.OnRep_IsProjectileTargeting
// ()

void ACherufe_Character_BP_C::OnRep_IsProjectileTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.OnRep_IsProjectileTargeting");

	ACherufe_Character_BP_C_OnRep_IsProjectileTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (NetReliable, NetRequest, Exec, Native, Event, Static, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::STATIC_BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ACherufe_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.SpawnVentProjectiles
// (NetReliable, Exec, NetResponse, Static, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ACherufe_Character_BP_C::STATIC_SpawnVentProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.SpawnVentProjectiles");

	ACherufe_Character_BP_C_SpawnVentProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACherufe_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPAdjustDamage");

	ACherufe_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetVentForgeStaminaCost
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACherufe_Character_BP_C::GetVentForgeStaminaCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetVentForgeStaminaCost");

	ACherufe_Character_BP_C_GetVentForgeStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACherufe_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPAdjustAttackIndex");

	ACherufe_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACherufe_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintCanAttack");

	ACherufe_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.StopChargingForge
// ()

void ACherufe_Character_BP_C::StopChargingForge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.StopChargingForge");

	ACherufe_Character_BP_C_StopChargingForge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetForgeChargedAmount
// ()
// Parameters:
// bool                           SmoothedValues                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::GetForgeChargedAmount(bool SmoothedValues, float* Value, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetForgeChargedAmount");

	ACherufe_Character_BP_C_GetForgeChargedAmount_Params params;
	params.SmoothedValues = SmoothedValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.StartChargingForge
// ()

void ACherufe_Character_BP_C::StartChargingForge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.StartChargingForge");

	ACherufe_Character_BP_C_StartChargingForge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Allowed to ChargeForge
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACherufe_Character_BP_C::Allowed_to_ChargeForge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.Allowed to ChargeForge");

	ACherufe_Character_BP_C_Allowed_to_ChargeForge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.DoVentHeatAttack
// ()

void ACherufe_Character_BP_C::DoVentHeatAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.DoVentHeatAttack");

	ACherufe_Character_BP_C_DoVentHeatAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACherufe_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTryMultiUse");

	ACherufe_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetMultiUseEntries
// (Exec, Native, Event, NetResponse, NetMulticast, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ACherufe_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetMultiUseEntries");

	ACherufe_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ProjectileTrySubtractFood
// ()
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::ProjectileTrySubtractFood(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ProjectileTrySubtractFood");

	ACherufe_Character_BP_C_ProjectileTrySubtractFood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetHUDElements
// (NetReliable, NetRequest, Event, Static, NetMulticast, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ACherufe_Character_BP_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetHUDElements");

	ACherufe_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACherufe_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPHandleOnStopTargeting");

	ACherufe_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACherufe_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPHandleControllerInitiatedAttack");

	ACherufe_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPDoAttack");

	ACherufe_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetVerticalViewAngle
// ()
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::GetVerticalViewAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetVerticalViewAngle");

	ACherufe_Character_BP_C_GetVerticalViewAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACherufe_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintCanRiderAttack");

	ACherufe_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.SetTurretMode
// ()
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACherufe_Character_BP_C::SetTurretMode(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.SetTurretMode");

	ACherufe_Character_BP_C_SetTurretMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPSetupTamed");

	ACherufe_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPBecomeAdult
// ()

void ACherufe_Character_BP_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPBecomeAdult");

	ACherufe_Character_BP_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPBecomeBaby
// ()

void ACherufe_Character_BP_C::BPBecomeBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPBecomeBaby");

	ACherufe_Character_BP_C_BPBecomeBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UserConstructionScript
// ()

void ACherufe_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.UserConstructionScript");

	ACherufe_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequest_FireProjectile
// ()
// Parameters:
// struct FProjectileArc          Arc                            (Parm)

void ACherufe_Character_BP_C::ServerRequest_FireProjectile(const struct FProjectileArc& Arc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequest_FireProjectile");

	ACherufe_Character_BP_C_ServerRequest_FireProjectile_Params params;
	params.Arc = Arc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ClientShowErrorMessage
// ()
// Parameters:
// unsigned char                  MessageType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSingleton                    (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::ClientShowErrorMessage(unsigned char MessageType, float DisplayTime, bool IsSingleton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ClientShowErrorMessage");

	ACherufe_Character_BP_C_ClientShowErrorMessage_Params params;
	params.MessageType = MessageType;
	params.DisplayTime = DisplayTime;
	params.IsSingleton = IsSingleton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestStartChargingForge
// ()

void ACherufe_Character_BP_C::ServerRequestStartChargingForge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestStartChargingForge");

	ACherufe_Character_BP_C_ServerRequestStartChargingForge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestStopChargingForge
// ()

void ACherufe_Character_BP_C::ServerRequestStopChargingForge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestStopChargingForge");

	ACherufe_Character_BP_C_ServerRequestStopChargingForge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestDoVentForgeAttack
// ()

void ACherufe_Character_BP_C::ServerRequestDoVentForgeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestDoVentForgeAttack");

	ACherufe_Character_BP_C_ServerRequestDoVentForgeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.MultiSetSpeed
// ()
// Parameters:
// bool                           ChargingForge                  (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::MultiSetSpeed(bool ChargingForge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.MultiSetSpeed");

	ACherufe_Character_BP_C_MultiSetSpeed_Params params;
	params.ChargingForge = ChargingForge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ReceiveBeginPlay
// ()

void ACherufe_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ReceiveBeginPlay");

	ACherufe_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPUnstasis
// ()

void ACherufe_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPUnstasis");

	ACherufe_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_SetCanRun
// ()
// Parameters:
// bool                           CanRun                         (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::Multi_SetCanRun(bool CanRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_SetCanRun");

	ACherufe_Character_BP_C_Multi_SetCanRun_Params params;
	params.CanRun = CanRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.AnimNotify_EatingFromOilGeyser
// ()

void ACherufe_Character_BP_C::AnimNotify_EatingFromOilGeyser()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.AnimNotify_EatingFromOilGeyser");

	ACherufe_Character_BP_C_AnimNotify_EatingFromOilGeyser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_UpdateSmeltingFX
// ()
// Parameters:
// bool                           NewActiveState                 (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::Multi_UpdateSmeltingFX(bool NewActiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_UpdateSmeltingFX");

	ACherufe_Character_BP_C_Multi_UpdateSmeltingFX_Params params;
	params.NewActiveState = NewActiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.TimeGatedTryAoEHeat
// ()

void ACherufe_Character_BP_C::TimeGatedTryAoEHeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.TimeGatedTryAoEHeat");

	ACherufe_Character_BP_C_TimeGatedTryAoEHeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_OnJumpPressed
// ()

void ACherufe_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_OnJumpPressed");

	ACherufe_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_StartOrStopForgeChargingFX
// ()
// Parameters:
// bool                           IsStart                        (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::Multi_StartOrStopForgeChargingFX(bool IsStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_StartOrStopForgeChargingFX");

	ACherufe_Character_BP_C_Multi_StartOrStopForgeChargingFX_Params params;
	params.IsStart = IsStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.AnimNotify_Taunt
// ()

void ACherufe_Character_BP_C::AnimNotify_Taunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.AnimNotify_Taunt");

	ACherufe_Character_BP_C_AnimNotify_Taunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Server_TryTauntAttack
// ()

void ACherufe_Character_BP_C::Server_TryTauntAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.Server_TryTauntAttack");

	ACherufe_Character_BP_C_Server_TryTauntAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_UpdateLavaFloating
// ()

void ACherufe_Character_BP_C::Multi_UpdateLavaFloating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_UpdateLavaFloating");

	ACherufe_Character_BP_C_Multi_UpdateLavaFloating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ExecuteUbergraph_Cherufe_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_C::ExecuteUbergraph_Cherufe_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP.Cherufe_Character_BP_C.ExecuteUbergraph_Cherufe_Character_BP");

	ACherufe_Character_BP_C_ExecuteUbergraph_Cherufe_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
