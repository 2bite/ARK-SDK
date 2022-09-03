#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Space_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorReceivedRider
struct AGen2_AreaBuff_Space_C_DinoInstigatorReceivedRider_Params
{
	class AShooterCharacter**                          Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorClearedRider
struct AGen2_AreaBuff_Space_C_DinoInstigatorClearedRider_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UpdateDayCycleManager
struct AGen2_AreaBuff_Space_C_UpdateDayCycleManager_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.AllowFalling
struct AGen2_AreaBuff_Space_C_AllowFalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.HasBuffToIgnoreZeroG
struct AGen2_AreaBuff_Space_C_HasBuffToIgnoreZeroG_Params
{
	bool                                               Ignore;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventNotifySound
struct AGen2_AreaBuff_Space_C_BPPreventNotifySound_Params
{
	class USoundBase**                                 SoundIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ClearRotation
struct AGen2_AreaBuff_Space_C_ClearRotation_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.IsInstigatorClimbing
struct AGen2_AreaBuff_Space_C_IsInstigatorClimbing_Params
{
	bool                                               IsClimbing;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestorePlayerMovement
struct AGen2_AreaBuff_Space_C_RestorePlayerMovement_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitializePlayerZeroGMovement
struct AGen2_AreaBuff_Space_C_InitializePlayerZeroGMovement_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestoreDinoMovement
struct AGen2_AreaBuff_Space_C_RestoreDinoMovement_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitialzeDinoZeroGMovement
struct AGen2_AreaBuff_Space_C_InitialzeDinoZeroGMovement_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOverrideCharacterNewFallVelocity
struct AGen2_AreaBuff_Space_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StopFlying
struct AGen2_AreaBuff_Space_C_StopFlying_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BuffTickServer
struct AGen2_AreaBuff_Space_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.CheckGround
struct AGen2_AreaBuff_Space_C_CheckGround_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPDeactivated
struct AGen2_AreaBuff_Space_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPGetGravityZScale
struct AGen2_AreaBuff_Space_C_BPGetGravityZScale_Params
{
	float*                                             currentScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StartFlying
struct AGen2_AreaBuff_Space_C_StartFlying_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOnInstigatorMovementModeChangedNotify
struct AGen2_AreaBuff_Space_C_BPOnInstigatorMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventInstigatorMovementMode
struct AGen2_AreaBuff_Space_C_BPPreventInstigatorMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPSetupForInstigator
struct AGen2_AreaBuff_Space_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UserConstructionScript
struct AGen2_AreaBuff_Space_C_UserConstructionScript_Params
{
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoMounted
struct AGen2_AreaBuff_Space_C_DinoMounted_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoUnmounted
struct AGen2_AreaBuff_Space_C_DinoUnmounted_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLanded
struct AGen2_AreaBuff_Space_C_FlyingDinoLanded_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoStartLanding
struct AGen2_AreaBuff_Space_C_FlyingDinoStartLanding_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLandingInterrupted
struct AGen2_AreaBuff_Space_C_FlyingDinoLandingInterrupted_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ExecuteUbergraph_Gen2_AreaBuff_Space
struct AGen2_AreaBuff_Space_C_ExecuteUbergraph_Gen2_AreaBuff_Space_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
