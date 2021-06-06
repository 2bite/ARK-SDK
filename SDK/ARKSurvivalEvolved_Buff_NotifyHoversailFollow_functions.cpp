// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NotifyHoversailFollow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BPGetHUDElements
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_NotifyHoversailFollow_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BPGetHUDElements");

	ABuff_NotifyHoversailFollow_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.Set and Pass Loc
// ()

void ABuff_NotifyHoversailFollow_C::Set_and_Pass_Loc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.Set and Pass Loc");

	ABuff_NotifyHoversailFollow_C_Set_and_Pass_Loc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NotifyHoversailFollow_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickServer");

	ABuff_NotifyHoversailFollow_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NotifyHoversailFollow_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickClient");

	ABuff_NotifyHoversailFollow_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.UserConstructionScript
// ()

void ABuff_NotifyHoversailFollow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.UserConstructionScript");

	ABuff_NotifyHoversailFollow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.ExecuteUbergraph_Buff_NotifyHoversailFollow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NotifyHoversailFollow_C::ExecuteUbergraph_Buff_NotifyHoversailFollow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.ExecuteUbergraph_Buff_NotifyHoversailFollow");

	ABuff_NotifyHoversailFollow_C_ExecuteUbergraph_Buff_NotifyHoversailFollow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
