#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stego_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Stego_Character_BP.Stego_Character_BP_C.BPOverrideMoveToOrder
struct AStego_Character_BP_C_BPOverrideMoveToOrder_Params
{
	struct FVector*                                    MoveToLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          OrderingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPGetCrosshairColor
struct AStego_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustImpulseFromDamage
struct AStego_Character_BP_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPHandleControllerInitiatedAttack
struct AStego_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.OnRep_Impaling
struct AStego_Character_BP_C_OnRep_Impaling_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustAttackIndex
struct AStego_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.CheckCanImpaleActor
struct AStego_Character_BP_C_CheckCanImpaleActor_Params
{
	class APrimalCharacter*                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanImpale;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPGetDragSocketName
struct AStego_Character_BP_C_BPGetDragSocketName_Params
{
	class APrimalCharacter**                           DraggingChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPGetDragSocketDinoName
struct AStego_Character_BP_C_BPGetDragSocketDinoName_Params
{
	class APrimalDinoCharacter**                       aGrabbedDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.ReceiveTick
struct AStego_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AStego_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AStego_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPHandleUseButtonPress
struct AStego_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPNotifyClearRider
struct AStego_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPNotifySetRider
struct AStego_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPModifyHarvestingWeightsArray
struct AStego_Character_BP_C_BPModifyHarvestingWeightsArray_Params
{
	TArray<float>                                      resourceWeightsIn;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimalItem*>                         resourceItems;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      resourceWeightsOut;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BlueprintAdjustOutputDamage
struct AStego_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustDamage
struct AStego_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.OnRep_BackplateMode
struct AStego_Character_BP_C_OnRep_BackplateMode_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPGetHUDElements
struct AStego_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Stego_Character_BP.Stego_Character_BP_C.SetBackplateMode
struct AStego_Character_BP_C_SetBackplateMode_Params
{
	TEnumAsByte<E_StegoBackplateMode>                  BackplateMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.SwitchBackplateMode
struct AStego_Character_BP_C_SwitchBackplateMode_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.BPDoAttack
struct AStego_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.UserConstructionScript
struct AStego_Character_BP_C_UserConstructionScript_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.ReceiveBeginPlay
struct AStego_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.Dismount
struct AStego_Character_BP_C_Dismount_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.TryImpaleTarget
struct AStego_Character_BP_C_TryImpaleTarget_Params
{
	class APrimalCharacter*                            ImpaledTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.ReleaseImpalingTarget
struct AStego_Character_BP_C_ReleaseImpalingTarget_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.HandleStopImpaling
struct AStego_Character_BP_C_HandleStopImpaling_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.SetBleedingVFXLocation
struct AStego_Character_BP_C_SetBleedingVFXLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.DoImpaleTarget
struct AStego_Character_BP_C_DoImpaleTarget_Params
{
	class APrimalCharacter*                            ImpaledTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Stego_Character_BP.Stego_Character_BP_C.PlayPreventDismountVFX
struct AStego_Character_BP_C_PlayPreventDismountVFX_Params
{
};

// Function Stego_Character_BP.Stego_Character_BP_C.ExecuteUbergraph_Stego_Character_BP
struct AStego_Character_BP_C_ExecuteUbergraph_Stego_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
