// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NervaNote_RIG_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NervaNote_RIG_AnimBP.NervaNote_RIG_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UNervaNote_RIG_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function NervaNote_RIG_AnimBP.NervaNote_RIG_AnimBP_C.BlueprintUpdateAnimation");

	UNervaNote_RIG_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NervaNote_RIG_AnimBP.NervaNote_RIG_AnimBP_C.ExecuteUbergraph_NervaNote_RIG_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNervaNote_RIG_AnimBP_C::ExecuteUbergraph_NervaNote_RIG_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NervaNote_RIG_AnimBP.NervaNote_RIG_AnimBP_C.ExecuteUbergraph_NervaNote_RIG_AnimBP");

	UNervaNote_RIG_AnimBP_C_ExecuteUbergraph_NervaNote_RIG_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
