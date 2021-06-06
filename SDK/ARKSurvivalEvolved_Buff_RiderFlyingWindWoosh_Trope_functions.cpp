// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_Trope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.UpdateSFX
// ()

void ABuff_RiderFlyingWindWoosh_Trope_C::UpdateSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.UpdateSFX");

	ABuff_RiderFlyingWindWoosh_Trope_C_UpdateSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffType
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABuff_RiderFlyingWindWoosh_Trope_C::GetBuffType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffType");

	ABuff_RiderFlyingWindWoosh_Trope_C_GetBuffType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffDescription
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, Private, HasDefaults, DLLImport, NetValidate)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_RiderFlyingWindWoosh_Trope_C::GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffDescription");

	ABuff_RiderFlyingWindWoosh_Trope_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BPGetHUDElements
// (Net, Exec, Native, Public, HasDefaults, DLLImport, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_RiderFlyingWindWoosh_Trope_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BPGetHUDElements");

	ABuff_RiderFlyingWindWoosh_Trope_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RiderFlyingWindWoosh_Trope_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.AllowPostProcessEffect");

	ABuff_RiderFlyingWindWoosh_Trope_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_RiderFlyingWindWoosh_Trope_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffPostprocessIntensity");

	ABuff_RiderFlyingWindWoosh_Trope_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RiderFlyingWindWoosh_Trope_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BPCustomAllowAddBuff");

	ABuff_RiderFlyingWindWoosh_Trope_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderFlyingWindWoosh_Trope_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BuffTickClient");

	ABuff_RiderFlyingWindWoosh_Trope_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.UserConstructionScript
// ()

void ABuff_RiderFlyingWindWoosh_Trope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.UserConstructionScript");

	ABuff_RiderFlyingWindWoosh_Trope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Trope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderFlyingWindWoosh_Trope_C::ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Trope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Trope");

	ABuff_RiderFlyingWindWoosh_Trope_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Trope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
