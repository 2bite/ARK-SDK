// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_AIController_TekCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gigant_AIController_TekCave.Gigant_AIController_TekCave_C.UserConstructionScript
// ()

void AGigant_AIController_TekCave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_AIController_TekCave.Gigant_AIController_TekCave_C.UserConstructionScript");

	AGigant_AIController_TekCave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gigant_AIController_TekCave.Gigant_AIController_TekCave_C.ExecuteUbergraph_Gigant_AIController_TekCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGigant_AIController_TekCave_C::ExecuteUbergraph_Gigant_AIController_TekCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_AIController_TekCave.Gigant_AIController_TekCave_C.ExecuteUbergraph_Gigant_AIController_TekCave");

	AGigant_AIController_TekCave_C_ExecuteUbergraph_Gigant_AIController_TekCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
