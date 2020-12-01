// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaiju_ChooseFireballAnim_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_KingKaiju_ChooseFireballAnim.Task_KingKaiju_ChooseFireballAnim_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaiju_ChooseFireballAnim_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaiju_ChooseFireballAnim.Task_KingKaiju_ChooseFireballAnim_C.ReceiveExecute");

	UTask_KingKaiju_ChooseFireballAnim_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_KingKaiju_ChooseFireballAnim.Task_KingKaiju_ChooseFireballAnim_C.ExecuteUbergraph_Task_KingKaiju_ChooseFireballAnim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaiju_ChooseFireballAnim_C::ExecuteUbergraph_Task_KingKaiju_ChooseFireballAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaiju_ChooseFireballAnim.Task_KingKaiju_ChooseFireballAnim_C.ExecuteUbergraph_Task_KingKaiju_ChooseFireballAnim");

	UTask_KingKaiju_ChooseFireballAnim_C_ExecuteUbergraph_Task_KingKaiju_ChooseFireballAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
