// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hesperornis_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHesperornis_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.BPGetTargetingDesire");

	AHesperornis_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.UserConstructionScript
// ()

void AHesperornis_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.UserConstructionScript");

	AHesperornis_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.ExecuteUbergraph_Hesperornis_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHesperornis_AIController_BP_C::ExecuteUbergraph_Hesperornis_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.ExecuteUbergraph_Hesperornis_AIController_BP");

	AHesperornis_AIController_BP_C_ExecuteUbergraph_Hesperornis_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
