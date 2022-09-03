// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Desmodus_NightVision_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffOverrideInventoryAccessInput
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AController**            InController                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInputPressed                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Desmodus_NightVision_C::STATIC_BuffOverrideInventoryAccessInput(class AController** InController, bool* bInputPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffOverrideInventoryAccessInput");

	ABuff_Desmodus_NightVision_C_BuffOverrideInventoryAccessInput_Params params;
	params.InController = InController;
	params.bInputPressed = bInputPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Desmodus_NightVision_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPDeactivated");

	ABuff_Desmodus_NightVision_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ReceiveBeginPlay
// ()

void ABuff_Desmodus_NightVision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ReceiveBeginPlay");

	ABuff_Desmodus_NightVision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Desmodus_NightVision_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffTickClient");

	ABuff_Desmodus_NightVision_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ToggleNightVision
// ()

void ABuff_Desmodus_NightVision_C::ToggleNightVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ToggleNightVision");

	ABuff_Desmodus_NightVision_C_ToggleNightVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Desmodus_NightVision_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPTryMultiUse");

	ABuff_Desmodus_NightVision_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPGetMultiUseEntries
// (Exec, Static, MulticastDelegate, Private, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_Desmodus_NightVision_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPGetMultiUseEntries");

	ABuff_Desmodus_NightVision_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Desmodus_NightVision_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPSetupForInstigator");

	ABuff_Desmodus_NightVision_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.SetPPColor
// ()
// Parameters:
// struct FLinearColor            NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Desmodus_NightVision_C::SetPPColor(const struct FLinearColor& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.SetPPColor");

	ABuff_Desmodus_NightVision_C_SetPPColor_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.UserConstructionScript
// ()

void ABuff_Desmodus_NightVision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.UserConstructionScript");

	ABuff_Desmodus_NightVision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ExecuteUbergraph_Buff_Desmodus_NightVision
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Desmodus_NightVision_C::ExecuteUbergraph_Buff_Desmodus_NightVision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ExecuteUbergraph_Buff_Desmodus_NightVision");

	ABuff_Desmodus_NightVision_C_ExecuteUbergraph_Buff_Desmodus_NightVision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
