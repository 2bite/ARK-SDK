// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Male_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.ShouldIgnoreAggression
// ()
// Parameters:
// class UObject**                Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Male_AIController_BP_C::ShouldIgnoreAggression(class UObject** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.ShouldIgnoreAggression");

	AXenomorph_Male_AIController_BP_C_ShouldIgnoreAggression_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.UserConstructionScript
// ()

void AXenomorph_Male_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.UserConstructionScript");

	AXenomorph_Male_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.ExecuteUbergraph_Xenomorph_Male_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Male_AIController_BP_C::ExecuteUbergraph_Xenomorph_Male_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.ExecuteUbergraph_Xenomorph_Male_AIController_BP");

	AXenomorph_Male_AIController_BP_C_ExecuteUbergraph_Xenomorph_Male_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
