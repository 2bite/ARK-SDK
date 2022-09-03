// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_GasBags_MinInflation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.GetMaxInflation
// ()
// Parameters:
// class AActor*                  Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxInflation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_MinInflation_C::GetMaxInflation(class AActor* Controller, float* MaxInflation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.GetMaxInflation");

	UDecorator_GasBags_MinInflation_C_GetMaxInflation_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxInflation != nullptr)
		*MaxInflation = params.MaxInflation;
}


// Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_MinInflation_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ReceiveConditionCheck");

	UDecorator_GasBags_MinInflation_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ExecuteUbergraph_Decorator_GasBags_MinInflation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_MinInflation_C::ExecuteUbergraph_Decorator_GasBags_MinInflation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ExecuteUbergraph_Decorator_GasBags_MinInflation");

	UDecorator_GasBags_MinInflation_C_ExecuteUbergraph_Decorator_GasBags_MinInflation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
