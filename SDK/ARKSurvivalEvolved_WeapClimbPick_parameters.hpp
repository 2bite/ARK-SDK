#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapClimbPick_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify
struct AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params
{
	struct FWeaponAnim                                 Animation;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPlayBothFirstAndThirdPerson;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToInstigator;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPauseOnFinish1P;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
struct AWeapClimbPick_C_StartUnequipEvent_Params
{
};

// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
struct AWeapClimbPick_C_BPModifyFOV_Params
{
	float*                                             inFOV;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
struct AWeapClimbPick_C_SetSourceLocation_Params
{
	class UParticleSystemComponent*                    Particle_System;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewSourcePoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
struct AWeapClimbPick_C_SetTemplateTo_Params
{
	class UParticleSystemComponent*                    Particle_System;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             New_Template;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
struct AWeapClimbPick_C_BPUpdateClimbTarget_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bClimbing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchorPosition;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     AnchorNormal;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bCanClimb;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCanLand;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClimbLocation;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ClimbNormal;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bHudVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapClimbPick.WeapClimbPick_C.UserConstructionScript
struct AWeapClimbPick_C_UserConstructionScript_Params
{
};

// Function WeapClimbPick.WeapClimbPick_C.ExecuteUbergraph_WeapClimbPick
struct AWeapClimbPick_C_ExecuteUbergraph_WeapClimbPick_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
