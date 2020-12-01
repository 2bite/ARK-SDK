// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungBeetle_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPCharacterSleeped
// ()

void ADungBeetle_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPCharacterSleeped");

	ADungBeetle_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPCharacterUnsleeped
// ()

void ADungBeetle_Character_BP_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPCharacterUnsleeped");

	ADungBeetle_Character_BP_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADungBeetle_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPGetMultiUseEntries");

	ADungBeetle_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADungBeetle_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPTryMultiUse");

	ADungBeetle_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.UserConstructionScript
// ()

void ADungBeetle_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.UserConstructionScript");

	ADungBeetle_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.ReceiveBeginPlay
// ()

void ADungBeetle_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.ReceiveBeginPlay");

	ADungBeetle_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ADungBeetle_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.OnDied_Event");

	ADungBeetle_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.ExecuteUbergraph_DungBeetle_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADungBeetle_Character_BP_C::ExecuteUbergraph_DungBeetle_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.ExecuteUbergraph_DungBeetle_Character_BP");

	ADungBeetle_Character_BP_C_ExecuteUbergraph_DungBeetle_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
