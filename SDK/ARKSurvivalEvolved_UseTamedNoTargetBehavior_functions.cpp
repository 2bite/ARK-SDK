// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UseTamedNoTargetBehavior_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UUseTamedNoTargetBehavior_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ReceiveConditionCheck");

	UUseTamedNoTargetBehavior_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ExecuteUbergraph_UseTamedNoTargetBehavior
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUseTamedNoTargetBehavior_C::ExecuteUbergraph_UseTamedNoTargetBehavior(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ExecuteUbergraph_UseTamedNoTargetBehavior");

	UUseTamedNoTargetBehavior_C_ExecuteUbergraph_UseTamedNoTargetBehavior_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
