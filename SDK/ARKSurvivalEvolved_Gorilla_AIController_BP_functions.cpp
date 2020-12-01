// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gorilla_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gorilla_AIController_BP.Gorilla_AIController_BP_C.UserConstructionScript
// ()

void AGorilla_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_AIController_BP.Gorilla_AIController_BP_C.UserConstructionScript");

	AGorilla_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorilla_AIController_BP.Gorilla_AIController_BP_C.ExecuteUbergraph_Gorilla_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGorilla_AIController_BP_C::ExecuteUbergraph_Gorilla_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_AIController_BP.Gorilla_AIController_BP_C.ExecuteUbergraph_Gorilla_AIController_BP");

	AGorilla_AIController_BP_C_ExecuteUbergraph_Gorilla_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
