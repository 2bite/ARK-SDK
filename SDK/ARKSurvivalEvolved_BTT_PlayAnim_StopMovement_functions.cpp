// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_PlayAnim_StopMovement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayAnim_StopMovement_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ReceiveExecute");

	UBTT_PlayAnim_StopMovement_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayAnim_StopMovement_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ReceiveTick");

	UBTT_PlayAnim_StopMovement_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ExecuteUbergraph_BTT_PlayAnim_StopMovement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayAnim_StopMovement_C::ExecuteUbergraph_BTT_PlayAnim_StopMovement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ExecuteUbergraph_BTT_PlayAnim_StopMovement");

	UBTT_PlayAnim_StopMovement_C_ExecuteUbergraph_BTT_PlayAnim_StopMovement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
