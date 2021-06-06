// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salmon_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Salmon_AIController_BP.Salmon_AIController_BP_C.UserConstructionScript
// ()

void ASalmon_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_AIController_BP.Salmon_AIController_BP_C.UserConstructionScript");

	ASalmon_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Salmon_AIController_BP.Salmon_AIController_BP_C.ExecuteUbergraph_Salmon_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASalmon_AIController_BP_C::ExecuteUbergraph_Salmon_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_AIController_BP.Salmon_AIController_BP_C.ExecuteUbergraph_Salmon_AIController_BP");

	ASalmon_AIController_BP_C_ExecuteUbergraph_Salmon_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
