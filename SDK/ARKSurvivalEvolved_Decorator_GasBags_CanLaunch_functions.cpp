// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_GasBags_CanLaunch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_CanLaunch_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C.ReceiveConditionCheck");

	UDecorator_GasBags_CanLaunch_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C.ExecuteUbergraph_Decorator_GasBags_CanLaunch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_CanLaunch_C::ExecuteUbergraph_Decorator_GasBags_CanLaunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_CanLaunch.Decorator_GasBags_CanLaunch_C.ExecuteUbergraph_Decorator_GasBags_CanLaunch");

	UDecorator_GasBags_CanLaunch_C_ExecuteUbergraph_Decorator_GasBags_CanLaunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
