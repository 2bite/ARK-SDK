// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_FKaijuIsTooFarFromSpawnLoc_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_FKaijuIsTooFarFromSpawnLoc_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C.ReceiveConditionCheck");

	UDecorator_FKaijuIsTooFarFromSpawnLoc_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C.ExecuteUbergraph_Decorator_FKaijuIsTooFarFromSpawnLoc
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_FKaijuIsTooFarFromSpawnLoc_C::ExecuteUbergraph_Decorator_FKaijuIsTooFarFromSpawnLoc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_FKaijuIsTooFarFromSpawnLoc.Decorator_FKaijuIsTooFarFromSpawnLoc_C.ExecuteUbergraph_Decorator_FKaijuIsTooFarFromSpawnLoc");

	UDecorator_FKaijuIsTooFarFromSpawnLoc_C_ExecuteUbergraph_Decorator_FKaijuIsTooFarFromSpawnLoc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
