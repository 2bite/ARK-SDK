// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBed_Strider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekBed_Strider.TekBed_Strider_C.BPReleasedPlayer
// ()
// Parameters:
// class AShooterCharacter**      ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekBed_Strider_C::BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed_Strider.TekBed_Strider_C.BPReleasedPlayer");

	ATekBed_Strider_C_BPReleasedPlayer_Params params;
	params.ReleasedChar = ReleasedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBed_Strider.TekBed_Strider_C.ReceiveBeginPlay
// ()

void ATekBed_Strider_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed_Strider.TekBed_Strider_C.ReceiveBeginPlay");

	ATekBed_Strider_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBed_Strider.TekBed_Strider_C.BPAllowSeating
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekBed_Strider_C::BPAllowSeating(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed_Strider.TekBed_Strider_C.BPAllowSeating");

	ATekBed_Strider_C_BPAllowSeating_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekBed_Strider.TekBed_Strider_C.BPGetMultiUseEntries
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekBed_Strider_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed_Strider.TekBed_Strider_C.BPGetMultiUseEntries");

	ATekBed_Strider_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekBed_Strider.TekBed_Strider_C.UserConstructionScript
// ()

void ATekBed_Strider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed_Strider.TekBed_Strider_C.UserConstructionScript");

	ATekBed_Strider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBed_Strider.TekBed_Strider_C.ExecuteUbergraph_TekBed_Strider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekBed_Strider_C::ExecuteUbergraph_TekBed_Strider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed_Strider.TekBed_Strider_C.ExecuteUbergraph_TekBed_Strider");

	ATekBed_Strider_C_ExecuteUbergraph_TekBed_Strider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
