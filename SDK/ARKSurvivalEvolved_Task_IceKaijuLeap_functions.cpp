// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_IceKaijuLeap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_IceKaijuLeap.Task_IceKaijuLeap_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuLeap_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuLeap.Task_IceKaijuLeap_C.ReceiveExecute");

	UTask_IceKaijuLeap_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_IceKaijuLeap.Task_IceKaijuLeap_C.ExecuteUbergraph_Task_IceKaijuLeap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuLeap_C::ExecuteUbergraph_Task_IceKaijuLeap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuLeap.Task_IceKaijuLeap_C.ExecuteUbergraph_Task_IceKaijuLeap");

	UTask_IceKaijuLeap_C_ExecuteUbergraph_Task_IceKaijuLeap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
