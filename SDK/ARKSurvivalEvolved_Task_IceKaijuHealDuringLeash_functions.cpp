// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_IceKaijuHealDuringLeash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_IceKaijuHealDuringLeash.Task_IceKaijuHealDuringLeash_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuHealDuringLeash_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuHealDuringLeash.Task_IceKaijuHealDuringLeash_C.ReceiveExecute");

	UTask_IceKaijuHealDuringLeash_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_IceKaijuHealDuringLeash.Task_IceKaijuHealDuringLeash_C.ExecuteUbergraph_Task_IceKaijuHealDuringLeash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuHealDuringLeash_C::ExecuteUbergraph_Task_IceKaijuHealDuringLeash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuHealDuringLeash.Task_IceKaijuHealDuringLeash_C.ExecuteUbergraph_Task_IceKaijuHealDuringLeash");

	UTask_IceKaijuHealDuringLeash_C_ExecuteUbergraph_Task_IceKaijuHealDuringLeash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
