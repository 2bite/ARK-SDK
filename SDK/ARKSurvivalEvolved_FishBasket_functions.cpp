// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishBasket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FishBasket.FishBasket_C.ReceiveBeginPlay
// ()

void AFishBasket_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasket.FishBasket_C.ReceiveBeginPlay");

	AFishBasket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishBasket.FishBasket_C.TrapFish
// (NetRequest, NetResponse, MulticastDelegate, Private, Protected, NetServer, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalDinoCharacter*    TrapFish                       (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AFishBasket_C::TrapFish(class APrimalDinoCharacter* TrapFish, class APlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasket.FishBasket_C.TrapFish");

	AFishBasket_C_TrapFish_Params params;
	params.TrapFish = TrapFish;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishBasket.FishBasket_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFishBasket_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasket.FishBasket_C.BPTryMultiUse");

	AFishBasket_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FishBasket.FishBasket_C.BPGetMultiUseEntries
// (Native, Event, NetResponse, MulticastDelegate, Private, NetServer, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AFishBasket_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasket.FishBasket_C.BPGetMultiUseEntries");

	AFishBasket_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function FishBasket.FishBasket_C.UserConstructionScript
// ()

void AFishBasket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasket.FishBasket_C.UserConstructionScript");

	AFishBasket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishBasket.FishBasket_C.NetCapturedCreature
// ()

void AFishBasket_C::NetCapturedCreature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasket.FishBasket_C.NetCapturedCreature");

	AFishBasket_C_NetCapturedCreature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishBasket.FishBasket_C.ExecuteUbergraph_FishBasket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFishBasket_C::ExecuteUbergraph_FishBasket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishBasket.FishBasket_C.ExecuteUbergraph_FishBasket");

	AFishBasket_C_ExecuteUbergraph_FishBasket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
