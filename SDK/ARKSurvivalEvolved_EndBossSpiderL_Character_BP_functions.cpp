// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossSpiderL_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEndBossSpiderL_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.BPAdjustDamage");

	AEndBossSpiderL_Character_BP_C_BPAdjustDamage_Params params;
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


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.UserConstructionScript
// ()

void AEndBossSpiderL_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.UserConstructionScript");

	AEndBossSpiderL_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_1__FinishedFunc
// ()

void AEndBossSpiderL_Character_BP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_1__FinishedFunc");

	AEndBossSpiderL_Character_BP_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_1__UpdateFunc
// ()

void AEndBossSpiderL_Character_BP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_1__UpdateFunc");

	AEndBossSpiderL_Character_BP_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_2__FinishedFunc
// ()

void AEndBossSpiderL_Character_BP_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_2__FinishedFunc");

	AEndBossSpiderL_Character_BP_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_2__UpdateFunc
// ()

void AEndBossSpiderL_Character_BP_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_2__UpdateFunc");

	AEndBossSpiderL_Character_BP_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.StartRipple
// ()

void AEndBossSpiderL_Character_BP_C::StartRipple()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.StartRipple");

	AEndBossSpiderL_Character_BP_C_StartRipple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossSpiderL_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.OnDied_Event");

	AEndBossSpiderL_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.StartPulse
// ()

void AEndBossSpiderL_Character_BP_C::StartPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.StartPulse");

	AEndBossSpiderL_Character_BP_C_StartPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.ReceiveBeginPlay
// ()

void AEndBossSpiderL_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.ReceiveBeginPlay");

	AEndBossSpiderL_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.ExecuteUbergraph_EndBossSpiderL_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossSpiderL_Character_BP_C::ExecuteUbergraph_EndBossSpiderL_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.ExecuteUbergraph_EndBossSpiderL_Character_BP");

	AEndBossSpiderL_Character_BP_C_ExecuteUbergraph_EndBossSpiderL_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
