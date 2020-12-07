// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C.BPSetupFindTarget
// ()

void AForestKaiju_AIController_BP_C::BPSetupFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C.BPSetupFindTarget");

	AForestKaiju_AIController_BP_C_BPSetupFindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C.StartTorpid
// ()

void AForestKaiju_AIController_BP_C::StartTorpid()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C.StartTorpid");

	AForestKaiju_AIController_BP_C_StartTorpid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C.UserConstructionScript
// ()

void AForestKaiju_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C.UserConstructionScript");

	AForestKaiju_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C.ExecuteUbergraph_ForestKaiju_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_AIController_BP_C::ExecuteUbergraph_ForestKaiju_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C.ExecuteUbergraph_ForestKaiju_AIController_BP");

	AForestKaiju_AIController_BP_C_ExecuteUbergraph_ForestKaiju_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
