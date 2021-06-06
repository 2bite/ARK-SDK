// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Toad_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Toad_AIController_BP.Toad_AIController_BP_C.UserConstructionScript
// ()

void AToad_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_AIController_BP.Toad_AIController_BP_C.UserConstructionScript");

	AToad_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toad_AIController_BP.Toad_AIController_BP_C.ExecuteUbergraph_Toad_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToad_AIController_BP_C::ExecuteUbergraph_Toad_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_AIController_BP.Toad_AIController_BP_C.ExecuteUbergraph_Toad_AIController_BP");

	AToad_AIController_BP_C_ExecuteUbergraph_Toad_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
