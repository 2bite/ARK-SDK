// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MountedSino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MountedSino.Buff_MountedSino_C.GetSinoFoodVals
// ()
// Parameters:
// float                          current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MountedSino_C::GetSinoFoodVals(float* current, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.GetSinoFoodVals");

	ABuff_MountedSino_C_GetSinoFoodVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (current != nullptr)
		*current = params.current;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Buff_MountedSino.Buff_MountedSino_C.BPClientDoMultiUse
// (NetReliable, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MountedSino_C::STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.BPClientDoMultiUse");

	ABuff_MountedSino_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MountedSino.Buff_MountedSino_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MountedSino_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.BPTryMultiUse");

	ABuff_MountedSino_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MountedSino.Buff_MountedSino_C.BPGetMultiUseEntries
// (Exec, Event, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_MountedSino_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.BPGetMultiUseEntries");

	ABuff_MountedSino_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_MountedSino.Buff_MountedSino_C.BPGetHUDElements
// (Native, Event, NetResponse, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_MountedSino_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.BPGetHUDElements");

	ABuff_MountedSino_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_MountedSino.Buff_MountedSino_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MountedSino_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.BuffTickServer");

	ABuff_MountedSino_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MountedSino.Buff_MountedSino_C.SetLastScreamTime
// ()
// Parameters:
// double                         Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MountedSino_C::SetLastScreamTime(double Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.SetLastScreamTime");

	ABuff_MountedSino_C_SetLastScreamTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MountedSino.Buff_MountedSino_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MountedSino_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.BuffTickClient");

	ABuff_MountedSino_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MountedSino.Buff_MountedSino_C.HideCrosshair
// ()

void ABuff_MountedSino_C::HideCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.HideCrosshair");

	ABuff_MountedSino_C_HideCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MountedSino.Buff_MountedSino_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor ABuff_MountedSino_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.BPGetCrosshairColor");

	ABuff_MountedSino_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MountedSino.Buff_MountedSino_C.CheckForBuddyThrow
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)

void ABuff_MountedSino_C::STATIC_CheckForBuddyThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.CheckForBuddyThrow");

	ABuff_MountedSino_C_CheckForBuddyThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MountedSino.Buff_MountedSino_C.GetSinoStaminaVals
// ()
// Parameters:
// float                          current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MountedSino_C::GetSinoStaminaVals(float* current, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.GetSinoStaminaVals");

	ABuff_MountedSino_C_GetSinoStaminaVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (current != nullptr)
		*current = params.current;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Buff_MountedSino.Buff_MountedSino_C.UserConstructionScript
// ()

void ABuff_MountedSino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.UserConstructionScript");

	ABuff_MountedSino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MountedSino.Buff_MountedSino_C.Server_SetMountedSinoBuddyChar
// ()
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MountedSino_C::Server_SetMountedSinoBuddyChar(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.Server_SetMountedSinoBuddyChar");

	ABuff_MountedSino_C_Server_SetMountedSinoBuddyChar_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MountedSino.Buff_MountedSino_C.ExecuteUbergraph_Buff_MountedSino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MountedSino_C::ExecuteUbergraph_Buff_MountedSino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MountedSino.Buff_MountedSino_C.ExecuteUbergraph_Buff_MountedSino");

	ABuff_MountedSino_C_ExecuteUbergraph_Buff_MountedSino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
