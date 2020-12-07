// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsAttackBlockedByStructure_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsAttackBlockedByStructure_DK.IsAttackBlockedByStructure_DK_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UIsAttackBlockedByStructure_DK_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsAttackBlockedByStructure_DK.IsAttackBlockedByStructure_DK_C.ReceiveTick");

	UIsAttackBlockedByStructure_DK_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsAttackBlockedByStructure_DK.IsAttackBlockedByStructure_DK_C.ExecuteUbergraph_IsAttackBlockedByStructure_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsAttackBlockedByStructure_DK_C::ExecuteUbergraph_IsAttackBlockedByStructure_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsAttackBlockedByStructure_DK.IsAttackBlockedByStructure_DK_C.ExecuteUbergraph_IsAttackBlockedByStructure_DK");

	UIsAttackBlockedByStructure_DK_C_ExecuteUbergraph_IsAttackBlockedByStructure_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
