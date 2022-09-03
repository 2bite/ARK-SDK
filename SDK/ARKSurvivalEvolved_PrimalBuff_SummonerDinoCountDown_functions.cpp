// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalBuff_SummonerDinoCountDown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalBuff_SummonerDinoCountDown_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BuffAdjustDamage");

	APrimalBuff_SummonerDinoCountDown_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ClearImmobilization
// ()

void APrimalBuff_SummonerDinoCountDown_C::ClearImmobilization()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ClearImmobilization");

	APrimalBuff_SummonerDinoCountDown_C_ClearImmobilization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.SetSuicideTimer
// ()
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff_SummonerDinoCountDown_C::SetSuicideTimer(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.SetSuicideTimer");

	APrimalBuff_SummonerDinoCountDown_C_SetSuicideTimer_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.Suicide
// ()

void APrimalBuff_SummonerDinoCountDown_C::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.Suicide");

	APrimalBuff_SummonerDinoCountDown_C_Suicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BPSetupForInstigator
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff_SummonerDinoCountDown_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BPSetupForInstigator");

	APrimalBuff_SummonerDinoCountDown_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.UserConstructionScript
// ()

void APrimalBuff_SummonerDinoCountDown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.UserConstructionScript");

	APrimalBuff_SummonerDinoCountDown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.OnInstigatorDied
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff_SummonerDinoCountDown_C::OnInstigatorDied(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.OnInstigatorDied");

	APrimalBuff_SummonerDinoCountDown_C_OnInstigatorDied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff_SummonerDinoCountDown_C::ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown");

	APrimalBuff_SummonerDinoCountDown_C_ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
