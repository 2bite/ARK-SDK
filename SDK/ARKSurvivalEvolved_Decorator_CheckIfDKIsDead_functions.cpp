// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_CheckIfDKIsDead_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_CheckIfDKIsDead_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ReceiveConditionCheck");

	UDecorator_CheckIfDKIsDead_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ExecuteUbergraph_Decorator_CheckIfDKIsDead
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_CheckIfDKIsDead_C::ExecuteUbergraph_Decorator_CheckIfDKIsDead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ExecuteUbergraph_Decorator_CheckIfDKIsDead");

	UDecorator_CheckIfDKIsDead_C_ExecuteUbergraph_Decorator_CheckIfDKIsDead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
