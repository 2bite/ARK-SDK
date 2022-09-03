// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Desmodus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetHUDElements
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Delegate, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ADesmodus_Character_BP_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetHUDElements");

	ADesmodus_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOnLifeSteal
// ()

void ADesmodus_Character_BP_C::TurnOnLifeSteal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOnLifeSteal");

	ADesmodus_Character_BP_C_TurnOnLifeSteal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetRidingMultiUseEntries
// (NetReliable, Exec, Event, Static, NetMulticast, Public, Delegate, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADesmodus_Character_BP_C::STATIC_BPGetRidingMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetRidingMultiUseEntries");

	ADesmodus_Character_BP_C_BPGetRidingMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesmodus_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAdjustDamage");

	ADesmodus_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetTargetingDesirability
// ()
// Parameters:
// class AActor**                 Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesmodus_Character_BP_C::BPGetTargetingDesirability(class AActor** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetTargetingDesirability");

	ADesmodus_Character_BP_C_BPGetTargetingDesirability_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesmodus_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetGravityZScale");

	ADesmodus_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.Multicast Lifesteal Sound
// ()
// Parameters:
// bool                           isStealing                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFromInit                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::Multicast_Lifesteal_Sound(bool isStealing, bool IsFromInit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.Multicast Lifesteal Sound");

	ADesmodus_Character_BP_C_Multicast_Lifesteal_Sound_Params params;
	params.isStealing = isStealing;
	params.IsFromInit = IsFromInit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoPingSound
// ()
// Parameters:
// class USceneComponent*         CharacterComponent             (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::MulticastEchoPingSound(class USceneComponent* CharacterComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoPingSound");

	ADesmodus_Character_BP_C_MulticastEchoPingSound_Params params;
	params.CharacterComponent = CharacterComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoBuffSound
// ()

void ADesmodus_Character_BP_C::MulticastEchoBuffSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoBuffSound");

	ADesmodus_Character_BP_C_MulticastEchoBuffSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastInvisibleSound
// ()
// Parameters:
// bool                           isInvisible                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::MulticastInvisibleSound(bool isInvisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastInvisibleSound");

	ADesmodus_Character_BP_C_MulticastInvisibleSound_Params params;
	params.isInvisible = isInvisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPUnstasis
// ()

void ADesmodus_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPUnstasis");

	ADesmodus_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterruptLatching
// ()

void ADesmodus_Character_BP_C::InterruptLatching()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterruptLatching");

	ADesmodus_Character_BP_C_InterruptLatching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetLatchValues
// ()
// Parameters:
// bool                           LatchedDownwards               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LatchingSurfaceNormal          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LatchingLoc                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InitialSpawn                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::SetLatchValues(bool LatchedDownwards, const struct FVector& LatchingSurfaceNormal, const struct FVector& LatchingLoc, bool InitialSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetLatchValues");

	ADesmodus_Character_BP_C_SetLatchValues_Params params;
	params.LatchedDownwards = LatchedDownwards;
	params.LatchingSurfaceNormal = LatchingSurfaceNormal;
	params.LatchingLoc = LatchingLoc;
	params.InitialSpawn = InitialSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOnStartJump");

	ADesmodus_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanAttack
// (NetReliable, NetRequest, Event, Public, Private, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanAttack");

	ADesmodus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShouldTryLatch
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           LandOnFailureToLatch           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::ShouldTryLatch(bool* Ret, bool* LandOnFailureToLatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShouldTryLatch");

	ADesmodus_Character_BP_C_ShouldTryLatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (LandOnFailureToLatch != nullptr)
		*LandOnFailureToLatch = params.LandOnFailureToLatch;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAllowCarryCharacter
// ()
// Parameters:
// class APrimalCharacter**       checkCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter** checkCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAllowCarryCharacter");

	ADesmodus_Character_BP_C_BPAllowCarryCharacter_Params params;
	params.checkCharacter = checkCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.UpdateHUD
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, BlueprintEvent)

void ADesmodus_Character_BP_C::STATIC_UpdateHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.UpdateHUD");

	ADesmodus_Character_BP_C_UpdateHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanScreech
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, Private, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::CanScreech(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanScreech");

	ADesmodus_Character_BP_C_CanScreech_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanRiderAttack");

	ADesmodus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesmodus_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyFOV");

	ADesmodus_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPCanLand
// ()
// Parameters:
// bool*                          CanLand                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPCanLand(bool* CanLand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPCanLand");

	ADesmodus_Character_BP_C_BPCanLand_Params params;
	params.CanLand = CanLand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideCameraViewTarget
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

void ADesmodus_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideCameraViewTarget");

	ADesmodus_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesmodus_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetCrosshairAlpha");

	ADesmodus_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPLimitPlayerRotation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               InViewRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ADesmodus_Character_BP_C::BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPLimitPlayerRotation");

	ADesmodus_Character_BP_C_BPLimitPlayerRotation_Params params;
	params.viewingCharacter = viewingCharacter;
	params.InViewRotation = InViewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeAdult
// ()

void ADesmodus_Character_BP_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeAdult");

	ADesmodus_Character_BP_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeBaby
// ()

void ADesmodus_Character_BP_C::BPBecomeBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeBaby");

	ADesmodus_Character_BP_C_BPBecomeBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPIsValidUnStasisCaster
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPIsValidUnStasisCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPIsValidUnStasisCaster");

	ADesmodus_Character_BP_C_BPIsValidUnStasisCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.LatchToCeilingOnSpawn
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, HasDefaults, BlueprintEvent)

void ADesmodus_Character_BP_C::STATIC_LatchToCeilingOnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.LatchToCeilingOnSpawn");

	ADesmodus_Character_BP_C_LatchToCeilingOnSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_OnTamedOrderReceived
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_OnTamedOrderReceived");

	ADesmodus_Character_BP_C_BP_OnTamedOrderReceived_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideMoveToOrder
// ()
// Parameters:
// struct FVector*                MoveToLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      OrderingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideMoveToOrder");

	ADesmodus_Character_BP_C_BPOverrideMoveToOrder_Params params;
	params.MoveToLocation = MoveToLocation;
	params.OrderingPlayer = OrderingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleUseButtonPress");

	ADesmodus_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideStencilAllianceForTarget
// ()
// Parameters:
// class APrimalCharacter**       TargetDino                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EStencilAlliance>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EStencilAlliance> ADesmodus_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter** TargetDino, class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideStencilAllianceForTarget");

	ADesmodus_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params;
	params.TargetDino = TargetDino;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bInCave
// ()

void ADesmodus_Character_BP_C::OnRep_bInCave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bInCave");

	ADesmodus_Character_BP_C_OnRep_bInCave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckInCave
// ()

void ADesmodus_Character_BP_C::CheckInCave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckInCave");

	ADesmodus_Character_BP_C_CheckInCave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.StopInvisibility
// ()

void ADesmodus_Character_BP_C::StopInvisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.StopInvisibility");

	ADesmodus_Character_BP_C_StopInvisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.DecreaseInvisibilityStamina
// ()

void ADesmodus_Character_BP_C::DecreaseInvisibilityStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.DecreaseInvisibilityStamina");

	ADesmodus_Character_BP_C_DecreaseInvisibilityStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADesmodus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ADesmodus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryLatch
// ()
// Parameters:
// struct FVector*                Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          backwardsLatching              (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::TryLatch(struct FVector* Offset, bool* backwardsLatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryLatch");

	ADesmodus_Character_BP_C_TryLatch_Params params;
	params.Offset = Offset;
	params.backwardsLatching = backwardsLatching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsDiving
// ()

void ADesmodus_Character_BP_C::OnRep_bIsDiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsDiving");

	ADesmodus_Character_BP_C_OnRep_bIsDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADesmodus_Character_BP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveHit");

	ADesmodus_Character_BP_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesmodus_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ADesmodus_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveAnyDamage");

	ADesmodus_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidSetCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidSetCarriedCharacter");

	ADesmodus_Character_BP_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidClearCarriedCharacter");

	ADesmodus_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnKillGrabbedDino
// ()
// Parameters:
// class APrimalDinoCharacter*    KilledDino                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::OnKillGrabbedDino(class APrimalDinoCharacter* KilledDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnKillGrabbedDino");

	ADesmodus_Character_BP_C_OnKillGrabbedDino_Params params;
	params.KilledDino = KilledDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bNightVisionOn
// ()

void ADesmodus_Character_BP_C::OnRep_bNightVisionOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bNightVisionOn");

	ADesmodus_Character_BP_C_OnRep_bNightVisionOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPTryMultiUse");

	ADesmodus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShowMultiUse
// ()

void ADesmodus_Character_BP_C::ShowMultiUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShowMultiUse");

	ADesmodus_Character_BP_C_ShowMultiUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, Exec, Event, NetResponse, Public, Private, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADesmodus_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetMultiUseEntries");

	ADesmodus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ToggleNightVision
// ()

void ADesmodus_Character_BP_C::ToggleNightVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ToggleNightVision");

	ADesmodus_Character_BP_C_ToggleNightVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickDiving
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::TickDiving(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickDiving");

	ADesmodus_Character_BP_C_TickDiving_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPShouldForceFlee");

	ADesmodus_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.RemoveNightVisionForRider
// ()

void ADesmodus_Character_BP_C::RemoveNightVisionForRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.RemoveNightVisionForRider");

	ADesmodus_Character_BP_C_RemoveNightVisionForRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.Add Night VisionForRider
// ()

void ADesmodus_Character_BP_C::Add_Night_VisionForRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.Add Night VisionForRider");

	ADesmodus_Character_BP_C_Add_Night_VisionForRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.DestroyHUD
// ()

void ADesmodus_Character_BP_C::DestroyHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.DestroyHUD");

	ADesmodus_Character_BP_C_DestroyHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetupHUD
// ()
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::SetupHUD(class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetupHUD");

	ADesmodus_Character_BP_C_SetupHUD_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifySetRider");

	ADesmodus_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddTamingAffinityFromLifeSteal
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::AddTamingAffinityFromLifeSteal(class AShooterCharacter* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddTamingAffinityFromLifeSteal");

	ADesmodus_Character_BP_C_AddTamingAffinityFromLifeSteal_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyAimOffsetTargetLocation
// ()
// Parameters:
// struct FVector                 AimTargetLocation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADesmodus_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyAimOffsetTargetLocation");

	ADesmodus_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimTargetLocation != nullptr)
		*AimTargetLocation = params.AimTargetLocation;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickTameGrabAttack
// ()

void ADesmodus_Character_BP_C::TickTameGrabAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickTameGrabAttack");

	ADesmodus_Character_BP_C_TickTameGrabAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInNight
// ()

void ADesmodus_Character_BP_C::OnRep_bIsInNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInNight");

	ADesmodus_Character_BP_C_OnRep_bIsInNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickCanLatchClient
// ()
// Parameters:
// bool                           CanLatch                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::TickCanLatchClient(bool* CanLatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickCanLatchClient");

	ADesmodus_Character_BP_C_TickCanLatchClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanLatch != nullptr)
		*CanLatch = params.CanLatch;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryUseBloodPack
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintEvent)

void ADesmodus_Character_BP_C::TryUseBloodPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryUseBloodPack");

	ADesmodus_Character_BP_C_TryUseBloodPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.SendToServerTryToggleInvisible
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintEvent)

void ADesmodus_Character_BP_C::SendToServerTryToggleInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.SendToServerTryToggleInvisible");

	ADesmodus_Character_BP_C_SendToServerTryToggleInvisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleControllerInitiatedAttack");

	ADesmodus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanStartLifeSteal
// ()
// Parameters:
// bool                           canStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::CanStartLifeSteal(bool* canStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanStartLifeSteal");

	ADesmodus_Character_BP_C_CanStartLifeSteal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canStart != nullptr)
		*canStart = params.canStart;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOffLifeSteal
// ()

void ADesmodus_Character_BP_C::TurnOffLifeSteal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOffLifeSteal");

	ADesmodus_Character_BP_C_TurnOffLifeSteal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsLifeStealing
// ()

void ADesmodus_Character_BP_C::OnRep_bIsLifeStealing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsLifeStealing");

	ADesmodus_Character_BP_C_OnRep_bIsLifeStealing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleLifeSteal
// ()

void ADesmodus_Character_BP_C::TryToggleLifeSteal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleLifeSteal");

	ADesmodus_Character_BP_C_TryToggleLifeSteal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDoAttack");

	ADesmodus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInvisible
// ()

void ADesmodus_Character_BP_C::OnRep_bIsInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInvisible");

	ADesmodus_Character_BP_C_OnRep_bIsInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleInvisible
// ()

void ADesmodus_Character_BP_C::TryToggleInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleInvisible");

	ADesmodus_Character_BP_C_TryToggleInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesmodus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPServerHandleNetExecCommand");

	ADesmodus_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterceptInputEvent
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintEvent)
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ADesmodus_Character_BP_C::STATIC_InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterceptInputEvent");

	ADesmodus_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.RidingTick");

	ADesmodus_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifyClearRider");

	ADesmodus_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckTrackingActors
// ()

void ADesmodus_Character_BP_C::CheckTrackingActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckTrackingActors");

	ADesmodus_Character_BP_C_CheckTrackingActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddActorToTrackingList
// ()

void ADesmodus_Character_BP_C::AddActorToTrackingList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddActorToTrackingList");

	ADesmodus_Character_BP_C_AddActorToTrackingList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.Get All Revealed TargetForCurrentScream
// ()
// Parameters:
// TArray<class AActor*>          RevealedCharacter              (Parm, OutParm, ZeroConstructor)

void ADesmodus_Character_BP_C::Get_All_Revealed_TargetForCurrentScream(TArray<class AActor*>* RevealedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.Get All Revealed TargetForCurrentScream");

	ADesmodus_Character_BP_C_Get_All_Revealed_TargetForCurrentScream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RevealedCharacter != nullptr)
		*RevealedCharacter = params.RevealedCharacter;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ADesmodus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.GetLifeStealAmountFromCurrentAttack
// ()

void ADesmodus_Character_BP_C::GetLifeStealAmountFromCurrentAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.GetLifeStealAmountFromCurrentAttack");

	ADesmodus_Character_BP_C_GetLifeStealAmountFromCurrentAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAnimNotifyCustomState_End
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::BPAnimNotifyCustomState_End(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAnimNotifyCustomState_End");

	ADesmodus_Character_BP_C_BPAnimNotifyCustomState_End_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.LineTrace
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintEvent)
// Parameters:
// class UMeshComponent**         Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          BackwardLatching               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Somthing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Hit_Actor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::LineTrace(class UMeshComponent** Mesh, struct FName* SocketName, class AActor** Actor, struct FVector* Offset, bool* BackwardLatching, bool* Hit_Somthing, struct FVector* Location, struct FVector* Normal, class AActor** Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.LineTrace");

	ADesmodus_Character_BP_C_LineTrace_Params params;
	params.Mesh = Mesh;
	params.SocketName = SocketName;
	params.Actor = Actor;
	params.Offset = Offset;
	params.BackwardLatching = BackwardLatching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit_Somthing != nullptr)
		*Hit_Somthing = params.Hit_Somthing;
	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Hit_Actor != nullptr)
		*Hit_Actor = params.Hit_Actor;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.UserConstructionScript
// ()

void ADesmodus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.UserConstructionScript");

	ADesmodus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_288
// ()

void ADesmodus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_288()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_288");

	ADesmodus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_288_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_287
// ()

void ADesmodus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_287()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_287");

	ADesmodus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_287_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_286
// ()

void ADesmodus_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_286()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_286");

	ADesmodus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_286_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_285
// ()

void ADesmodus_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_285()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_285");

	ADesmodus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_285_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.LocalFaceLatchingObject
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::LocalFaceLatchingObject(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.LocalFaceLatchingObject");

	ADesmodus_Character_BP_C_LocalFaceLatchingObject_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveTick");

	ADesmodus_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveBeginPlay
// ()

void ADesmodus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveBeginPlay");

	ADesmodus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartDaytime_Event
// ()

void ADesmodus_Character_BP_C::OnStartDaytime_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartDaytime_Event");

	ADesmodus_Character_BP_C_OnStartDaytime_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartNighttime_Event
// ()

void ADesmodus_Character_BP_C::OnStartNighttime_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartNighttime_Event");

	ADesmodus_Character_BP_C_OnStartNighttime_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClearHUDReference
// ()

void ADesmodus_Character_BP_C::ClearHUDReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClearHUDReference");

	ADesmodus_Character_BP_C_ClearHUDReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ResetTamingVars
// ()

void ADesmodus_Character_BP_C::ResetTamingVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ResetTamingVars");

	ADesmodus_Character_BP_C_ResetTamingVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.Client_SpawnSuccessBloddpackVFX
// ()

void ADesmodus_Character_BP_C::Client_SpawnSuccessBloddpackVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.Client_SpawnSuccessBloddpackVFX");

	ADesmodus_Character_BP_C_Client_SpawnSuccessBloddpackVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BindDayCycleManager
// ()

void ADesmodus_Character_BP_C::BindDayCycleManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.BindDayCycleManager");

	ADesmodus_Character_BP_C_BindDayCycleManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.MoveDuringUnlatching
// ()

void ADesmodus_Character_BP_C::MoveDuringUnlatching()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.MoveDuringUnlatching");

	ADesmodus_Character_BP_C_MoveDuringUnlatching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClientNotEnoughStamina
// ()

void ADesmodus_Character_BP_C::ClientNotEnoughStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClientNotEnoughStamina");

	ADesmodus_Character_BP_C_ClientNotEnoughStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryLatch
// ()
// Parameters:
// bool                           LatchedBackwards               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LatchingSurfaceNormal          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LatchingLoc                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::ServerTryLatch(bool LatchedBackwards, const struct FVector& LatchingSurfaceNormal, const struct FVector& LatchingLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryLatch");

	ADesmodus_Character_BP_C_ServerTryLatch_Params params;
	params.LatchedBackwards = LatchedBackwards;
	params.LatchingSurfaceNormal = LatchingSurfaceNormal;
	params.LatchingLoc = LatchingLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CrouchTick
// ()

void ADesmodus_Character_BP_C::CrouchTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.CrouchTick");

	ADesmodus_Character_BP_C_CrouchTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.JumpTick
// ()

void ADesmodus_Character_BP_C::JumpTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.JumpTick");

	ADesmodus_Character_BP_C_JumpTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryToggleLifeSteal
// ()

void ADesmodus_Character_BP_C::ServerTryToggleLifeSteal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryToggleLifeSteal");

	ADesmodus_Character_BP_C_ServerTryToggleLifeSteal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ExecuteUbergraph_Desmodus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesmodus_Character_BP_C::ExecuteUbergraph_Desmodus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Desmodus_Character_BP.Desmodus_Character_BP_C.ExecuteUbergraph_Desmodus_Character_BP");

	ADesmodus_Character_BP_C_ExecuteUbergraph_Desmodus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
