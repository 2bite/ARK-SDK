// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CookingPot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CookingPot.CookingPot_C.UserConstructionScript
// ()

void ACookingPot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CookingPot.CookingPot_C.UserConstructionScript");

	ACookingPot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CookingPot.CookingPot_C.ExecuteUbergraph_CookingPot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACookingPot_C::ExecuteUbergraph_CookingPot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CookingPot.CookingPot_C.ExecuteUbergraph_CookingPot");

	ACookingPot_C_ExecuteUbergraph_CookingPot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
