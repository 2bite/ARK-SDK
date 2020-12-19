// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvernNest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvernNest.WyvernNest_C.CheckForNearbyEggs
// ()

void AWyvernNest_C::CheckForNearbyEggs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernNest.WyvernNest_C.CheckForNearbyEggs");

	AWyvernNest_C_CheckForNearbyEggs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvernNest.WyvernNest_C.BPUnstasis
// ()

void AWyvernNest_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernNest.WyvernNest_C.BPUnstasis");

	AWyvernNest_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvernNest.WyvernNest_C.UserConstructionScript
// ()

void AWyvernNest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernNest.WyvernNest_C.UserConstructionScript");

	AWyvernNest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvernNest.WyvernNest_C.ReceiveBeginPlay
// ()

void AWyvernNest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernNest.WyvernNest_C.ReceiveBeginPlay");

	AWyvernNest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvernNest.WyvernNest_C.CheckForEggs
// ()

void AWyvernNest_C::CheckForEggs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernNest.WyvernNest_C.CheckForEggs");

	AWyvernNest_C_CheckForEggs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvernNest.WyvernNest_C.ExecuteUbergraph_WyvernNest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvernNest_C::ExecuteUbergraph_WyvernNest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernNest.WyvernNest_C.ExecuteUbergraph_WyvernNest");

	AWyvernNest_C_ExecuteUbergraph_WyvernNest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
