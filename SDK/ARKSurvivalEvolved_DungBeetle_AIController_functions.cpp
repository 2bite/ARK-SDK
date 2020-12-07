// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungBeetle_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DungBeetle_AIController.DungBeetle_AIController_C.UserConstructionScript
// ()

void ADungBeetle_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_AIController.DungBeetle_AIController_C.UserConstructionScript");

	ADungBeetle_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungBeetle_AIController.DungBeetle_AIController_C.ExecuteUbergraph_DungBeetle_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADungBeetle_AIController_C::ExecuteUbergraph_DungBeetle_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_AIController.DungBeetle_AIController_C.ExecuteUbergraph_DungBeetle_AIController");

	ADungBeetle_AIController_C_ExecuteUbergraph_DungBeetle_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
