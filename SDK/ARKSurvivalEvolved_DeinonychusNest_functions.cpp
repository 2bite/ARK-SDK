// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DeinonychusNest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeinonychusNest.DeinonychusNest_C.UserConstructionScript
// ()

void ADeinonychusNest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeinonychusNest.DeinonychusNest_C.UserConstructionScript");

	ADeinonychusNest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeinonychusNest.DeinonychusNest_C.ExecuteUbergraph_DeinonychusNest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychusNest_C::ExecuteUbergraph_DeinonychusNest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeinonychusNest.DeinonychusNest_C.ExecuteUbergraph_DeinonychusNest");

	ADeinonychusNest_C_ExecuteUbergraph_DeinonychusNest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
