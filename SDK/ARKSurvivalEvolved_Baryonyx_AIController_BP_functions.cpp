// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Baryonyx_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.BPAggroDesirability
// ()

void ABaryonyx_AIController_BP_C::BPAggroDesirability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.BPAggroDesirability");

	ABaryonyx_AIController_BP_C_BPAggroDesirability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABaryonyx_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.BPGetTargetingDesire");

	ABaryonyx_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.UserConstructionScript
// ()

void ABaryonyx_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.UserConstructionScript");

	ABaryonyx_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.ExecuteUbergraph_Baryonyx_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaryonyx_AIController_BP_C::ExecuteUbergraph_Baryonyx_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.ExecuteUbergraph_Baryonyx_AIController_BP");

	ABaryonyx_AIController_BP_C_ExecuteUbergraph_Baryonyx_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
