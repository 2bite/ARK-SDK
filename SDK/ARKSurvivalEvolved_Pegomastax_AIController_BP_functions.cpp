// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pegomastax_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UpdateAttackDestinationOffset
// ()
// Parameters:
// bool                           isInWaitingState               (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_AIController_BP_C::UpdateAttackDestinationOffset(bool isInWaitingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UpdateAttackDestinationOffset");

	APegomastax_AIController_BP_C_UpdateAttackDestinationOffset_Params params;
	params.isInWaitingState = isInWaitingState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UserConstructionScript
// ()

void APegomastax_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.UserConstructionScript");

	APegomastax_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.ExecuteUbergraph_Pegomastax_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_AIController_BP_C::ExecuteUbergraph_Pegomastax_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_AIController_BP.Pegomastax_AIController_BP_C.ExecuteUbergraph_Pegomastax_AIController_BP");

	APegomastax_AIController_BP_C_ExecuteUbergraph_Pegomastax_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
