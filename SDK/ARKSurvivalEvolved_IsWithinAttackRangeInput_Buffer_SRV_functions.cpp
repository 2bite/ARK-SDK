// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinAttackRangeInput_Buffer_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsWithinAttackRangeInput_Buffer_SRV.IsWithinAttackRangeInput_Buffer_SRV_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UIsWithinAttackRangeInput_Buffer_SRV_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsWithinAttackRangeInput_Buffer_SRV.IsWithinAttackRangeInput_Buffer_SRV_C.ReceiveTick");

	UIsWithinAttackRangeInput_Buffer_SRV_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsWithinAttackRangeInput_Buffer_SRV.IsWithinAttackRangeInput_Buffer_SRV_C.ExecuteUbergraph_IsWithinAttackRangeInput_Buffer_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsWithinAttackRangeInput_Buffer_SRV_C::ExecuteUbergraph_IsWithinAttackRangeInput_Buffer_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsWithinAttackRangeInput_Buffer_SRV.IsWithinAttackRangeInput_Buffer_SRV_C.ExecuteUbergraph_IsWithinAttackRangeInput_Buffer_SRV");

	UIsWithinAttackRangeInput_Buffer_SRV_C_ExecuteUbergraph_IsWithinAttackRangeInput_Buffer_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
