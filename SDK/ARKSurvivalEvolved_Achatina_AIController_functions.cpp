// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Achatina_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Achatina_AIController.Achatina_AIController_C.UserConstructionScript
// ()

void AAchatina_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_AIController.Achatina_AIController_C.UserConstructionScript");

	AAchatina_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_AIController.Achatina_AIController_C.ExecuteUbergraph_Achatina_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAchatina_AIController_C::ExecuteUbergraph_Achatina_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_AIController.Achatina_AIController_C.ExecuteUbergraph_Achatina_AIController");

	AAchatina_AIController_C_ExecuteUbergraph_Achatina_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
