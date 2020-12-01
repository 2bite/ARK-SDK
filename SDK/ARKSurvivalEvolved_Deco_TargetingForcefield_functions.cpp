// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_TargetingForcefield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deco_TargetingForcefield.Deco_TargetingForcefield_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_TargetingForcefield_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_TargetingForcefield.Deco_TargetingForcefield_C.ReceiveConditionCheck");

	UDeco_TargetingForcefield_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deco_TargetingForcefield.Deco_TargetingForcefield_C.ExecuteUbergraph_Deco_TargetingForcefield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_TargetingForcefield_C::ExecuteUbergraph_Deco_TargetingForcefield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_TargetingForcefield.Deco_TargetingForcefield_C.ExecuteUbergraph_Deco_TargetingForcefield");

	UDeco_TargetingForcefield_C_ExecuteUbergraph_Deco_TargetingForcefield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
