// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStrider_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekStrider_AIController_BP.TekStrider_AIController_BP_C.UserConstructionScript
// ()

void ATekStrider_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_AIController_BP.TekStrider_AIController_BP_C.UserConstructionScript");

	ATekStrider_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_AIController_BP.TekStrider_AIController_BP_C.ExecuteUbergraph_TekStrider_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_AIController_BP_C::ExecuteUbergraph_TekStrider_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_AIController_BP.TekStrider_AIController_BP_C.ExecuteUbergraph_TekStrider_AIController_BP");

	ATekStrider_AIController_BP_C_ExecuteUbergraph_TekStrider_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
