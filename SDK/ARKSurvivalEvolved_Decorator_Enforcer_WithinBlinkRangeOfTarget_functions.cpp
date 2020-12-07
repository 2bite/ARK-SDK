// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_Enforcer_WithinBlinkRangeOfTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_Enforcer_WithinBlinkRangeOfTarget.Decorator_Enforcer_WithinBlinkRangeOfTarget_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_Enforcer_WithinBlinkRangeOfTarget_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_Enforcer_WithinBlinkRangeOfTarget.Decorator_Enforcer_WithinBlinkRangeOfTarget_C.ReceiveConditionCheck");

	UDecorator_Enforcer_WithinBlinkRangeOfTarget_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_Enforcer_WithinBlinkRangeOfTarget.Decorator_Enforcer_WithinBlinkRangeOfTarget_C.ExecuteUbergraph_Decorator_Enforcer_WithinBlinkRangeOfTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_Enforcer_WithinBlinkRangeOfTarget_C::ExecuteUbergraph_Decorator_Enforcer_WithinBlinkRangeOfTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_Enforcer_WithinBlinkRangeOfTarget.Decorator_Enforcer_WithinBlinkRangeOfTarget_C.ExecuteUbergraph_Decorator_Enforcer_WithinBlinkRangeOfTarget");

	UDecorator_Enforcer_WithinBlinkRangeOfTarget_C_ExecuteUbergraph_Decorator_Enforcer_WithinBlinkRangeOfTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
