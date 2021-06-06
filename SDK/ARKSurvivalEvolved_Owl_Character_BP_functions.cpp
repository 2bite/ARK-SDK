// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Owl_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Owl_Character_BP.Owl_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AOwl_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AOwl_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Owl_Character_BP.Owl_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOwl_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPOnStartJump");

	AOwl_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Owl_Character_BP.Owl_Character_BP_C.RidingTick
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.RidingTick");

	AOwl_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOwl_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPHandleControllerInitiatedAttack");

	AOwl_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Owl_Character_BP.Owl_Character_BP_C.IsOnOrNearGround
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::STATIC_IsOnOrNearGround(bool* return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.IsOnOrNearGround");

	AOwl_Character_BP_C_IsOnOrNearGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function Owl_Character_BP.Owl_Character_BP_C.SetupIceCrashState
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyOneShotEncapsulate        (Parm, ZeroConstructor, IsPlainOldData)
// float                          CalculatedImpactRadius         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::SetupIceCrashState(bool Enabled, bool ApplyOneShotEncapsulate, float* CalculatedImpactRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.SetupIceCrashState");

	AOwl_Character_BP_C_SetupIceCrashState_Params params;
	params.Enabled = Enabled;
	params.ApplyOneShotEncapsulate = ApplyOneShotEncapsulate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CalculatedImpactRadius != nullptr)
		*CalculatedImpactRadius = params.CalculatedImpactRadius;
}


// Function Owl_Character_BP.Owl_Character_BP_C.GetPredatorVisionStaminaDrainPerSecond
// ()
// Parameters:
// float                          return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::GetPredatorVisionStaminaDrainPerSecond(float* return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.GetPredatorVisionStaminaDrainPerSecond");

	AOwl_Character_BP_C_GetPredatorVisionStaminaDrainPerSecond_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function Owl_Character_BP.Owl_Character_BP_C.StopEncapsulateAnims
// ()
// Parameters:
// bool                           StoppedAnim                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::StopEncapsulateAnims(bool* StoppedAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.StopEncapsulateAnims");

	AOwl_Character_BP_C_StopEncapsulateAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StoppedAnim != nullptr)
		*StoppedAnim = params.StoppedAnim;
}


// Function Owl_Character_BP.Owl_Character_BP_C.DiveBomb
// ()

void AOwl_Character_BP_C::DiveBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.DiveBomb");

	AOwl_Character_BP_C_DiveBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.DoIceBombAttack
// ()

void AOwl_Character_BP_C::DoIceBombAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.DoIceBombAttack");

	AOwl_Character_BP_C_DoIceBombAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.OnDiveCrash
// ()
// Parameters:
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        HitComp                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitResult                      (Parm)

void AOwl_Character_BP_C::OnDiveCrash(class AActor** HitActor, class USceneComponent** HitComp, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.OnDiveCrash");

	AOwl_Character_BP_C_OnDiveCrash_Params params;
	params.HitActor = HitActor;
	params.HitComp = HitComp;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingTrailParticles
// ()
// Parameters:
// class UParticleSystemComponent* Particles                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::UpdateDivingTrailParticles(class UParticleSystemComponent* Particles, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingTrailParticles");

	AOwl_Character_BP_C_UpdateDivingTrailParticles_Params params;
	params.Particles = Particles;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingFX
// ()

void AOwl_Character_BP_C::UpdateDivingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingFX");

	AOwl_Character_BP_C_UpdateDivingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.GetEncapsulateStaminaDrainPerSecond
// ()
// Parameters:
// float                          return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::GetEncapsulateStaminaDrainPerSecond(float* return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.GetEncapsulateStaminaDrainPerSecond");

	AOwl_Character_BP_C_GetEncapsulateStaminaDrainPerSecond_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function Owl_Character_BP.Owl_Character_BP_C.BPOnStaminaDrained
// ()

void AOwl_Character_BP_C::BPOnStaminaDrained()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPOnStaminaDrained");

	AOwl_Character_BP_C_BPOnStaminaDrained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AOwl_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOwl_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPHandleOnStopTargeting");

	AOwl_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Owl_Character_BP.Owl_Character_BP_C.SetupEncapsulateState
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::SetupEncapsulateState(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.SetupEncapsulateState");

	AOwl_Character_BP_C_SetupEncapsulateState_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOwl_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BP_PreventMovementMode");

	AOwl_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Owl_Character_BP.Owl_Character_BP_C.IsPredatorVisionEnabled
// ()
// Parameters:
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::IsPredatorVisionEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.IsPredatorVisionEnabled");

	AOwl_Character_BP_C_IsPredatorVisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function Owl_Character_BP.Owl_Character_BP_C.RemovePredatorVisionBuff
// ()
// Parameters:
// class AShooterCharacter*       Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::RemovePredatorVisionBuff(class AShooterCharacter* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.RemovePredatorVisionBuff");

	AOwl_Character_BP_C_RemovePredatorVisionBuff_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.SetupPredatorVisionBuff
// ()
// Parameters:
// class AShooterCharacter*       Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::SetupPredatorVisionBuff(class AShooterCharacter* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.SetupPredatorVisionBuff");

	AOwl_Character_BP_C_SetupPredatorVisionBuff_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.BlueprintCanRiderAttack
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOwl_Character_BP_C::STATIC_BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BlueprintCanRiderAttack");

	AOwl_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Owl_Character_BP.Owl_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPNotifyClearRider");

	AOwl_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.UserConstructionScript
// ()

void AOwl_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.UserConstructionScript");

	AOwl_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestPredatorVision
// ()
// Parameters:
// bool                           SetEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::ServerRequestPredatorVision(bool SetEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestPredatorVision");

	AOwl_Character_BP_C_ServerRequestPredatorVision_Params params;
	params.SetEnabled = SetEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.ClientDoPredatorVision
// ()
// Parameters:
// bool                           SetEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::ClientDoPredatorVision(bool SetEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ClientDoPredatorVision");

	AOwl_Character_BP_C_ClientDoPredatorVision_Params params;
	params.SetEnabled = SetEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStartEncapsulate
// ()

void AOwl_Character_BP_C::ServerRequestStartEncapsulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStartEncapsulate");

	AOwl_Character_BP_C_ServerRequestStartEncapsulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.MulticastStartEncapsulate
// ()
// Parameters:
// bool                           FromIceCrash                   (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::MulticastStartEncapsulate(bool FromIceCrash)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.MulticastStartEncapsulate");

	AOwl_Character_BP_C_MulticastStartEncapsulate_Params params;
	params.FromIceCrash = FromIceCrash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.MulticastStopEncapsulate
// ()

void AOwl_Character_BP_C::MulticastStopEncapsulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.MulticastStopEncapsulate");

	AOwl_Character_BP_C_MulticastStopEncapsulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStopEncapsulate
// ()

void AOwl_Character_BP_C::ServerRequestStopEncapsulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStopEncapsulate");

	AOwl_Character_BP_C_ServerRequestStopEncapsulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.Start Encapsulate
// ()

void AOwl_Character_BP_C::Start_Encapsulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.Start Encapsulate");

	AOwl_Character_BP_C_Start_Encapsulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.Stop Encapsulate
// ()

void AOwl_Character_BP_C::Stop_Encapsulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.Stop Encapsulate");

	AOwl_Character_BP_C_Stop_Encapsulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_EncapsulateStart
// ()

void AOwl_Character_BP_C::OnAnimCustomEvent_EncapsulateStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_EncapsulateStart");

	AOwl_Character_BP_C_OnAnimCustomEvent_EncapsulateStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.MulticastOnIceBombImpact
// ()

void AOwl_Character_BP_C::MulticastOnIceBombImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.MulticastOnIceBombImpact");

	AOwl_Character_BP_C_MulticastOnIceBombImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.OnIceCrashHit
// ()
// Parameters:
// bool                           HitValidTarget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitWater                       (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::OnIceCrashHit(bool HitValidTarget, bool HitWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.OnIceCrashHit");

	AOwl_Character_BP_C_OnIceCrashHit_Params params;
	params.HitValidTarget = HitValidTarget;
	params.HitWater = HitWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.StartIceCrash
// ()

void AOwl_Character_BP_C::StartIceCrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.StartIceCrash");

	AOwl_Character_BP_C_StartIceCrash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_IceCrashStart
// ()

void AOwl_Character_BP_C::OnAnimCustomEvent_IceCrashStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_IceCrashStart");

	AOwl_Character_BP_C_OnAnimCustomEvent_IceCrashStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestCancelIceCrash
// ()

void AOwl_Character_BP_C::ServerRequestCancelIceCrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestCancelIceCrash");

	AOwl_Character_BP_C_ServerRequestCancelIceCrash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.MulticastIceCrashHit
// ()
// Parameters:
// float                          EffectRadius                   (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::MulticastIceCrashHit(float EffectRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.MulticastIceCrashHit");

	AOwl_Character_BP_C_MulticastIceCrashHit_Params params;
	params.EffectRadius = EffectRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.ServerSetTargeting
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::ServerSetTargeting(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerSetTargeting");

	AOwl_Character_BP_C_ServerSetTargeting_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Owl_Character_BP.Owl_Character_BP_C.ExecuteUbergraph_Owl_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOwl_Character_BP_C::ExecuteUbergraph_Owl_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ExecuteUbergraph_Owl_Character_BP");

	AOwl_Character_BP_C_ExecuteUbergraph_Owl_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
