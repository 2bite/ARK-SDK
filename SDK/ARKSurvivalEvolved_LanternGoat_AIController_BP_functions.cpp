// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternGoat_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternGoat_AIController_BP.LanternGoat_AIController_BP_C.UserConstructionScript
// ()

void ALanternGoat_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_AIController_BP.LanternGoat_AIController_BP_C.UserConstructionScript");

	ALanternGoat_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_AIController_BP.LanternGoat_AIController_BP_C.ExecuteUbergraph_LanternGoat_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternGoat_AIController_BP_C::ExecuteUbergraph_LanternGoat_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_AIController_BP.LanternGoat_AIController_BP_C.ExecuteUbergraph_LanternGoat_AIController_BP");

	ALanternGoat_AIController_BP_C_ExecuteUbergraph_LanternGoat_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
