#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Enforcer_AnimBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.IsDinoRunning
struct UEnforcer_AnimBlueprint_C_IsDinoRunning_Params
{
	class ADino_Character_BP_Climber_C**               Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Running;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.GetStrafeBlendspacePlayRate
struct UEnforcer_AnimBlueprint_C_GetStrafeBlendspacePlayRate_Params
{
	float*                                             forwardVelocity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             rightVelocity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  BlendspaceInputs;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendspacePlayRate;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ShouldPlayClimbRunAnim
struct UEnforcer_AnimBlueprint_C_ShouldPlayClimbRunAnim_Params
{
	bool                                               PlayClimbRun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintUpdateAnimation
struct UEnforcer_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintInitializeAnimation
struct UEnforcer_AnimBlueprint_C_BlueprintInitializeAnimation_Params
{
};

// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ExecuteUbergraph_Enforcer_AnimBlueprint
struct UEnforcer_AnimBlueprint_C_ExecuteUbergraph_Enforcer_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
