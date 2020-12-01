// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossDragon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEndBossDragon_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.BPAdjustDamage");

	AEndBossDragon_Character_BP_C_BPAdjustDamage_Params params;
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


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.UserConstructionScript
// ()

void AEndBossDragon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.UserConstructionScript");

	AEndBossDragon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_0__FinishedFunc
// ()

void AEndBossDragon_Character_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_0__FinishedFunc");

	AEndBossDragon_Character_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_0__UpdateFunc
// ()

void AEndBossDragon_Character_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_0__UpdateFunc");

	AEndBossDragon_Character_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_2__FinishedFunc
// ()

void AEndBossDragon_Character_BP_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_2__FinishedFunc");

	AEndBossDragon_Character_BP_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_2__UpdateFunc
// ()

void AEndBossDragon_Character_BP_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_2__UpdateFunc");

	AEndBossDragon_Character_BP_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.StartRipple
// ()

void AEndBossDragon_Character_BP_C::StartRipple()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.StartRipple");

	AEndBossDragon_Character_BP_C_StartRipple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ReceiveBeginPlay
// ()

void AEndBossDragon_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ReceiveBeginPlay");

	AEndBossDragon_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossDragon_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.OnDied_Event");

	AEndBossDragon_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.StartPulse
// ()

void AEndBossDragon_Character_BP_C::StartPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.StartPulse");

	AEndBossDragon_Character_BP_C_StartPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossDragon_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ReceiveTick");

	AEndBossDragon_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.AnimNotify_FireBreath
// ()

void AEndBossDragon_Character_BP_C::AnimNotify_FireBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.AnimNotify_FireBreath");

	AEndBossDragon_Character_BP_C_AnimNotify_FireBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ExecuteUbergraph_EndBossDragon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossDragon_Character_BP_C::ExecuteUbergraph_EndBossDragon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ExecuteUbergraph_EndBossDragon_Character_BP");

	AEndBossDragon_Character_BP_C_ExecuteUbergraph_EndBossDragon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
