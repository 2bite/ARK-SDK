#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Daeodon_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestDamage
struct ADaeodon_Character_BP_C_BPModifyHarvestDamage_Params
{
	class UPrimalHarvestingComponent**                 harvestComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.IsAlly
struct ADaeodon_Character_BP_C_IsAlly_Params
{
	int                                                otherTargetingTeam;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSameTeamOrAlly;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.TryTrigger Attack
struct ADaeodon_Character_BP_C_TryTrigger_Attack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.ReceiveAnyDamage
struct ADaeodon_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.SendNetExecCommandToCharacter
struct ADaeodon_Character_BP_C_SendNetExecCommandToCharacter_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.ShowHUDNotification
struct ADaeodon_Character_BP_C_ShowHUDNotification_Params
{
	struct FStatusValueModifierDescription             notificationDescription;                                  // (Parm)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPClientHandleNetExecCommand
struct ADaeodon_Character_BP_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPNotifySetRider
struct ADaeodon_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.EnablePassiveHealing
struct ADaeodon_Character_BP_C_EnablePassiveHealing_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.DisablePassiveHealing
struct ADaeodon_Character_BP_C_DisablePassiveHealing_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPNotifyClearRider
struct ADaeodon_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.Trigger Healing
struct ADaeodon_Character_BP_C_Trigger_Healing_Params
{
	int                                                BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isShortHealing;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.DisableActiveHealing
struct ADaeodon_Character_BP_C_DisableActiveHealing_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.ToggleActiveHealing
struct ADaeodon_Character_BP_C_ToggleActiveHealing_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintCanAttack
struct ADaeodon_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPTimerServer
struct ADaeodon_Character_BP_C_BPTimerServer_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintDrawFloatingHUD
struct ADaeodon_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.Toggle Passive Healing
struct ADaeodon_Character_BP_C_Toggle_Passive_Healing_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPGetMultiUseEntries
struct ADaeodon_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPTryMultiUse
struct ADaeodon_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.OnJumped
struct ADaeodon_Character_BP_C_OnJumped_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPOnMovementModeChangedNotify
struct ADaeodon_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintCanRiderAttack
struct ADaeodon_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPDoAttack
struct ADaeodon_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestingQuantity
struct ADaeodon_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestingWeightsArray
struct ADaeodon_Character_BP_C_BPModifyHarvestingWeightsArray_Params
{
	TArray<float>                                      resourceWeightsIn;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimalItem*>                         resourceItems;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      resourceWeightsOut;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.UserConstructionScript
struct ADaeodon_Character_BP_C_UserConstructionScript_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.MovementChangedEvent
struct ADaeodon_Character_BP_C_MovementChangedEvent_Params
{
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ADaeodon_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.ExecuteUbergraph_Daeodon_Character_BP
struct ADaeodon_Character_BP_C_ExecuteUbergraph_Daeodon_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
