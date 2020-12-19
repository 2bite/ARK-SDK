// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_CheckIfTargetIsDead_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_CheckIfTargetIsDead_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C.ReceiveConditionCheck");

	UDeco_CheckIfTargetIsDead_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C.ExecuteUbergraph_Deco_CheckIfTargetIsDead
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_CheckIfTargetIsDead_C::ExecuteUbergraph_Deco_CheckIfTargetIsDead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C.ExecuteUbergraph_Deco_CheckIfTargetIsDead");

	UDeco_CheckIfTargetIsDead_C_ExecuteUbergraph_Deco_CheckIfTargetIsDead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
