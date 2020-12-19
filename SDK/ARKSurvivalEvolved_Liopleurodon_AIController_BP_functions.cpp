// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Liopleurodon_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Liopleurodon_AIController_BP.Liopleurodon_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALiopleurodon_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_AIController_BP.Liopleurodon_AIController_BP_C.BPGetTargetingDesire");

	ALiopleurodon_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Liopleurodon_AIController_BP.Liopleurodon_AIController_BP_C.UserConstructionScript
// ()

void ALiopleurodon_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_AIController_BP.Liopleurodon_AIController_BP_C.UserConstructionScript");

	ALiopleurodon_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_AIController_BP.Liopleurodon_AIController_BP_C.ExecuteUbergraph_Liopleurodon_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_AIController_BP_C::ExecuteUbergraph_Liopleurodon_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_AIController_BP.Liopleurodon_AIController_BP_C.ExecuteUbergraph_Liopleurodon_AIController_BP");

	ALiopleurodon_AIController_BP_C_ExecuteUbergraph_Liopleurodon_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
