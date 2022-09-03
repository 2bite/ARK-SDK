// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKWyvernCheckDistanceFromKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_FKWyvernCheckDistanceFromKaiju.Task_FKWyvernCheckDistanceFromKaiju_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKWyvernCheckDistanceFromKaiju_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKWyvernCheckDistanceFromKaiju.Task_FKWyvernCheckDistanceFromKaiju_C.ReceiveConditionCheck");

	UTask_FKWyvernCheckDistanceFromKaiju_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKWyvernCheckDistanceFromKaiju.Task_FKWyvernCheckDistanceFromKaiju_C.ExecuteUbergraph_Task_FKWyvernCheckDistanceFromKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKWyvernCheckDistanceFromKaiju_C::ExecuteUbergraph_Task_FKWyvernCheckDistanceFromKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKWyvernCheckDistanceFromKaiju.Task_FKWyvernCheckDistanceFromKaiju_C.ExecuteUbergraph_Task_FKWyvernCheckDistanceFromKaiju");

	UTask_FKWyvernCheckDistanceFromKaiju_C_ExecuteUbergraph_Task_FKWyvernCheckDistanceFromKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
