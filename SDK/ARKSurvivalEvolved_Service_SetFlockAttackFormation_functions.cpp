// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_SetFlockAttackFormation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveDeactivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_SetFlockAttackFormation_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveDeactivation");

	UService_SetFlockAttackFormation_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_SetFlockAttackFormation_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveActivation");

	UService_SetFlockAttackFormation_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ExecuteUbergraph_Service_SetFlockAttackFormation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_SetFlockAttackFormation_C::ExecuteUbergraph_Service_SetFlockAttackFormation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ExecuteUbergraph_Service_SetFlockAttackFormation");

	UService_SetFlockAttackFormation_C_ExecuteUbergraph_Service_SetFlockAttackFormation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
