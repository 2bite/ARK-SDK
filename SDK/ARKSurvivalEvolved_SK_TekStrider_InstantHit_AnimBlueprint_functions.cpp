// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_TekStrider_InstantHit_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.BlueprintPlayAnimationEvent
// ()
// Parameters:
// class UAnimMontage**           AnimationMontage               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          playedAnimLength               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USK_TekStrider_InstantHit_AnimBlueprint_C::BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.BlueprintPlayAnimationEvent");

	USK_TekStrider_InstantHit_AnimBlueprint_C_BlueprintPlayAnimationEvent_Params params;
	params.AnimationMontage = AnimationMontage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playedAnimLength != nullptr)
		*playedAnimLength = params.playedAnimLength;
}


// Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_TekStrider_InstantHit_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.BlueprintUpdateAnimation");

	USK_TekStrider_InstantHit_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.ExecuteUbergraph_SK_TekStrider_InstantHit_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_TekStrider_InstantHit_AnimBlueprint_C::ExecuteUbergraph_SK_TekStrider_InstantHit_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.ExecuteUbergraph_SK_TekStrider_InstantHit_AnimBlueprint");

	USK_TekStrider_InstantHit_AnimBlueprint_C_ExecuteUbergraph_SK_TekStrider_InstantHit_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
