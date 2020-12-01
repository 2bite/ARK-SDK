// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Baryonyx_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaryonyx_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPSetupTamed");

	ABaryonyx_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.IsActorHealingFish
// ()
// Parameters:
// class AActor*                  ActorToTest                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABaryonyx_Character_BP_C::IsActorHealingFish(class AActor* ActorToTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.IsActorHealingFish");

	ABaryonyx_Character_BP_C_IsActorHealingFish_Params params;
	params.ActorToTest = ActorToTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPTimerServer
// ()

void ABaryonyx_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPTimerServer");

	ABaryonyx_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABaryonyx_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintCanRiderAttack");

	ABaryonyx_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BaryCanAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RetVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaryonyx_Character_BP_C::BaryCanAttack(int AttackIndex, bool* RetVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BaryCanAttack");

	ABaryonyx_Character_BP_C_BaryCanAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetVal != nullptr)
		*RetVal = params.RetVal;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABaryonyx_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintCanAttack");

	ABaryonyx_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPKilledSomethingEvent
// ()
// Parameters:
// class APrimalCharacter**       killedTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void ABaryonyx_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter** killedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPKilledSomethingEvent");

	ABaryonyx_Character_BP_C_BPKilledSomethingEvent_Params params;
	params.killedTarget = killedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.K2_OnMovementModeChanged
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    newMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 newCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaryonyx_Character_BP_C::STATIC_K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* PrevCustomMode, unsigned char* newCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.K2_OnMovementModeChanged");

	ABaryonyx_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.newMovementMode = newMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.newCustomMode = newCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABaryonyx_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintAdjustOutputDamage");

	ABaryonyx_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPGetMultiUseEntries
// (Exec, Event, NetMulticast, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABaryonyx_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPGetMultiUseEntries");

	ABaryonyx_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABaryonyx_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPTryMultiUse");

	ABaryonyx_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.UserConstructionScript
// ()

void ABaryonyx_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.UserConstructionScript");

	ABaryonyx_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.AnimNotify_StunAttackStart
// ()

void ABaryonyx_Character_BP_C::AnimNotify_StunAttackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.AnimNotify_StunAttackStart");

	ABaryonyx_Character_BP_C_AnimNotify_StunAttackStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.AnimNotify_StunAttackMid
// ()

void ABaryonyx_Character_BP_C::AnimNotify_StunAttackMid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.AnimNotify_StunAttackMid");

	ABaryonyx_Character_BP_C_AnimNotify_StunAttackMid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.ExecuteUbergraph_Baryonyx_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaryonyx_Character_BP_C::ExecuteUbergraph_Baryonyx_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.ExecuteUbergraph_Baryonyx_Character_BP");

	ABaryonyx_Character_BP_C_ExecuteUbergraph_Baryonyx_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
