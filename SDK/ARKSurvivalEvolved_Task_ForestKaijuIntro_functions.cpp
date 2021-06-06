// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ForestKaijuIntro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_ForestKaijuIntro.Task_ForestKaijuIntro_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ForestKaijuIntro_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ForestKaijuIntro.Task_ForestKaijuIntro_C.ReceiveExecute");

	UTask_ForestKaijuIntro_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ForestKaijuIntro.Task_ForestKaijuIntro_C.ExecuteUbergraph_Task_ForestKaijuIntro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ForestKaijuIntro_C::ExecuteUbergraph_Task_ForestKaijuIntro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ForestKaijuIntro.Task_ForestKaijuIntro_C.ExecuteUbergraph_Task_ForestKaijuIntro");

	UTask_ForestKaijuIntro_C_ExecuteUbergraph_Task_ForestKaijuIntro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
