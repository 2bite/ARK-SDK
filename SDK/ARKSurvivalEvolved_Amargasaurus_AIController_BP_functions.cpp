// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Amargasaurus_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.BPGetTargetingDesire
// (Native, NetResponse, Static, Public, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAmargasaurus_AIController_BP_C::STATIC_BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.BPGetTargetingDesire");

	AAmargasaurus_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.UserConstructionScript
// ()

void AAmargasaurus_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.UserConstructionScript");

	AAmargasaurus_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.ExecuteUbergraph_Amargasaurus_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargasaurus_AIController_BP_C::ExecuteUbergraph_Amargasaurus_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.ExecuteUbergraph_Amargasaurus_AIController_BP");

	AAmargasaurus_AIController_BP_C_ExecuteUbergraph_Amargasaurus_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
