// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BiglyPostProccess_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_BiglyPostProccess_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.GetBuffPostprocessIntensity");

	ABuff_BiglyPostProccess_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BiglyPostProccess_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.AllowPostProcessEffect");

	ABuff_BiglyPostProccess_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Is Valid PounceTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_BiglyPostProccess_C::Is_Valid_PounceTarget(class APrimalCharacter* Target, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Is Valid PounceTarget");

	ABuff_BiglyPostProccess_C_Is_Valid_PounceTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BPGetHUDElements
// (Native, Event, Static, Public, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_BiglyPostProccess_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BPGetHUDElements");

	ABuff_BiglyPostProccess_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.IsAnotherDinoAlreadyAttached
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_BiglyPostProccess_C::IsAnotherDinoAlreadyAttached(class AActor* Target, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.IsAnotherDinoAlreadyAttached");

	ABuff_BiglyPostProccess_C_IsAnotherDinoAlreadyAttached_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Can Ignore Traced Actor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeIgnored                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_BiglyPostProccess_C::Can_Ignore_Traced_Actor(class AActor* Actor, bool* CanBeIgnored)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Can Ignore Traced Actor");

	ABuff_BiglyPostProccess_C_Can_Ignore_Traced_Actor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanBeIgnored != nullptr)
		*CanBeIgnored = params.CanBeIgnored;
}


// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BuffTickClient
// (Native, Event, NetMulticast, Public, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BiglyPostProccess_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BuffTickClient");

	ABuff_BiglyPostProccess_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.UserConstructionScript
// ()

void ABuff_BiglyPostProccess_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.UserConstructionScript");

	ABuff_BiglyPostProccess_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.ExecuteUbergraph_Buff_BiglyPostProccess
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BiglyPostProccess_C::ExecuteUbergraph_Buff_BiglyPostProccess(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.ExecuteUbergraph_Buff_BiglyPostProccess");

	ABuff_BiglyPostProccess_C_ExecuteUbergraph_Buff_BiglyPostProccess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
