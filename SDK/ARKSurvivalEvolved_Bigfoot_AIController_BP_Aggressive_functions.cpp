// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bigfoot_AIController_BP_Aggressive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bigfoot_AIController_BP_Aggressive.Bigfoot_AIController_BP_Aggressive_C.UserConstructionScript
// ()

void ABigfoot_AIController_BP_Aggressive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_AIController_BP_Aggressive.Bigfoot_AIController_BP_Aggressive_C.UserConstructionScript");

	ABigfoot_AIController_BP_Aggressive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_AIController_BP_Aggressive.Bigfoot_AIController_BP_Aggressive_C.ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_AIController_BP_Aggressive_C::ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_AIController_BP_Aggressive.Bigfoot_AIController_BP_Aggressive_C.ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive");

	ABigfoot_AIController_BP_Aggressive_C_ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
