// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rhino_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rhino_AIController_BP.Rhino_AIController_BP_C.UserConstructionScript
// ()

void ARhino_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rhino_AIController_BP.Rhino_AIController_BP_C.UserConstructionScript");

	ARhino_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rhino_AIController_BP.Rhino_AIController_BP_C.ExecuteUbergraph_Rhino_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARhino_AIController_BP_C::ExecuteUbergraph_Rhino_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rhino_AIController_BP.Rhino_AIController_BP_C.ExecuteUbergraph_Rhino_AIController_BP");

	ARhino_AIController_BP_C_ExecuteUbergraph_Rhino_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
