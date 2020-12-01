// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_IsWithinDistance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deco_IsWithinDistance.Deco_IsWithinDistance_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_IsWithinDistance_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_IsWithinDistance.Deco_IsWithinDistance_C.ReceiveConditionCheck");

	UDeco_IsWithinDistance_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deco_IsWithinDistance.Deco_IsWithinDistance_C.ExecuteUbergraph_Deco_IsWithinDistance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_IsWithinDistance_C::ExecuteUbergraph_Deco_IsWithinDistance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_IsWithinDistance.Deco_IsWithinDistance_C.ExecuteUbergraph_Deco_IsWithinDistance");

	UDeco_IsWithinDistance_C_ExecuteUbergraph_Deco_IsWithinDistance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
