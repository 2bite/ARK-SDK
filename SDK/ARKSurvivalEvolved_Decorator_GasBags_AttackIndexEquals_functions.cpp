// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_GasBags_AttackIndexEquals_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_GasBags_AttackIndexEquals.Decorator_GasBags_AttackIndexEquals_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_AttackIndexEquals_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_AttackIndexEquals.Decorator_GasBags_AttackIndexEquals_C.ReceiveConditionCheck");

	UDecorator_GasBags_AttackIndexEquals_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_GasBags_AttackIndexEquals.Decorator_GasBags_AttackIndexEquals_C.ExecuteUbergraph_Decorator_GasBags_AttackIndexEquals
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_AttackIndexEquals_C::ExecuteUbergraph_Decorator_GasBags_AttackIndexEquals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_AttackIndexEquals.Decorator_GasBags_AttackIndexEquals_C.ExecuteUbergraph_Decorator_GasBags_AttackIndexEquals");

	UDecorator_GasBags_AttackIndexEquals_C_ExecuteUbergraph_Decorator_GasBags_AttackIndexEquals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
