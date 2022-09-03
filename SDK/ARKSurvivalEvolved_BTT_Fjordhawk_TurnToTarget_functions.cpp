// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Fjordhawk_TurnToTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Fjordhawk_TurnToTarget_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ReceiveTick");

	UBTT_Fjordhawk_TurnToTarget_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Fjordhawk_TurnToTarget_C::ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C.ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget");

	UBTT_Fjordhawk_TurnToTarget_C_ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
