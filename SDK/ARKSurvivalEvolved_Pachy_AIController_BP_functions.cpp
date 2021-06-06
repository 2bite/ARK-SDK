// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pachy_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pachy_AIController_BP.Pachy_AIController_BP_C.UserConstructionScript
// ()

void APachy_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachy_AIController_BP.Pachy_AIController_BP_C.UserConstructionScript");

	APachy_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachy_AIController_BP.Pachy_AIController_BP_C.ExecuteUbergraph_Pachy_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APachy_AIController_BP_C::ExecuteUbergraph_Pachy_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachy_AIController_BP.Pachy_AIController_BP_C.ExecuteUbergraph_Pachy_AIController_BP");

	APachy_AIController_BP_C_ExecuteUbergraph_Pachy_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
