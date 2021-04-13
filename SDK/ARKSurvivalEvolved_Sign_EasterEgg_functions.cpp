// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_EasterEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sign_EasterEgg.Sign_EasterEgg_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASign_EasterEgg_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_EasterEgg.Sign_EasterEgg_C.BPTryMultiUse");

	ASign_EasterEgg_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sign_EasterEgg.Sign_EasterEgg_C.BPGetMultiUseEntries
// (Event, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ASign_EasterEgg_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_EasterEgg.Sign_EasterEgg_C.BPGetMultiUseEntries");

	ASign_EasterEgg_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Sign_EasterEgg.Sign_EasterEgg_C.UserConstructionScript
// ()

void ASign_EasterEgg_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_EasterEgg.Sign_EasterEgg_C.UserConstructionScript");

	ASign_EasterEgg_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_EasterEgg.Sign_EasterEgg_C.ReceiveBeginPlay
// ()

void ASign_EasterEgg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_EasterEgg.Sign_EasterEgg_C.ReceiveBeginPlay");

	ASign_EasterEgg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_EasterEgg.Sign_EasterEgg_C.ExecuteUbergraph_Sign_EasterEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASign_EasterEgg_C::ExecuteUbergraph_Sign_EasterEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_EasterEgg.Sign_EasterEgg_C.ExecuteUbergraph_Sign_EasterEgg");

	ASign_EasterEgg_C_ExecuteUbergraph_Sign_EasterEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
