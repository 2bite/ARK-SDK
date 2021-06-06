// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SleepingBag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SleepingBag.SleepingBag_C.UserConstructionScript
// ()

void ASleepingBag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBag.SleepingBag_C.UserConstructionScript");

	ASleepingBag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SleepingBag.SleepingBag_C.ExecuteUbergraph_SleepingBag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASleepingBag_C::ExecuteUbergraph_SleepingBag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBag.SleepingBag_C.ExecuteUbergraph_SleepingBag");

	ASleepingBag_C_ExecuteUbergraph_SleepingBag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
