// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TargetIsFlyerDino_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTargetIsFlyerDino_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C.ReceiveConditionCheck");

	UTargetIsFlyerDino_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C.ExecuteUbergraph_TargetIsFlyerDino_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTargetIsFlyerDino_DK_C::ExecuteUbergraph_TargetIsFlyerDino_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C.ExecuteUbergraph_TargetIsFlyerDino_DK");

	UTargetIsFlyerDino_DK_C_ExecuteUbergraph_TargetIsFlyerDino_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
