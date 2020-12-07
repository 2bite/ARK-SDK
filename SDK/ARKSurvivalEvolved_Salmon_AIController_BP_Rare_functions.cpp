// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salmon_AIController_BP_Rare_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Salmon_AIController_BP_Rare.Salmon_AIController_BP_Rare_C.UserConstructionScript
// ()

void ASalmon_AIController_BP_Rare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_AIController_BP_Rare.Salmon_AIController_BP_Rare_C.UserConstructionScript");

	ASalmon_AIController_BP_Rare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Salmon_AIController_BP_Rare.Salmon_AIController_BP_Rare_C.ExecuteUbergraph_Salmon_AIController_BP_Rare
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASalmon_AIController_BP_Rare_C::ExecuteUbergraph_Salmon_AIController_BP_Rare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_AIController_BP_Rare.Salmon_AIController_BP_Rare_C.ExecuteUbergraph_Salmon_AIController_BP_Rare");

	ASalmon_AIController_BP_Rare_C_ExecuteUbergraph_Salmon_AIController_BP_Rare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
