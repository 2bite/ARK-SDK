// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bear_AIController_BP_Polar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C.UserConstructionScript
// ()

void ABear_AIController_BP_Polar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C.UserConstructionScript");

	ABear_AIController_BP_Polar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C.ExecuteUbergraph_Bear_AIController_BP_Polar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABear_AIController_BP_Polar_C::ExecuteUbergraph_Bear_AIController_BP_Polar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_AIController_BP_Polar.Bear_AIController_BP_Polar_C.ExecuteUbergraph_Bear_AIController_BP_Polar");

	ABear_AIController_BP_Polar_C_ExecuteUbergraph_Bear_AIController_BP_Polar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
