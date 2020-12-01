// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pachyrhino_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, Exec, Native, NetMulticast, Delegate, NetServer, DLLImport)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APachyrhino_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintAdjustOutputDamage");

	APachyrhino_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.OnDecidedToFlee
// (Exec, Event, NetMulticast, Delegate, NetServer, DLLImport)

void APachyrhino_Character_BP_C::OnDecidedToFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.OnDecidedToFlee");

	APachyrhino_Character_BP_C_OnDecidedToFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APachyrhino_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintCanAttack");

	APachyrhino_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APachyrhino_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintCanRiderAttack");

	APachyrhino_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.UserConstructionScript
// ()

void APachyrhino_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.UserConstructionScript");

	APachyrhino_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APachyrhino_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	APachyrhino_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void APachyrhino_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BPDoAttack");

	APachyrhino_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.DelayedAttack
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void APachyrhino_Character_BP_C::DelayedAttack(float Delay, int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.DelayedAttack");

	APachyrhino_Character_BP_C_DelayedAttack_Params params;
	params.Delay = Delay;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.ExecuteUbergraph_Pachyrhino_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APachyrhino_Character_BP_C::ExecuteUbergraph_Pachyrhino_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.ExecuteUbergraph_Pachyrhino_Character_BP");

	APachyrhino_Character_BP_C_ExecuteUbergraph_Pachyrhino_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
