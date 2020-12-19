// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Lamprey_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lamprey_AIController.Lamprey_AIController_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALamprey_AIController_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lamprey_AIController.Lamprey_AIController_C.BPGetTargetingDesire");

	ALamprey_AIController_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Lamprey_AIController.Lamprey_AIController_C.UserConstructionScript
// ()

void ALamprey_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lamprey_AIController.Lamprey_AIController_C.UserConstructionScript");

	ALamprey_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lamprey_AIController.Lamprey_AIController_C.ExecuteUbergraph_Lamprey_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALamprey_AIController_C::ExecuteUbergraph_Lamprey_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lamprey_AIController.Lamprey_AIController_C.ExecuteUbergraph_Lamprey_AIController");

	ALamprey_AIController_C_ExecuteUbergraph_Lamprey_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
