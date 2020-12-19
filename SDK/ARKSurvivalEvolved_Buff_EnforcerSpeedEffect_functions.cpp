// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EnforcerSpeedEffect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EnforcerSpeedEffect_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BPActivated");

	ABuff_EnforcerSpeedEffect_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EnforcerSpeedEffect_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BuffTickClient");

	ABuff_EnforcerSpeedEffect_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_EnforcerSpeedEffect_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BPCustomAllowAddBuff");

	ABuff_EnforcerSpeedEffect_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.UserConstructionScript
// ()

void ABuff_EnforcerSpeedEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.UserConstructionScript");

	ABuff_EnforcerSpeedEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.ExecuteUbergraph_Buff_EnforcerSpeedEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EnforcerSpeedEffect_C::ExecuteUbergraph_Buff_EnforcerSpeedEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.ExecuteUbergraph_Buff_EnforcerSpeedEffect");

	ABuff_EnforcerSpeedEffect_C_ExecuteUbergraph_Buff_EnforcerSpeedEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
