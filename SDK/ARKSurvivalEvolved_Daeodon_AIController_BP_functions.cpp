// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Daeodon_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Daeodon_AIController_BP.Daeodon_AIController_BP_C.UserConstructionScript
// ()

void ADaeodon_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_AIController_BP.Daeodon_AIController_BP_C.UserConstructionScript");

	ADaeodon_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_AIController_BP.Daeodon_AIController_BP_C.ExecuteUbergraph_Daeodon_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_AIController_BP_C::ExecuteUbergraph_Daeodon_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_AIController_BP.Daeodon_AIController_BP_C.ExecuteUbergraph_Daeodon_AIController_BP");

	ADaeodon_AIController_BP_C_ExecuteUbergraph_Daeodon_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
