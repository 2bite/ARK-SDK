// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvernNest_Crystal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvernNest_Crystal.WyvernNest_Crystal_C.UserConstructionScript
// ()

void AWyvernNest_Crystal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernNest_Crystal.WyvernNest_Crystal_C.UserConstructionScript");

	AWyvernNest_Crystal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvernNest_Crystal.WyvernNest_Crystal_C.ExecuteUbergraph_WyvernNest_Crystal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvernNest_Crystal_C::ExecuteUbergraph_WyvernNest_Crystal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernNest_Crystal.WyvernNest_Crystal_C.ExecuteUbergraph_WyvernNest_Crystal");

	AWyvernNest_Crystal_C_ExecuteUbergraph_WyvernNest_Crystal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
