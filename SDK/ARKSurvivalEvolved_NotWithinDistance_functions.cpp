// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NotWithinDistance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotWithinDistance.NotWithinDistance_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UNotWithinDistance_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotWithinDistance.NotWithinDistance_C.ReceiveConditionCheck");

	UNotWithinDistance_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotWithinDistance.NotWithinDistance_C.ExecuteUbergraph_NotWithinDistance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNotWithinDistance_C::ExecuteUbergraph_NotWithinDistance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotWithinDistance.NotWithinDistance_C.ExecuteUbergraph_NotWithinDistance");

	UNotWithinDistance_C_ExecuteUbergraph_NotWithinDistance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
