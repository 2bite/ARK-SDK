// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Titanosaur_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ATitanosaur_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");

	ATitanosaur_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATitanosaur_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BlueprintCanAttack");

	ATitanosaur_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATitanosaur_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BlueprintCanRiderAttack");

	ATitanosaur_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPSetupTamed
// (Event, Static, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ATitanosaur_Character_BP_C::STATIC_BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPSetupTamed");

	ATitanosaur_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.CheckTorporDistanceTravel
// ()
// Parameters:
// float                          torporIn                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           outValidDistanceTravel         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATitanosaur_Character_BP_C::CheckTorporDistanceTravel(float torporIn, bool* outValidDistanceTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.CheckTorporDistanceTravel");

	ATitanosaur_Character_BP_C_CheckTorporDistanceTravel_Params params;
	params.torporIn = torporIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outValidDistanceTravel != nullptr)
		*outValidDistanceTravel = params.outValidDistanceTravel;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.IsHeadObstructed
// (Native, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           OutVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATitanosaur_Character_BP_C::STATIC_IsHeadObstructed(bool* OutVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.IsHeadObstructed");

	ATitanosaur_Character_BP_C_IsHeadObstructed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVal != nullptr)
		*OutVal = params.OutVal;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.HasMovedRecently
// ()
// Parameters:
// bool                           bHasMoved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATitanosaur_Character_BP_C::HasMovedRecently(bool* bHasMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.HasMovedRecently");

	ATitanosaur_Character_BP_C_HasMovedRecently_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasMoved != nullptr)
		*bHasMoved = params.bHasMoved;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.GiveKillExperience
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATitanosaur_Character_BP_C::GiveKillExperience()
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.GiveKillExperience");

	ATitanosaur_Character_BP_C_GiveKillExperience_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPPostInitializeComponents
// ()

void ATitanosaur_Character_BP_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPPostInitializeComponents");

	ATitanosaur_Character_BP_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ReceiveBeginPlay
// ()

void ATitanosaur_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ReceiveBeginPlay");

	ATitanosaur_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATitanosaur_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPAdjustDamage");

	ATitanosaur_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.UserConstructionScript
// ()

void ATitanosaur_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.UserConstructionScript");

	ATitanosaur_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ForceTamedTick
// ()

void ATitanosaur_Character_BP_C::ForceTamedTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ForceTamedTick");

	ATitanosaur_Character_BP_C_ForceTamedTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ClearTorporHit
// ()

void ATitanosaur_Character_BP_C::ClearTorporHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ClearTorporHit");

	ATitanosaur_Character_BP_C_ClearTorporHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.TorporHit
// ()

void ATitanosaur_Character_BP_C::TorporHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.TorporHit");

	ATitanosaur_Character_BP_C_TorporHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATitanosaur_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ReceiveTick");

	ATitanosaur_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ExecuteUbergraph_Titanosaur_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATitanosaur_Character_BP_C::ExecuteUbergraph_Titanosaur_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ExecuteUbergraph_Titanosaur_Character_BP");

	ATitanosaur_Character_BP_C_ExecuteUbergraph_Titanosaur_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
