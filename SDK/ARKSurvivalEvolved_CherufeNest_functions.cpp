// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CherufeNest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CherufeNest.CherufeNest_C.UserConstructionScript
// ()

void ACherufeNest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CherufeNest.CherufeNest_C.UserConstructionScript");

	ACherufeNest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CherufeNest.CherufeNest_C.ExecuteUbergraph_CherufeNest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACherufeNest_C::ExecuteUbergraph_CherufeNest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CherufeNest.CherufeNest_C.ExecuteUbergraph_CherufeNest");

	ACherufeNest_C_ExecuteUbergraph_CherufeNest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
