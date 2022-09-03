// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_AllowNormalAIWhileClimbing_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Climber_AllowNormalAIWhileClimbing_DK.Climber_AllowNormalAIWhileClimbing_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UClimber_AllowNormalAIWhileClimbing_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Climber_AllowNormalAIWhileClimbing_DK.Climber_AllowNormalAIWhileClimbing_DK_C.ReceiveConditionCheck");

	UClimber_AllowNormalAIWhileClimbing_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Climber_AllowNormalAIWhileClimbing_DK.Climber_AllowNormalAIWhileClimbing_DK_C.ExecuteUbergraph_Climber_AllowNormalAIWhileClimbing_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UClimber_AllowNormalAIWhileClimbing_DK_C::ExecuteUbergraph_Climber_AllowNormalAIWhileClimbing_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Climber_AllowNormalAIWhileClimbing_DK.Climber_AllowNormalAIWhileClimbing_DK_C.ExecuteUbergraph_Climber_AllowNormalAIWhileClimbing_DK");

	UClimber_AllowNormalAIWhileClimbing_DK_C_ExecuteUbergraph_Climber_AllowNormalAIWhileClimbing_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
