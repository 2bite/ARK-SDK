// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_XenomorphOffspring_AIController_BP_NoFlee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C.UserConstructionScript
// ()

void AXenomorphOffspring_AIController_BP_NoFlee_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C.UserConstructionScript");

	AXenomorphOffspring_AIController_BP_NoFlee_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C.ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorphOffspring_AIController_BP_NoFlee_C::ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C.ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee");

	AXenomorphOffspring_AIController_BP_NoFlee_C_ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
