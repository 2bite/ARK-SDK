// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Lystro_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lystro_Character_BP.Lystro_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALystro_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lystro_Character_BP.Lystro_Character_BP_C.BPTryMultiUse");

	ALystro_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Lystro_Character_BP.Lystro_Character_BP_C.Has XPBuff
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALystro_Character_BP_C::Has_XPBuff(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lystro_Character_BP.Lystro_Character_BP_C.Has XPBuff");

	ALystro_Character_BP_C_Has_XPBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Lystro_Character_BP.Lystro_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Native, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ALystro_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lystro_Character_BP.Lystro_Character_BP_C.BPGetMultiUseEntries");

	ALystro_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Lystro_Character_BP.Lystro_Character_BP_C.UserConstructionScript
// ()

void ALystro_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lystro_Character_BP.Lystro_Character_BP_C.UserConstructionScript");

	ALystro_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lystro_Character_BP.Lystro_Character_BP_C.ExecuteUbergraph_Lystro_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALystro_Character_BP_C::ExecuteUbergraph_Lystro_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lystro_Character_BP.Lystro_Character_BP_C.ExecuteUbergraph_Lystro_Character_BP");

	ALystro_Character_BP_C_ExecuteUbergraph_Lystro_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
