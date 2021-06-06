// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Impacts_Punch_Exosuit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C.UserConstructionScript
// ()

void AImpacts_Punch_Exosuit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C.UserConstructionScript");

	AImpacts_Punch_Exosuit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C.ExecuteUbergraph_Impacts_Punch_Exosuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AImpacts_Punch_Exosuit_C::ExecuteUbergraph_Impacts_Punch_Exosuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C.ExecuteUbergraph_Impacts_Punch_Exosuit");

	AImpacts_Punch_Exosuit_C_ExecuteUbergraph_Impacts_Punch_Exosuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
