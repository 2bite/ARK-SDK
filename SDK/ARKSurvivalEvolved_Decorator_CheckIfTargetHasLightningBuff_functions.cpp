// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_CheckIfTargetHasLightningBuff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_CheckIfTargetHasLightningBuff_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C.ReceiveConditionCheck");

	UDecorator_CheckIfTargetHasLightningBuff_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C.ExecuteUbergraph_Decorator_CheckIfTargetHasLightningBuff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_CheckIfTargetHasLightningBuff_C::ExecuteUbergraph_Decorator_CheckIfTargetHasLightningBuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C.ExecuteUbergraph_Decorator_CheckIfTargetHasLightningBuff");

	UDecorator_CheckIfTargetHasLightningBuff_C_ExecuteUbergraph_Decorator_CheckIfTargetHasLightningBuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
