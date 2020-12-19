// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_IsAttacking_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deco_IsAttacking.Deco_IsAttacking_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_IsAttacking_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_IsAttacking.Deco_IsAttacking_C.ReceiveConditionCheck");

	UDeco_IsAttacking_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deco_IsAttacking.Deco_IsAttacking_C.ExecuteUbergraph_Deco_IsAttacking
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_IsAttacking_C::ExecuteUbergraph_Deco_IsAttacking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_IsAttacking.Deco_IsAttacking_C.ExecuteUbergraph_Deco_IsAttacking");

	UDeco_IsAttacking_C_ExecuteUbergraph_Deco_IsAttacking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
