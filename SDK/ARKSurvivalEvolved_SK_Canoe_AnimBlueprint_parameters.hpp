#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_Canoe_AnimBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.GetPredictedServerCanoeLocation
struct USK_Canoe_AnimBlueprint_C_GetPredictedServerCanoeLocation_Params
{
	struct FVector                                     PredictedLoc;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.CheckForSimCanoeTransformCorrection
struct USK_Canoe_AnimBlueprint_C_CheckForSimCanoeTransformCorrection_Params
{
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeRotationTargets
struct USK_Canoe_AnimBlueprint_C_UpdateSimCanoeRotationTargets_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeLocationTargets
struct USK_Canoe_AnimBlueprint_C_UpdateSimCanoeLocationTargets_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateValidCanoeOwnerRef
struct USK_Canoe_AnimBlueprint_C_UpdateValidCanoeOwnerRef_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimulatedCanoeTransform
struct USK_Canoe_AnimBlueprint_C_UpdateSimulatedCanoeTransform_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_936
struct USK_Canoe_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_936_Params
{
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintUpdateAnimation
struct USK_Canoe_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintInitializeAnimation
struct USK_Canoe_AnimBlueprint_C_BlueprintInitializeAnimation_Params
{
};

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.ExecuteUbergraph_SK_Canoe_AnimBlueprint
struct USK_Canoe_AnimBlueprint_C_ExecuteUbergraph_SK_Canoe_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
