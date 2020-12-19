// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gacha_IsEating_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gacha_IsEating.Gacha_IsEating_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UGacha_IsEating_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_IsEating.Gacha_IsEating_C.ReceiveConditionCheck");

	UGacha_IsEating_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_IsEating.Gacha_IsEating_C.ExecuteUbergraph_Gacha_IsEating
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGacha_IsEating_C::ExecuteUbergraph_Gacha_IsEating(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_IsEating.Gacha_IsEating_C.ExecuteUbergraph_Gacha_IsEating");

	UGacha_IsEating_C_ExecuteUbergraph_Gacha_IsEating_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
