#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fenrir_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.AllowPlayMontage
struct AFenrir_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTimerServer
struct AFenrir_Character_BP_C_BPTimerServer_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BoostNearbyDirewolves
struct AFenrir_Character_BP_C_BoostNearbyDirewolves_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDinoPostBeginPlay
struct AFenrir_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPSetupTamed
struct AFenrir_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateNaturalArmor
struct AFenrir_Character_BP_C_UpdateNaturalArmor_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPServerHandleNetExecCommand
struct AFenrir_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateRiderBuff
struct AFenrir_Character_BP_C_UpdateRiderBuff_Params
{
	bool                                               remove;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPAdjustDamage
struct AFenrir_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPGetHUDElements
struct AFenrir_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.SpawnIceBiteVFX
struct AFenrir_Character_BP_C_SpawnIceBiteVFX_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BP_OnSetDeath
struct AFenrir_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetupSpineMats
struct AFenrir_Character_BP_C_SetupSpineMats_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifyClearRider
struct AFenrir_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanJumpInternal
struct AFenrir_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifySetRider
struct AFenrir_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTriggerStasisEvent
struct AFenrir_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDoAttack
struct AFenrir_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAdjustOutputDamage
struct AFenrir_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.UnriddenEndIceState
struct AFenrir_Character_BP_C_UnriddenEndIceState_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPOnStaminaDrained
struct AFenrir_Character_BP_C_BPOnStaminaDrained_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanAttack
struct AFenrir_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanRiderAttack
struct AFenrir_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina
struct AFenrir_Character_BP_C_Does_Fenrir_Have_Enough_Stamina_Params
{
	float                                              needsStamina;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina Pure
struct AFenrir_Character_BP_C_Does_Fenrir_Have_Enough_Stamina_Pure_Params
{
	float                                              needsStamina;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanUseIceState
struct AFenrir_Character_BP_C_CanUseIceState_Params
{
	bool                                               isForStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.NetSetUseSpines
struct AFenrir_Character_BP_C_NetSetUseSpines_Params
{
	bool                                               newUse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.OnRep_IsIcey
struct AFenrir_Character_BP_C_OnRep_IsIcey_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir
struct AFenrir_Character_BP_C_InitFenrir_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetIceStateActive
struct AFenrir_Character_BP_C_SetIceStateActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AFenrir_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.UserConstructionScript
struct AFenrir_Character_BP_C_UserConstructionScript_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__FinishedFunc
struct AFenrir_Character_BP_C_Fade_IceSpines__FinishedFunc_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__UpdateFunc
struct AFenrir_Character_BP_C_Fade_IceSpines__UpdateFunc_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__FinishedFunc
struct AFenrir_Character_BP_C_Timeline_PlayDissolve__FinishedFunc_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__UpdateFunc
struct AFenrir_Character_BP_C_Timeline_PlayDissolve__UpdateFunc_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__FinishedFunc
struct AFenrir_Character_BP_C_Timeline_ClearEmissive__FinishedFunc_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__UpdateFunc
struct AFenrir_Character_BP_C_Timeline_ClearEmissive__UpdateFunc_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayFadeIceSpines
struct AFenrir_Character_BP_C_PlayFadeIceSpines_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReverseFadeIceSpines
struct AFenrir_Character_BP_C_ReverseFadeIceSpines_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetNewTime_Fade_IceSpines
struct AFenrir_Character_BP_C_SetNewTime_Fade_IceSpines_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_SetNewTime_Fade_IceSpines
struct AFenrir_Character_BP_C_Multi_SetNewTime_Fade_IceSpines_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PlayFade
struct AFenrir_Character_BP_C_Multi_PlayFade_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_HardSetSpinesActive
struct AFenrir_Character_BP_C_Multi_HardSetSpinesActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReceiveBeginPlay
struct AFenrir_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir_NextTick
struct AFenrir_Character_BP_C_InitFenrir_NextTick_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenir_Event
struct AFenrir_Character_BP_C_InitFenir_Event_Params
{
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PrepIceState
struct AFenrir_Character_BP_C_Multi_PrepIceState_Params
{
	bool                                               Prevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayDissolve
struct AFenrir_Character_BP_C_PlayDissolve_Params
{
	bool                                               Is0To1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.ClearEmissive
struct AFenrir_Character_BP_C_ClearEmissive_Params
{
	float                                              StartingEmissive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.ExecuteUbergraph_Fenrir_Character_BP
struct AFenrir_Character_BP_C_ExecuteUbergraph_Fenrir_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
