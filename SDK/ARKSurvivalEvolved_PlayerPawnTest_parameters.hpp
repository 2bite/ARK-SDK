#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerPawnTest_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
struct APlayerPawnTest_C_GetTheNumChibiLevelUps_Params
{
	int                                                OutVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
struct APlayerPawnTest_C_SetNumChibiLevelUps_Params
{
	int                                                NewNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
struct APlayerPawnTest_C_BPGetPlayerHexagonCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
struct APlayerPawnTest_C_BPSetPlayerHexagonCount_Params
{
	int*                                               NewHexagonCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
struct APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params
{
	TArray<class USkeletalMeshComponent*>              SkelMeshComponents;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
struct APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
struct APlayerPawnTest_C_ShowHUDNotification_Params
{
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifetimeSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound
struct APlayerPawnTest_C_TrySpawnMound_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
struct APlayerPawnTest_C_TrySpawnMoundEx_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
struct APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params
{
	class USkeletalMeshComponent**                     firstPersonMasterPosecomponent;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
struct APlayerPawnTest_C_DefeatedBoss_Params
{
	class APrimalDinoCharacter*                        BossCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BossTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BossDifficulty;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
struct APlayerPawnTest_C_ServerAscend_Params
{
	int                                                DifficultyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediateAscend;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressAchievements;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
struct APlayerPawnTest_C_PlayerCommand_Params
{
	class FString*                                     TheCommand;                                               // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlayerPawnTest.PlayerPawnTest_C.InitHairRestDistance
struct APlayerPawnTest_C_InitHairRestDistance_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.SetLastTransforms
struct APlayerPawnTest_C_SetLastTransforms_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.BPNonDedicatedPostAnimUpdate
struct APlayerPawnTest_C_BPNonDedicatedPostAnimUpdate_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.Setup Collision Volumes
struct APlayerPawnTest_C_Setup_Collision_Volumes_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.SetupNewHairstyle
struct APlayerPawnTest_C_SetupNewHairstyle_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.UpdateHair
struct APlayerPawnTest_C_UpdateHair_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.SetHairParams
struct APlayerPawnTest_C_SetHairParams_Params
{
	struct FVector                                     HairSocketLoc;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    HairSocketRot;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     NeckSocketLoc;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    NeckSocketrot;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.SimulateHair
struct APlayerPawnTest_C_SimulateHair_Params
{
	struct FVector                                     HairSocketLoc;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    HairSocketRot;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ChestSocketLoc;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ChestSocketRot;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript
struct APlayerPawnTest_C_UserConstructionScript_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay
struct APlayerPawnTest_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
struct APlayerPawnTest_C_NetClientAscend_Params
{
	int                                                AscendIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediateAscend;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
struct APlayerPawnTest_C_ClientShowHUDNotification_Params
{
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifetimeSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension
struct APlayerPawnTest_C_NetClientPreLoadAcension_Params
{
};

// Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
struct APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
