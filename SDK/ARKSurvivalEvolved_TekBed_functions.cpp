// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekBed.TekBed_C.BPReleasedPlayer
// ()
// Parameters:
// class AShooterCharacter**      ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekBed_C::BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed.TekBed_C.BPReleasedPlayer");

	ATekBed_C_BPReleasedPlayer_Params params;
	params.ReleasedChar = ReleasedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBed.TekBed_C.BPAllowSeating
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekBed_C::BPAllowSeating(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed.TekBed_C.BPAllowSeating");

	ATekBed_C_BPAllowSeating_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekBed.TekBed_C.BPSeatedPlayer
// ()
// Parameters:
// class AShooterCharacter**      SeatedChar                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekBed_C::BPSeatedPlayer(class AShooterCharacter** SeatedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed.TekBed_C.BPSeatedPlayer");

	ATekBed_C_BPSeatedPlayer_Params params;
	params.SeatedChar = SeatedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBed.TekBed_C.UserConstructionScript
// ()

void ATekBed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed.TekBed_C.UserConstructionScript");

	ATekBed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBed.TekBed_C.ExecuteUbergraph_TekBed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekBed_C::ExecuteUbergraph_TekBed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBed.TekBed_C.ExecuteUbergraph_TekBed");

	ATekBed_C_ExecuteUbergraph_TekBed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
