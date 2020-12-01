// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ForestKaijuHealForLeash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ForestKaijuHealForLeash_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C.ReceiveExecute");

	UTask_ForestKaijuHealForLeash_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C.ExecuteUbergraph_Task_ForestKaijuHealForLeash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ForestKaijuHealForLeash_C::ExecuteUbergraph_Task_ForestKaijuHealForLeash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ForestKaijuHealForLeash.Task_ForestKaijuHealForLeash_C.ExecuteUbergraph_Task_ForestKaijuHealForLeash");

	UTask_ForestKaijuHealForLeash_C_ExecuteUbergraph_Task_ForestKaijuHealForLeash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
