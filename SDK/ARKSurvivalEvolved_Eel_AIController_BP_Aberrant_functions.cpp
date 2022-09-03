// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Eel_AIController_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEel_AIController_BP_Aberrant_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.BPGetTargetingDesire");

	AEel_AIController_BP_Aberrant_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.UserConstructionScript
// ()

void AEel_AIController_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.UserConstructionScript");

	AEel_AIController_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.ExecuteUbergraph_Eel_AIController_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEel_AIController_BP_Aberrant_C::ExecuteUbergraph_Eel_AIController_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_AIController_BP_Aberrant.Eel_AIController_BP_Aberrant_C.ExecuteUbergraph_Eel_AIController_BP_Aberrant");

	AEel_AIController_BP_Aberrant_C_ExecuteUbergraph_Eel_AIController_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
