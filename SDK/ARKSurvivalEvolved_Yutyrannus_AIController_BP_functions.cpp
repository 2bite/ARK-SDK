// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Yutyrannus_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AYutyrannus_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.BPGetTargetingDesire");

	AYutyrannus_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.ChangedAITarget
// ()

void AYutyrannus_AIController_BP_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.ChangedAITarget");

	AYutyrannus_AIController_BP_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.UserConstructionScript
// ()

void AYutyrannus_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.UserConstructionScript");

	AYutyrannus_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.ExecuteUbergraph_Yutyrannus_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_AIController_BP_C::ExecuteUbergraph_Yutyrannus_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.ExecuteUbergraph_Yutyrannus_AIController_BP");

	AYutyrannus_AIController_BP_C_ExecuteUbergraph_Yutyrannus_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
