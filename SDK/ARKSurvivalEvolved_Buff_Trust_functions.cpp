// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Trust_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Trust.Buff_Trust_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Trust_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Trust.Buff_Trust_C.BuffAdjustDamage");

	ABuff_Trust_C_BuffAdjustDamage_Params params;
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


// Function Buff_Trust.Buff_Trust_C.OnCourageRoar
// ()
// Parameters:
// bool*                          canSwitchToCourage             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amountOverride                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          useAmountOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          sendMessageToRider             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Trust_C::OnCourageRoar(bool* canSwitchToCourage, float* amountOverride, bool* useAmountOverride, bool* sendMessageToRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Trust.Buff_Trust_C.OnCourageRoar");

	ABuff_Trust_C_OnCourageRoar_Params params;
	params.canSwitchToCourage = canSwitchToCourage;
	params.amountOverride = amountOverride;
	params.useAmountOverride = useAmountOverride;
	params.sendMessageToRider = sendMessageToRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Trust.Buff_Trust_C.GetTeamColorForParticles
// ()
// Parameters:
// struct FVector                 finalColor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Trust_C::GetTeamColorForParticles(struct FVector* finalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Trust.Buff_Trust_C.GetTeamColorForParticles");

	ABuff_Trust_C_GetTeamColorForParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (finalColor != nullptr)
		*finalColor = params.finalColor;
}


// Function Buff_Trust.Buff_Trust_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Trust_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Trust.Buff_Trust_C.BuffTickServer");

	ABuff_Trust_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Trust.Buff_Trust_C.UserConstructionScript
// ()

void ABuff_Trust_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Trust.Buff_Trust_C.UserConstructionScript");

	ABuff_Trust_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Trust.Buff_Trust_C.ExecuteUbergraph_Buff_Trust
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Trust_C::ExecuteUbergraph_Buff_Trust(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Trust.Buff_Trust_C.ExecuteUbergraph_Buff_Trust");

	ABuff_Trust_C_ExecuteUbergraph_Buff_Trust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
