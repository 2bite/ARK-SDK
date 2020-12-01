// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTDecorator_BlueprintBase_New_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTDecorator_BlueprintBase_New.BTDecorator_BlueprintBase_New_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTDecorator_BlueprintBase_New_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTDecorator_BlueprintBase_New.BTDecorator_BlueprintBase_New_C.ReceiveConditionCheck");

	UBTDecorator_BlueprintBase_New_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTDecorator_BlueprintBase_New.BTDecorator_BlueprintBase_New_C.ExecuteUbergraph_BTDecorator_BlueprintBase_New
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTDecorator_BlueprintBase_New_C::ExecuteUbergraph_BTDecorator_BlueprintBase_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTDecorator_BlueprintBase_New.BTDecorator_BlueprintBase_New_C.ExecuteUbergraph_BTDecorator_BlueprintBase_New");

	UBTDecorator_BlueprintBase_New_C_ExecuteUbergraph_BTDecorator_BlueprintBase_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
