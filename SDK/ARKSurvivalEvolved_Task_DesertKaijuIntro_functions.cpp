// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_DesertKaijuIntro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_DesertKaijuIntro.Task_DesertKaijuIntro_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DesertKaijuIntro_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DesertKaijuIntro.Task_DesertKaijuIntro_C.ReceiveExecute");

	UTask_DesertKaijuIntro_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_DesertKaijuIntro.Task_DesertKaijuIntro_C.ExecuteUbergraph_Task_DesertKaijuIntro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DesertKaijuIntro_C::ExecuteUbergraph_Task_DesertKaijuIntro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DesertKaijuIntro.Task_DesertKaijuIntro_C.ExecuteUbergraph_Task_DesertKaijuIntro");

	UTask_DesertKaijuIntro_C_ExecuteUbergraph_Task_DesertKaijuIntro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
