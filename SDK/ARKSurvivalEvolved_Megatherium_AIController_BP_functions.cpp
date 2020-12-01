// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megatherium_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.BPOverrideIgnoredByWildDino
// ()
// Parameters:
// class AActor**                 wildDinoToIgnore               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegatherium_AIController_BP_C::BPOverrideIgnoredByWildDino(class AActor** wildDinoToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.BPOverrideIgnoredByWildDino");

	AMegatherium_AIController_BP_C_BPOverrideIgnoredByWildDino_Params params;
	params.wildDinoToIgnore = wildDinoToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.ChangedAITarget
// ()

void AMegatherium_AIController_BP_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.ChangedAITarget");

	AMegatherium_AIController_BP_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMegatherium_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.BPGetTargetingDesire");

	AMegatherium_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.UserConstructionScript
// ()

void AMegatherium_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.UserConstructionScript");

	AMegatherium_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.ExecuteUbergraph_Megatherium_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegatherium_AIController_BP_C::ExecuteUbergraph_Megatherium_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.ExecuteUbergraph_Megatherium_AIController_BP");

	AMegatherium_AIController_BP_C_ExecuteUbergraph_Megatherium_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
