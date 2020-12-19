// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trike_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trike_Character_BP.Trike_Character_BP_C.Stop Ram Attack Buildup
// ()

void ATrike_Character_BP_C::Stop_Ram_Attack_Buildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Stop Ram Attack Buildup");

	ATrike_Character_BP_C_Stop_Ram_Attack_Buildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.GetRammingSpeedMax
// ()
// Parameters:
// float                          MaxSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::GetRammingSpeedMax(float* MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.GetRammingSpeedMax");

	ATrike_Character_BP_C_GetRammingSpeedMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxSpeed != nullptr)
		*MaxSpeed = params.MaxSpeed;
}


// Function Trike_Character_BP.Trike_Character_BP_C.CanTickStartedRam
// ()
// Parameters:
// bool                           Tick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::CanTickStartedRam(bool* Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CanTickStartedRam");

	ATrike_Character_BP_C_CanTickStartedRam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;
}


// Function Trike_Character_BP.Trike_Character_BP_C.Start Ram Attack Buildup
// ()

void ATrike_Character_BP_C::Start_Ram_Attack_Buildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Start Ram Attack Buildup");

	ATrike_Character_BP_C_Start_Ram_Attack_Buildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ATrike_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.CanStartRamAttack
// ()
// Parameters:
// bool                           AllowedToRam                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::CanStartRamAttack(bool* AllowedToRam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CanStartRamAttack");

	ATrike_Character_BP_C_CanStartRamAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowedToRam != nullptr)
		*AllowedToRam = params.AllowedToRam;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrike_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ATrike_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Started
// ()
// Parameters:
// float*                         RamBuildupTime                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         RamDuration                    (Parm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::Handle_Ram_Started(float* RamBuildupTime, float* RamDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Started");

	ATrike_Character_BP_C_Handle_Ram_Started_Params params;
	params.RamBuildupTime = RamBuildupTime;
	params.RamDuration = RamDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Ended
// ()
// Parameters:
// bool*                          HitSomething                   (Parm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::Handle_Ram_Ended(bool* HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Ended");

	ATrike_Character_BP_C_Handle_Ram_Ended_Params params;
	params.HitSomething = HitSomething;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.Calculate Ram Duration
// ()
// Parameters:
// float*                         HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::Calculate_Ram_Duration(float* HoldTime, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Calculate Ram Duration");

	ATrike_Character_BP_C_Calculate_Ram_Duration_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrike_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanRiderAttack");

	ATrike_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BPHandleControllerInitiatedAttack
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrike_Character_BP_C::STATIC_BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPHandleControllerInitiatedAttack");

	ATrike_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrike_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPHandleOnStopTargeting");

	ATrike_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrike_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");

	ATrike_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrike_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanAttack");

	ATrike_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trike_Character_BP.Trike_Character_BP_C.GetPawnRootComponent
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     AsPrimitiveComponent           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::GetPawnRootComponent(class AActor* Target, class UPrimitiveComponent** AsPrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.GetPawnRootComponent");

	ATrike_Character_BP_C_GetPawnRootComponent_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPrimitiveComponent != nullptr)
		*AsPrimitiveComponent = params.AsPrimitiveComponent;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BPAdjustDamage
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrike_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPAdjustDamage");

	ATrike_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trike_Character_BP.Trike_Character_BP_C.UserConstructionScript
// ()

void ATrike_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.UserConstructionScript");

	ATrike_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.DoReflectDamage
// ()
// Parameters:
// class APawn*                   DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::DoReflectDamage(class APawn* DamageTarget, float Damage, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.DoReflectDamage");

	ATrike_Character_BP_C_DoReflectDamage_Params params;
	params.DamageTarget = DamageTarget;
	params.Damage = Damage;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.MulticastReflectDamageEffect
// ()
// Parameters:
// struct FName                   FromBone                       (Parm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::MulticastReflectDamageEffect(const struct FName& FromBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.MulticastReflectDamageEffect");

	ATrike_Character_BP_C_MulticastReflectDamageEffect_Params params;
	params.FromBone = FromBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.ReceiveBeginPlay
// ()

void ATrike_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.ReceiveBeginPlay");

	ATrike_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.CheckRivalryTick
// ()

void ATrike_Character_BP_C::CheckRivalryTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CheckRivalryTick");

	ATrike_Character_BP_C_CheckRivalryTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.RamBuildupEndEvent
// ()

void ATrike_Character_BP_C::RamBuildupEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.RamBuildupEndEvent");

	ATrike_Character_BP_C_RamBuildupEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.BP_OnJumpPressed
// ()

void ATrike_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BP_OnJumpPressed");

	ATrike_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_Character_BP.Trike_Character_BP_C.ExecuteUbergraph_Trike_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrike_Character_BP_C::ExecuteUbergraph_Trike_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.ExecuteUbergraph_Trike_Character_BP");

	ATrike_Character_BP_C_ExecuteUbergraph_Trike_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
