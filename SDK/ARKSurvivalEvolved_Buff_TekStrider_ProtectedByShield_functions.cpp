// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_ProtectedByShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_ProtectedByShield_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BuffTickClient");

	ABuff_TekStrider_ProtectedByShield_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPAdjustRadialDamage
// (NetReliable, Native, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// float*                         currentDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRadialDamageEvent      DamageEvent                    (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekStrider_ProtectedByShield_C::BPAdjustRadialDamage(float* currentDamage, struct FVector* Origin, struct FRadialDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPAdjustRadialDamage");

	ABuff_TekStrider_ProtectedByShield_C_BPAdjustRadialDamage_Params params;
	params.currentDamage = currentDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_ProtectedByShield_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPSetupForInstigator");

	ABuff_TekStrider_ProtectedByShield_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.UserConstructionScript
// ()

void ABuff_TekStrider_ProtectedByShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.UserConstructionScript");

	ABuff_TekStrider_ProtectedByShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.ExecuteUbergraph_Buff_TekStrider_ProtectedByShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_ProtectedByShield_C::ExecuteUbergraph_Buff_TekStrider_ProtectedByShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.ExecuteUbergraph_Buff_TekStrider_ProtectedByShield");

	ABuff_TekStrider_ProtectedByShield_C_ExecuteUbergraph_Buff_TekStrider_ProtectedByShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
