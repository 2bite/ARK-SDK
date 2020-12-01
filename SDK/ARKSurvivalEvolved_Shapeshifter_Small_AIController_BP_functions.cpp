// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Small_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shapeshifter_Small_AIController_BP.Shapeshifter_Small_AIController_BP_C.UserConstructionScript
// ()

void AShapeshifter_Small_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AIController_BP.Shapeshifter_Small_AIController_BP_C.UserConstructionScript");

	AShapeshifter_Small_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Small_AIController_BP.Shapeshifter_Small_AIController_BP_C.ExecuteUbergraph_Shapeshifter_Small_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Small_AIController_BP_C::ExecuteUbergraph_Shapeshifter_Small_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AIController_BP.Shapeshifter_Small_AIController_BP_C.ExecuteUbergraph_Shapeshifter_Small_AIController_BP");

	AShapeshifter_Small_AIController_BP_C_ExecuteUbergraph_Shapeshifter_Small_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
