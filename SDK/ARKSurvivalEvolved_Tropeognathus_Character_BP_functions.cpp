// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tropeognathus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveBeginPlay
// ()

void ATropeognathus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveBeginPlay");

	ATropeognathus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWindGust
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         StartTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::IsUsingWindGust(bool* ret, double* StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWindGust");

	ATropeognathus_Character_BP_C_IsUsingWindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (StartTime != nullptr)
		*StartTime = params.StartTime;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingForwardInput
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::IsUsingForwardInput(bool* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingForwardInput");

	ATropeognathus_Character_BP_C_IsUsingForwardInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPUnsetupDinoTameable
// ()

void ATropeognathus_Character_BP_C::BPUnsetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPUnsetupDinoTameable");

	ATropeognathus_Character_BP_C_BPUnsetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BSetupDinoTameable
// ()

void ATropeognathus_Character_BP_C::BSetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BSetupDinoTameable");

	ATropeognathus_Character_BP_C_BSetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRiderSocket
// ()

void ATropeognathus_Character_BP_C::UpdateRiderSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRiderSocket");

	ATropeognathus_Character_BP_C_UpdateRiderSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetOverrideSocket
// ()
// Parameters:
// struct FName*                  From                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ATropeognathus_Character_BP_C::GetOverrideSocket(struct FName* From)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetOverrideSocket");

	ATropeognathus_Character_BP_C_GetOverrideSocket_Params params;
	params.From = From;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowWakingTame
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::AllowWakingTame(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowWakingTame");

	ATropeognathus_Character_BP_C_AllowWakingTame_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OwningClientTryFlakCannonFire
// ()

void ATropeognathus_Character_BP_C::OwningClientTryFlakCannonFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OwningClientTryFlakCannonFire");

	ATropeognathus_Character_BP_C_OwningClientTryFlakCannonFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ATropeognathus_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterceptInputEvent");

	ATropeognathus_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowPlayMontage");

	ATropeognathus_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetDinoLevelUpAnimation
// ()
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ATropeognathus_Character_BP_C::GetDinoLevelUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetDinoLevelUpAnimation");

	ATropeognathus_Character_BP_C_GetDinoLevelUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTaming
// ()

void ATropeognathus_Character_BP_C::UpdateTaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTaming");

	ATropeognathus_Character_BP_C_UpdateTaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPShowTamingPanel
// ()
// Parameters:
// bool*                          currentVisibility              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BPShowTamingPanel(bool* currentVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPShowTamingPanel");

	ATropeognathus_Character_BP_C_BPShowTamingPanel_Params params;
	params.currentVisibility = currentVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetTamingBuff
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             Buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::GetTamingBuff(bool* IsValid, class APrimalBuff** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetTamingBuff");

	ATropeognathus_Character_BP_C_GetTamingBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Buff != nullptr)
		*Buff = params.Buff;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideTamingDescriptionLabel
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, NetServer, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FSlateColor             TextColor                      (Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ATropeognathus_Character_BP_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideTamingDescriptionLabel");

	ATropeognathus_Character_BP_C_BPOverrideTamingDescriptionLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextColor != nullptr)
		*TextColor = params.TextColor;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintCanAttack");

	ATropeognathus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATropeognathus_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPAdjustDamage");

	ATropeognathus_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Replicated Control Rotation Public
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ATropeognathus_Character_BP_C::Get_Replicated_Control_Rotation_Public()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Replicated Control Rotation Public");

	ATropeognathus_Character_BP_C_Get_Replicated_Control_Rotation_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsPlayingBlockingAnim
// ()
// Parameters:
// bool                           ReturnVal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::IsPlayingBlockingAnim(bool* ReturnVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsPlayingBlockingAnim");

	ATropeognathus_Character_BP_C_IsPlayingBlockingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnVal != nullptr)
		*ReturnVal = params.ReturnVal;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Drafting Public
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           DraftAcked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ATropeognathus_Character_BP_C::Is_Using_Drafting_Public(bool* DraftAcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Drafting Public");

	ATropeognathus_Character_BP_C_Is_Using_Drafting_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DraftAcked != nullptr)
		*DraftAcked = params.DraftAcked;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingDrafting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           DraftAcked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ATropeognathus_Character_BP_C::IsUsingDrafting(bool* DraftAcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingDrafting");

	ATropeognathus_Character_BP_C_IsUsingDrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DraftAcked != nullptr)
		*DraftAcked = params.DraftAcked;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetRiderSocket
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ATropeognathus_Character_BP_C::BPGetRiderSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetRiderSocket");

	ATropeognathus_Character_BP_C_BPGetRiderSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsJumpHeld
// (Net, NetReliable, Exec, Static, MulticastDelegate, Private, NetServer, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::STATIC_IsJumpHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsJumpHeld");

	ATropeognathus_Character_BP_C_IsJumpHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnDinoCheat");

	ATropeognathus_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetReplicatedControlRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ATropeognathus_Character_BP_C::GetReplicatedControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetReplicatedControlRotation");

	ATropeognathus_Character_BP_C_GetReplicatedControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveTick");

	ATropeognathus_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDoAttack");

	ATropeognathus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATropeognathus_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairAlpha");

	ATropeognathus_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsFlakCannonOnCooldown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::IsFlakCannonOnCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsFlakCannonOnCooldown");

	ATropeognathus_Character_BP_C_IsFlakCannonOnCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairLocation
// ()
// Parameters:
// float*                         CanvasClipX                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CanvasClipY                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutX                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutY                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BPGetCrosshairLocation(float* CanvasClipX, float* CanvasClipY, float* OutX, float* OutY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairLocation");

	ATropeognathus_Character_BP_C_BPGetCrosshairLocation_Params params;
	params.CanvasClipX = CanvasClipX;
	params.CanvasClipY = CanvasClipY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutX != nullptr)
		*OutX = params.OutX;
	if (OutY != nullptr)
		*OutY = params.OutY;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ConsumeItem
// ()
// Parameters:
// class UClass*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::ConsumeItem(class UClass* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ConsumeItem");

	ATropeognathus_Character_BP_C_ConsumeItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasAmmo
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ATropeognathus_Character_BP_C::HasAmmo(int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasAmmo");

	ATropeognathus_Character_BP_C_HasAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quantity != nullptr)
		*Quantity = params.Quantity;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStopJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BPOnStopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStopJump");

	ATropeognathus_Character_BP_C_BPOnStopJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Fire Flak Cannon
// (NetReliable, Event, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::STATIC_Fire_Flak_Cannon(const struct FVector& Dir, const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Fire Flak Cannon");

	ATropeognathus_Character_BP_C_Fire_Flak_Cannon_Params params;
	params.Dir = Dir;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Has Saddle Public
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetIsSuperSaddle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::Has_Saddle_Public(bool* ret, bool* RetIsSuperSaddle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Has Saddle Public");

	ATropeognathus_Character_BP_C_Has_Saddle_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (RetIsSuperSaddle != nullptr)
		*RetIsSuperSaddle = params.RetIsSuperSaddle;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnInventoryItemGrind
// ()

void ATropeognathus_Character_BP_C::OnInventoryItemGrind()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnInventoryItemGrind");

	ATropeognathus_Character_BP_C_OnInventoryItemGrind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateWindGustCooldownVFX
// ()

void ATropeognathus_Character_BP_C::UpdateWindGustCooldownVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateWindGustCooldownVFX");

	ATropeognathus_Character_BP_C_UpdateWindGustCooldownVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATropeognathus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ATropeognathus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryInterruptLanding
// ()
// Parameters:
// TEnumAsByte<EMovementMode>     Selection                      (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::TryInterruptLanding(TEnumAsByte<EMovementMode> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryInterruptLanding");

	ATropeognathus_Character_BP_C_TryInterruptLanding_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_SuperFlight
// ()

void ATropeognathus_Character_BP_C::OnRep_SuperFlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_SuperFlight");

	ATropeognathus_Character_BP_C_OnRep_SuperFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetSuperFlight
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerVFX                     (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::SetSuperFlight(bool Value, bool TriggerVFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetSuperFlight");

	ATropeognathus_Character_BP_C_SetSuperFlight_Params params;
	params.Value = Value;
	params.TriggerVFX = TriggerVFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Current Percent Of Max Fly Speed Public
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATropeognathus_Character_BP_C::Get_Current_Percent_Of_Max_Fly_Speed_Public()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Current Percent Of Max Fly Speed Public");

	ATropeognathus_Character_BP_C_Get_Current_Percent_Of_Max_Fly_Speed_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Public
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         StartedEndingTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::Is_Using_Super_Flight_Public(bool* ret, double* StartedEndingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Public");

	ATropeognathus_Character_BP_C_Is_Using_Super_Flight_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (StartedEndingTime != nullptr)
		*StartedEndingTime = params.StartedEndingTime;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlight
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         StartedEndingTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::IsUsingSuperFlight(bool* ret, double* StartedEndingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlight");

	ATropeognathus_Character_BP_C_IsUsingSuperFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (StartedEndingTime != nullptr)
		*StartedEndingTime = params.StartedEndingTime;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightBoost
// ()

void ATropeognathus_Character_BP_C::UpdateSuperFlightBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightBoost");

	ATropeognathus_Character_BP_C_UpdateSuperFlightBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Boost Public
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::Is_Using_Super_Flight_Boost_Public()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Boost Public");

	ATropeognathus_Character_BP_C_Is_Using_Super_Flight_Boost_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlightBoost
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// double                         StartTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ATropeognathus_Character_BP_C::IsUsingSuperFlightBoost(double* StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlightBoost");

	ATropeognathus_Character_BP_C_IsUsingSuperFlightBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartTime != nullptr)
		*StartTime = params.StartTime;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketName
// ()
// Parameters:
// class APrimalCharacter**       DraggingChar                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ATropeognathus_Character_BP_C::BPGetDragSocketName(class APrimalCharacter** DraggingChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketName");

	ATropeognathus_Character_BP_C_BPGetDragSocketName_Params params;
	params.DraggingChar = DraggingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnCarriedStruggle
// ()

void ATropeognathus_Character_BP_C::OnCarriedStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnCarriedStruggle");

	ATropeognathus_Character_BP_C_OnCarriedStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWingGust
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::IsUsingWingGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWingGust");

	ATropeognathus_Character_BP_C_IsUsingWingGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Update Jet FX
// ()

void ATropeognathus_Character_BP_C::Update_Jet_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Update Jet FX");

	ATropeognathus_Character_BP_C_Update_Jet_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasFuel
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ATropeognathus_Character_BP_C::HasFuel(int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasFuel");

	ATropeognathus_Character_BP_C_HasFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quantity != nullptr)
		*Quantity = params.Quantity;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateFuel
// ()

void ATropeognathus_Character_BP_C::UpdateFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateFuel");

	ATropeognathus_Character_BP_C_UpdateFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDidSetCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDidSetCarriedCharacter");

	ATropeognathus_Character_BP_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasSaddle
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetIsSuperSaddle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::HasSaddle(bool* ret, bool* RetIsSuperSaddle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasSaddle");

	ATropeognathus_Character_BP_C_HasSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (RetIsSuperSaddle != nullptr)
		*RetIsSuperSaddle = params.RetIsSuperSaddle;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDrafting
// ()

void ATropeognathus_Character_BP_C::UpdateDrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDrafting");

	ATropeognathus_Character_BP_C_UpdateDrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketDinoName
// ()
// Parameters:
// class APrimalDinoCharacter**   aGrabbedDino                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ATropeognathus_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketDinoName");

	ATropeognathus_Character_BP_C_BPGetDragSocketDinoName_Params params;
	params.aGrabbedDino = aGrabbedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightStateData
// ()

void ATropeognathus_Character_BP_C::UpdateSuperFlightStateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightStateData");

	ATropeognathus_Character_BP_C_UpdateSuperFlightStateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAcceleration
// ()

void ATropeognathus_Character_BP_C::UpdateAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAcceleration");

	ATropeognathus_Character_BP_C_UpdateAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRotationRate
// ()

void ATropeognathus_Character_BP_C::UpdateRotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRotationRate");

	ATropeognathus_Character_BP_C_UpdateRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAllyAOE
// ()

void ATropeognathus_Character_BP_C::UpdateAllyAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAllyAOE");

	ATropeognathus_Character_BP_C_UpdateAllyAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetWindGustEpicenter
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATropeognathus_Character_BP_C::GetWindGustEpicenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetWindGustEpicenter");

	ATropeognathus_Character_BP_C_GetWindGustEpicenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DoWing GustAOE
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure, NetValidate)

void ATropeognathus_Character_BP_C::DoWing_GustAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DoWing GustAOE");

	ATropeognathus_Character_BP_C_DoWing_GustAOE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Diving Public
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TimeDiveStart                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::Is_Diving_Public(bool* ret, double* TimeDiveStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Diving Public");

	ATropeognathus_Character_BP_C_Is_Diving_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (TimeDiveStart != nullptr)
		*TimeDiveStart = params.TimeDiveStart;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifySetRider");

	ATropeognathus_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTPVOffset
// ()

void ATropeognathus_Character_BP_C::UpdateTPVOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTPVOffset");

	ATropeognathus_Character_BP_C_UpdateTPVOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateCheckQuickTurn
// ()

void ATropeognathus_Character_BP_C::UpdateCheckQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateCheckQuickTurn");

	ATropeognathus_Character_BP_C_UpdateCheckQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSpeed
// ()

void ATropeognathus_Character_BP_C::UpdateSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSpeed");

	ATropeognathus_Character_BP_C_UpdateSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDiving
// ()

void ATropeognathus_Character_BP_C::UpdateDiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDiving");

	ATropeognathus_Character_BP_C_UpdateDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsDiving
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TimeDiveStart                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TimeStoppedDiving              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::IsDiving(bool* ret, double* TimeDiveStart, double* TimeStoppedDiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsDiving");

	ATropeognathus_Character_BP_C_IsDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (TimeDiveStart != nullptr)
		*TimeDiveStart = params.TimeDiveStart;
	if (TimeStoppedDiving != nullptr)
		*TimeStoppedDiving = params.TimeStoppedDiving;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetAnimBP
// ()
// Parameters:
// class UTropeognathus_AnimBP_C* ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::GetAnimBP(class UTropeognathus_AnimBP_C** ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetAnimBP");

	ATropeognathus_Character_BP_C_GetAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCurrentPercentOfMaxFlySpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATropeognathus_Character_BP_C::GetCurrentPercentOfMaxFlySpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCurrentPercentOfMaxFlySpeed");

	ATropeognathus_Character_BP_C_GetCurrentPercentOfMaxFlySpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCDO
// ()
// Parameters:
// class ATropeognathus_Character_BP_C* AsTropeognathus_Character_BP_C (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::GetCDO(class ATropeognathus_Character_BP_C** AsTropeognathus_Character_BP_C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCDO");

	ATropeognathus_Character_BP_C_GetCDO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsTropeognathus_Character_BP_C != nullptr)
		*AsTropeognathus_Character_BP_C = params.AsTropeognathus_Character_BP_C;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Quick Turning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::Is_Quick_Turning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Quick Turning");

	ATropeognathus_Character_BP_C_Is_Quick_Turning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.EndQuickTurn
// ()

void ATropeognathus_Character_BP_C::EndQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.EndQuickTurn");

	ATropeognathus_Character_BP_C_EndQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartSuperFlightQuickTurn
// ()

void ATropeognathus_Character_BP_C::StartSuperFlightQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartSuperFlightQuickTurn");

	ATropeognathus_Character_BP_C_StartSuperFlightQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LastSuperFlightQuickTurn
// ()

void ATropeognathus_Character_BP_C::OnRep_LastSuperFlightQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LastSuperFlightQuickTurn");

	ATropeognathus_Character_BP_C_OnRep_LastSuperFlightQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightRoll
// ()

void ATropeognathus_Character_BP_C::UpdateSuperFlightRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightRoll");

	ATropeognathus_Character_BP_C_UpdateSuperFlightRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveRight");

	ATropeognathus_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTrails
// ()

void ATropeognathus_Character_BP_C::UpdateTrails()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTrails");

	ATropeognathus_Character_BP_C_UpdateTrails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ActivateTrails
// ()

void ATropeognathus_Character_BP_C::ActivateTrails()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ActivateTrails");

	ATropeognathus_Character_BP_C_ActivateTrails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DeactivateTrails
// ()

void ATropeognathus_Character_BP_C::DeactivateTrails()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DeactivateTrails");

	ATropeognathus_Character_BP_C_DeactivateTrails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.RidingTick");

	ATropeognathus_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnStartLandingNotify
// ()

void ATropeognathus_Character_BP_C::BP_OnStartLandingNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnStartLandingNotify");

	ATropeognathus_Character_BP_C_BP_OnStartLandingNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideFlyingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATropeognathus_Character_BP_C::BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideFlyingVelocity");

	ATropeognathus_Character_BP_C_BPOverrideFlyingVelocity_Params params;
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


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.K2_OnMovementModeChanged");

	ATropeognathus_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveForward");

	ATropeognathus_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ATropeognathus_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetHUDElements");

	ATropeognathus_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideCameraViewTarget
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

void ATropeognathus_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideCameraViewTarget");

	ATropeognathus_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnSetRunning
// ()
// Parameters:
// bool*                          bNewIsRunning                  (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BP_OnSetRunning(bool* bNewIsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnSetRunning");

	ATropeognathus_Character_BP_C_BP_OnSetRunning_Params params;
	params.bNewIsRunning = bNewIsRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifyClearRider");

	ATropeognathus_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleOnStopTargeting");

	ATropeognathus_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleControllerInitiatedAttack");

	ATropeognathus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BPModifyDesiredRotation(struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPModifyDesiredRotation");

	ATropeognathus_Character_BP_C_BPModifyDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPSetupTamed");

	ATropeognathus_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStartJump");

	ATropeognathus_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATropeognathus_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleUseButtonPress");

	ATropeognathus_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableCameraInterpolation
// ()

void ATropeognathus_Character_BP_C::DisableCameraInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableCameraInterpolation");

	ATropeognathus_Character_BP_C_DisableCameraInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LatchingSurfaceNormal
// ()

void ATropeognathus_Character_BP_C::OnRep_LatchingSurfaceNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LatchingSurfaceNormal");

	ATropeognathus_Character_BP_C_OnRep_LatchingSurfaceNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateLatchedDinoCamera
// ()

void ATropeognathus_Character_BP_C::UpdateLatchedDinoCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateLatchedDinoCamera");

	ATropeognathus_Character_BP_C_UpdateLatchedDinoCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Controller Follow ActorRotation
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::Controller_Follow_ActorRotation(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Controller Follow ActorRotation");

	ATropeognathus_Character_BP_C_Controller_Follow_ActorRotation_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReferenceLatchingObjects
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure, NetValidate)

void ATropeognathus_Character_BP_C::ReferenceLatchingObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReferenceLatchingObjects");

	ATropeognathus_Character_BP_C_ReferenceLatchingObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LineTrace
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BackwardLatching               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Somthing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Hit_Actor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::STATIC_LineTrace(class UMeshComponent* Mesh, const struct FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* Hit_Somthing, struct FVector* Location, struct FVector* Normal, class AActor** Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LineTrace");

	ATropeognathus_Character_BP_C_LineTrace_Params params;
	params.Mesh = Mesh;
	params.SocketName = SocketName;
	params.Actor = Actor;
	params.Offset = Offset;
	params.BackwardLatching = BackwardLatching;

	auto flags = fn->FunctionFlags;

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


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterruptLatching
// ()

void ATropeognathus_Character_BP_C::InterruptLatching()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterruptLatching");

	ATropeognathus_Character_BP_C_InterruptLatching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ProcessLatching
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::ProcessLatching(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ProcessLatching");

	ATropeognathus_Character_BP_C_ProcessLatching_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryLatch
// (NetRequest, Native, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           backwardsLatching              (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::TryLatch(const struct FVector& Offset, bool backwardsLatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryLatch");

	ATropeognathus_Character_BP_C_TryLatch_Params params;
	params.Offset = Offset;
	params.backwardsLatching = backwardsLatching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UserConstructionScript
// ()

void ATropeognathus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UserConstructionScript");

	ATropeognathus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_216
// ()

void ATropeognathus_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_216()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_216");

	ATropeognathus_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_216_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_215
// ()

void ATropeognathus_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_215()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_215");

	ATropeognathus_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_215_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_214
// ()

void ATropeognathus_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_214()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_214");

	ATropeognathus_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_214_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_213
// ()

void ATropeognathus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_213()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_213");

	ATropeognathus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_213_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_212
// ()

void ATropeognathus_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_212()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_212");

	ATropeognathus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_212_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_66
// ()

void ATropeognathus_Character_BP_C::InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_66()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_66");

	ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_66_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_211
// ()

void ATropeognathus_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_211()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_211");

	ATropeognathus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_211_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_210
// ()

void ATropeognathus_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_210()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_210");

	ATropeognathus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_210_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65
// ()

void ATropeognathus_Character_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65");

	ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64
// ()

void ATropeognathus_Character_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64");

	ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Latch
// ()
// Parameters:
// bool                           backwardsLatching              (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::Latch(bool backwardsLatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Latch");

	ATropeognathus_Character_BP_C_Latch_Params params;
	params.backwardsLatching = backwardsLatching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchStartAnimation
// ()

void ATropeognathus_Character_BP_C::LatchStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchStartAnimation");

	ATropeognathus_Character_BP_C_LatchStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatch
// ()
// Parameters:
// bool                           LatchingInterrupted            (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::UnLatch(bool LatchingInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatch");

	ATropeognathus_Character_BP_C_UnLatch_Params params;
	params.LatchingInterrupted = LatchingInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchStartAnimation
// ()

void ATropeognathus_Character_BP_C::UnLatchStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchStartAnimation");

	ATropeognathus_Character_BP_C_UnLatchStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ATropeognathus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MoveToUsingDirection
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::MoveToUsingDirection(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MoveToUsingDirection");

	ATropeognathus_Character_BP_C_MoveToUsingDirection_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchMoveAndRotate
// ()

void ATropeognathus_Character_BP_C::UnLatchMoveAndRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchMoveAndRotate");

	ATropeognathus_Character_BP_C_UnLatchMoveAndRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingStartEvent
// ()

void ATropeognathus_Character_BP_C::LatchingStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingStartEvent");

	ATropeognathus_Character_BP_C_LatchingStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingEndEvent
// ()

void ATropeognathus_Character_BP_C::LatchingEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingEndEvent");

	ATropeognathus_Character_BP_C_LatchingEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StopMovement
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::StopMovement(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StopMovement");

	ATropeognathus_Character_BP_C_StopMovement_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableFaceLatchingObjectRotation
// ()

void ATropeognathus_Character_BP_C::DisableFaceLatchingObjectRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableFaceLatchingObjectRotation");

	ATropeognathus_Character_BP_C_DisableFaceLatchingObjectRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetPassengersSurfaceCamera
// ()
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::SetPassengersSurfaceCamera(float Yaw, float Pitch, float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetPassengersSurfaceCamera");

	ATropeognathus_Character_BP_C_SetPassengersSurfaceCamera_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LocalFaceLatchingObject
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::LocalFaceLatchingObject(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LocalFaceLatchingObject");

	ATropeognathus_Character_BP_C_LocalFaceLatchingObject_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartedJump
// ()

void ATropeognathus_Character_BP_C::StartedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartedJump");

	ATropeognathus_Character_BP_C_StartedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerToggleSuperFlight
// ()

void ATropeognathus_Character_BP_C::ServerToggleSuperFlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerToggleSuperFlight");

	ATropeognathus_Character_BP_C_ServerToggleSuperFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSuperFightRightInput
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::ServerSuperFightRightInput(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSuperFightRightInput");

	ATropeognathus_Character_BP_C_ServerSuperFightRightInput_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestSuperFlightQuickTurn
// ()

void ATropeognathus_Character_BP_C::ServerRequestSuperFlightQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestSuperFlightQuickTurn");

	ATropeognathus_Character_BP_C_ServerRequestSuperFlightQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateQuickTurn
// ()

void ATropeognathus_Character_BP_C::UpdateQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateQuickTurn");

	ATropeognathus_Character_BP_C_UpdateQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestWindGust
// ()

void ATropeognathus_Character_BP_C::ServerRequestWindGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestWindGust");

	ATropeognathus_Character_BP_C_ServerRequestWindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGust
// ()

void ATropeognathus_Character_BP_C::AnimNotify_WindGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGust");

	ATropeognathus_Character_BP_C_AnimNotify_WindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientWindGust
// ()
// Parameters:
// struct FVector                 Epicenter                      (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::ClientWindGust(const struct FVector& Epicenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientWindGust");

	ATropeognathus_Character_BP_C_ClientWindGust_Params params;
	params.Epicenter = Epicenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustVFX
// ()

void ATropeognathus_Character_BP_C::AnimNotify_WindGustVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustVFX");

	ATropeognathus_Character_BP_C_AnimNotify_WindGustVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestFireFlakCannon
// ()
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::ServerRequestFireFlakCannon(const struct FVector& Dir, const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestFireFlakCannon");

	ATropeognathus_Character_BP_C_ServerRequestFireFlakCannon_Params params;
	params.Dir = Dir;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");

	ATropeognathus_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateLastForwardInputTime
// ()

void ATropeognathus_Character_BP_C::ServerUpdateLastForwardInputTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateLastForwardInputTime");

	ATropeognathus_Character_BP_C_ServerUpdateLastForwardInputTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DelayedSuperFlightEnd
// ()

void ATropeognathus_Character_BP_C::DelayedSuperFlightEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DelayedSuperFlightEnd");

	ATropeognathus_Character_BP_C_DelayedSuperFlightEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiSuperFlightEnd
// ()

void ATropeognathus_Character_BP_C::MultiSuperFlightEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiSuperFlightEnd");

	ATropeognathus_Character_BP_C_MultiSuperFlightEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientTagDraftee
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::ClientTagDraftee(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientTagDraftee");

	ATropeognathus_Character_BP_C_ClientTagDraftee_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180End
// ()

void ATropeognathus_Character_BP_C::WindGust180End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180End");

	ATropeognathus_Character_BP_C_WindGust180End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180Tick
// ()

void ATropeognathus_Character_BP_C::WindGust180Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180Tick");

	ATropeognathus_Character_BP_C_WindGust180Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustCheckFor180
// ()

void ATropeognathus_Character_BP_C::AnimNotify_WindGustCheckFor180()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustCheckFor180");

	ATropeognathus_Character_BP_C_AnimNotify_WindGustCheckFor180_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustBoost
// ()

void ATropeognathus_Character_BP_C::AnimNotify_WindGustBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustBoost");

	ATropeognathus_Character_BP_C_AnimNotify_WindGustBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequest180
// ()

void ATropeognathus_Character_BP_C::ServerRequest180()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequest180");

	ATropeognathus_Character_BP_C_ServerRequest180_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GamepadRightStickPressed
// ()

void ATropeognathus_Character_BP_C::GamepadRightStickPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GamepadRightStickPressed");

	ATropeognathus_Character_BP_C_GamepadRightStickPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimePressedJump
// ()

void ATropeognathus_Character_BP_C::ServerSetLastTimePressedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimePressedJump");

	ATropeognathus_Character_BP_C_ServerSetLastTimePressedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimeReleasedJump
// ()

void ATropeognathus_Character_BP_C::ServerSetLastTimeReleasedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimeReleasedJump");

	ATropeognathus_Character_BP_C_ServerSetLastTimeReleasedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueLanding
// ()

void ATropeognathus_Character_BP_C::QueueLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueLanding");

	ATropeognathus_Character_BP_C_QueueLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestLanding
// ()

void ATropeognathus_Character_BP_C::ServerRequestLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestLanding");

	ATropeognathus_Character_BP_C_ServerRequestLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnBola
// ()

void ATropeognathus_Character_BP_C::OnBola()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnBola");

	ATropeognathus_Character_BP_C_OnBola_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStartTime
// ()

void ATropeognathus_Character_BP_C::ServerUpdateRunningStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStartTime");

	ATropeognathus_Character_BP_C_ServerUpdateRunningStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStopTime
// ()

void ATropeognathus_Character_BP_C::ServerUpdateRunningStopTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStopTime");

	ATropeognathus_Character_BP_C_ServerUpdateRunningStopTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStarted
// ()

void ATropeognathus_Character_BP_C::MultiOnRunStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStarted");

	ATropeognathus_Character_BP_C_MultiOnRunStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStopped
// ()

void ATropeognathus_Character_BP_C::MultiOnRunStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStopped");

	ATropeognathus_Character_BP_C_MultiOnRunStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnSuperFlightStart
// ()

void ATropeognathus_Character_BP_C::MultiOnSuperFlightStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnSuperFlightStart");

	ATropeognathus_Character_BP_C_MultiOnSuperFlightStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueGrabAttack
// ()

void ATropeognathus_Character_BP_C::QueueGrabAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueGrabAttack");

	ATropeognathus_Character_BP_C_QueueGrabAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiThrusterVFXBoost
// ()

void ATropeognathus_Character_BP_C::MultiThrusterVFXBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiThrusterVFXBoost");

	ATropeognathus_Character_BP_C_MultiThrusterVFXBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ExecuteUbergraph_Tropeognathus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATropeognathus_Character_BP_C::ExecuteUbergraph_Tropeognathus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ExecuteUbergraph_Tropeognathus_Character_BP");

	ATropeognathus_Character_BP_C_ExecuteUbergraph_Tropeognathus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
