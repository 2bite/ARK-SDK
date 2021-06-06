// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TerrorBird_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TerrorBird_AIController_BP.TerrorBird_AIController_BP_C.UserConstructionScript
// ()

void ATerrorBird_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_AIController_BP.TerrorBird_AIController_BP_C.UserConstructionScript");

	ATerrorBird_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrorBird_AIController_BP.TerrorBird_AIController_BP_C.ExecuteUbergraph_TerrorBird_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATerrorBird_AIController_BP_C::ExecuteUbergraph_TerrorBird_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_AIController_BP.TerrorBird_AIController_BP_C.ExecuteUbergraph_TerrorBird_AIController_BP");

	ATerrorBird_AIController_BP_C_ExecuteUbergraph_TerrorBird_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
