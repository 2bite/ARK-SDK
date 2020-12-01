#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Troodon_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Troodon_Character_BP.Troodon_Character_BP_C.OverrideFinalWanderLocation
struct ATroodon_Character_BP_C_OverrideFinalWanderLocation_Params
{
	struct FVector                                     outVec;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.IsLocationInLight
struct ATroodon_Character_BP_C_IsLocationInLight_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInLight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOfLightSource;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.OverrideRandomWanderLocation
struct ATroodon_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BPShouldForceFlee
struct ATroodon_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BPGetAddForwardVelocityOnJump
struct ATroodon_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.LevelUpSonar
struct ATroodon_Character_BP_C_LevelUpSonar_Params
{
	int                                                Selector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BPClientDoMultiUse
struct ATroodon_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.DoSonar
struct ATroodon_Character_BP_C_DoSonar_Params
{
	int                                                SonarType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BPTryMultiUse
struct ATroodon_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BPGetMultiUseEntries
struct ATroodon_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.DrawSonarPoints
struct ATroodon_Character_BP_C_DrawSonarPoints_Params
{
	int                                                SonarType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SonarPoints;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AShooterHUD*                                 TheHUD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BlueprintDrawFloatingHUD
struct ATroodon_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BPOnMovementModeChangedNotify
struct ATroodon_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BlueprintAdjustOutputDamage
struct ATroodon_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.OnJumped
struct ATroodon_Character_BP_C_OnJumped_Params
{
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.OnRep_EyesActivated
struct ATroodon_Character_BP_C_OnRep_EyesActivated_Params
{
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BPTimerServer
struct ATroodon_Character_BP_C_BPTimerServer_Params
{
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.BPKilledSomethingEvent
struct ATroodon_Character_BP_C_BPKilledSomethingEvent_Params
{
	class APrimalCharacter**                           killedTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.UserConstructionScript
struct ATroodon_Character_BP_C_UserConstructionScript_Params
{
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.ReceiveBeginPlay
struct ATroodon_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.NetDisplaySonar
struct ATroodon_Character_BP_C_NetDisplaySonar_Params
{
	int                                                SonarType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SonarPoints;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.Net Update Last Time Sonar Used
struct ATroodon_Character_BP_C_Net_Update_Last_Time_Sonar_Used_Params
{
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.AnimNotify_DoSonar
struct ATroodon_Character_BP_C_AnimNotify_DoSonar_Params
{
};

// Function Troodon_Character_BP.Troodon_Character_BP_C.ExecuteUbergraph_Troodon_Character_BP
struct ATroodon_Character_BP_C_ExecuteUbergraph_Troodon_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
