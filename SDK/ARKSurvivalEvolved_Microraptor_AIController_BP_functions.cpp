// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Microraptor_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.Is Target Good
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMicroraptor_Character_BP_C* Microraptor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMicroraptor_AIController_BP_C::Is_Target_Good(class AActor* Target, class AMicroraptor_Character_BP_C* Microraptor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.Is Target Good");

	AMicroraptor_AIController_BP_C_Is_Target_Good_Params params;
	params.Target = Target;
	params.Microraptor = Microraptor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMicroraptor_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.BPGetTargetingDesire");

	AMicroraptor_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.UserConstructionScript
// ()

void AMicroraptor_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.UserConstructionScript");

	AMicroraptor_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.ExecuteUbergraph_Microraptor_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_AIController_BP_C::ExecuteUbergraph_Microraptor_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.ExecuteUbergraph_Microraptor_AIController_BP");

	AMicroraptor_AIController_BP_C_ExecuteUbergraph_Microraptor_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
