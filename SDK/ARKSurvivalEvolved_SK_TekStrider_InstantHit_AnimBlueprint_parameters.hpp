#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_TekStrider_InstantHit_AnimBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.BlueprintPlayAnimationEvent
struct USK_TekStrider_InstantHit_AnimBlueprint_C_BlueprintPlayAnimationEvent_Params
{
	class UAnimMontage**                               AnimationMontage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              playedAnimLength;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.BlueprintUpdateAnimation
struct USK_TekStrider_InstantHit_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.ExecuteUbergraph_SK_TekStrider_InstantHit_AnimBlueprint
struct USK_TekStrider_InstantHit_AnimBlueprint_C_ExecuteUbergraph_SK_TekStrider_InstantHit_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
