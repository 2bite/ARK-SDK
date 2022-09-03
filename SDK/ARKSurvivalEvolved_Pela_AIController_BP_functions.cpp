// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pela_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pela_AIController_BP.Pela_AIController_BP_C.UserConstructionScript
// ()

void APela_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_AIController_BP.Pela_AIController_BP_C.UserConstructionScript");

	APela_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pela_AIController_BP.Pela_AIController_BP_C.ExecuteUbergraph_Pela_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APela_AIController_BP_C::ExecuteUbergraph_Pela_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_AIController_BP.Pela_AIController_BP_C.ExecuteUbergraph_Pela_AIController_BP");

	APela_AIController_BP_C_ExecuteUbergraph_Pela_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
