#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Purlovia_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.HasSelfBuried
struct APurlovia_Character_BP_C_HasSelfBuried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPIsHidden
struct APurlovia_Character_BP_C_BPIsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateCollisions
struct APurlovia_Character_BP_C_UpdateCollisions_Params
{
	bool                                               Buried;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanUnburyNormal
struct APurlovia_Character_BP_C_CanUnburyNormal_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound Out Particles
struct APurlovia_Character_BP_C_Show_Mound_Out_Particles_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerNonDedicated
struct APurlovia_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Update Bury Mesh Transform Variable
struct APurlovia_Character_BP_C_Update_Bury_Mesh_Transform_Variable_Params
{
	bool                                               updateMeshLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound In Particles
struct APurlovia_Character_BP_C_Show_Mound_In_Particles_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Bury MoundIfNeeded
struct APurlovia_Character_BP_C_Show_Bury_MoundIfNeeded_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Hide Bury Mound
struct APurlovia_Character_BP_C_Hide_Bury_Mound_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.RotateToTarget
struct APurlovia_Character_BP_C_RotateToTarget_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidTarget
struct APurlovia_Character_BP_C_IsValidTarget_Params
{
	bool                                               DoWeightCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAdjustOutputDamage
struct APurlovia_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.isBuryAttack
struct APurlovia_Character_BP_C_isBuryAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isBuryAttack;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPDoAttack
struct APurlovia_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryBury
struct APurlovia_Character_BP_C_TryBury_Params
{
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               skipBuriedCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               couldBury;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Should Show Bury Mound
struct APurlovia_Character_BP_C_Should_Show_Bury_Mound_Params
{
	bool                                               shouldShowMesh;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPAdjustDamage
struct APurlovia_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidSurface
struct APurlovia_Character_BP_C_IsValidSurface_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPCharacterSleeped
struct APurlovia_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnAnimPlayedNotify
struct APurlovia_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishBuriedJump
struct APurlovia_Character_BP_C_FinishBuriedJump_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.CalculateBuryMeshTransform
struct APurlovia_Character_BP_C_CalculateBuryMeshTransform_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintDrawFloatingHUD
struct APurlovia_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Up Impulse
struct APurlovia_Character_BP_C_Get_Buried_Attack_Up_Impulse_Params
{
	struct FVector                                     UpImpulse;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Down Impulse
struct APurlovia_Character_BP_C_Get_Buried_Attack_Down_Impulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnRep_isBuried
struct APurlovia_Character_BP_C_OnRep_isBuried_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsDinoInWater
struct APurlovia_Character_BP_C_IsDinoInWater_Params
{
	bool                                               onWater;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishNormalJump
struct APurlovia_Character_BP_C_FinishNormalJump_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ApplyNormalJumpImpulse
struct APurlovia_Character_BP_C_ApplyNormalJumpImpulse_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnJumped
struct APurlovia_Character_BP_C_OnJumped_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintCanAttack
struct APurlovia_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnMovementModeChangedNotify
struct APurlovia_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPNotifyBumpedPawn
struct APurlovia_Character_BP_C_BPNotifyBumpedPawn_Params
{
	class APrimalCharacter**                           BumpedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Can Unbury
struct APurlovia_Character_BP_C_Can_Unbury_Params
{
	bool                                               canComeOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShouldComeOut
struct APurlovia_Character_BP_C_ShouldComeOut_Params
{
	bool                                               comeOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Has Conflict with AI
struct APurlovia_Character_BP_C_Has_Conflict_with_AI_Params
{
	bool                                               hasConflict;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.canBury
struct APurlovia_Character_BP_C_canBury_Params
{
	bool                                               forceBury;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canBury;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanPlayBuryAnim
struct APurlovia_Character_BP_C_CanPlayBuryAnim_Params
{
	bool                                               canPlayBury;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanJumpAtTarget
struct APurlovia_Character_BP_C_CanJumpAtTarget_Params
{
	bool                                               FoundTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerServer
struct APurlovia_Character_BP_C_BPTimerServer_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPGetMultiUseEntries
struct APurlovia_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTryMultiUse
struct APurlovia_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.UserConstructionScript
struct APurlovia_Character_BP_C_UserConstructionScript_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Bury
struct APurlovia_Character_BP_C_Bury_Params
{
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Attack
struct APurlovia_Character_BP_C_ComeOut_Attack_Params
{
	int                                                Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Normal
struct APurlovia_Character_BP_C_ComeOut_Normal_Params
{
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutAttack
struct APurlovia_Character_BP_C_TryComeOutAttack_Params
{
	int                                                Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnComeOut
struct APurlovia_Character_BP_C_OnComeOut_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnNormalJump
struct APurlovia_Character_BP_C_OnNormalJump_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPUnstasis
struct APurlovia_Character_BP_C_BPUnstasis_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnMovementChanged
struct APurlovia_Character_BP_C_OnMovementChanged_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct APurlovia_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateMeshesAfterDelay
struct APurlovia_Character_BP_C_UpdateMeshesAfterDelay_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutShortRange
struct APurlovia_Character_BP_C_ComeOutShortRange_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutLongRange
struct APurlovia_Character_BP_C_ComeOutLongRange_Params
{
	int                                                Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnPurloviaSleeped
struct APurlovia_Character_BP_C_OnPurloviaSleeped_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.PreComeOutActions
struct APurlovia_Character_BP_C_PreComeOutActions_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutNormal
struct APurlovia_Character_BP_C_TryComeOutNormal_Params
{
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceUnbury;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnBuried
struct APurlovia_Character_BP_C_OnBuried_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShowBuryMeshAfterDelay
struct APurlovia_Character_BP_C_ShowBuryMeshAfterDelay_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.HideBuryMeshAfterDelay
struct APurlovia_Character_BP_C_HideBuryMeshAfterDelay_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.FastBury
struct APurlovia_Character_BP_C_FastBury_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnClientConnect
struct APurlovia_Character_BP_C_OnClientConnect_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnWildServerConnect
struct APurlovia_Character_BP_C_OnWildServerConnect_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnTamedServerConnect
struct APurlovia_Character_BP_C_OnTamedServerConnect_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ReceiveBeginPlay
struct APurlovia_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ExecuteUbergraph_Purlovia_Character_BP
struct APurlovia_Character_BP_C_ExecuteUbergraph_Purlovia_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
