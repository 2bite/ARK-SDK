#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnJumped
struct AIguanodon_Character_BP_C_OnJumped_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.CanJumpInternal
struct AIguanodon_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetAddForwardVelocityOnJump
struct AIguanodon_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnRep_bIsBiped
struct AIguanodon_Character_BP_C_OnRep_bIsBiped_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ToggleStance
struct AIguanodon_Character_BP_C_ToggleStance_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTimerServer
struct AIguanodon_Character_BP_C_BPTimerServer_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AIguanodon_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.StartChangingStance
struct AIguanodon_Character_BP_C_StartChangingStance_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Get Correct Stance Switch Anim
struct AIguanodon_Character_BP_C_Get_Correct_Stance_Switch_Anim_Params
{
	class UAnimMontage*                                animRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPUnstasis
struct AIguanodon_Character_BP_C_BPUnstasis_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.InitIguanodon
struct AIguanodon_Character_BP_C_InitIguanodon_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.NetSetHasFruitInInventory
struct AIguanodon_Character_BP_C_NetSetHasFruitInInventory_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Update Move SpeedByStance
struct AIguanodon_Character_BP_C_Update_Move_SpeedByStance_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateStance
struct AIguanodon_Character_BP_C_UpdateStance_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateHasFruitInInventory
struct AIguanodon_Character_BP_C_UpdateHasFruitInInventory_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTryMultiUse
struct AIguanodon_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetMultiUseEntries
struct AIguanodon_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ConvertFruitToSeeds
struct AIguanodon_Character_BP_C_ConvertFruitToSeeds_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPNotifySetRider
struct AIguanodon_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Net SetCurrentStance
struct AIguanodon_Character_BP_C_Net_SetCurrentStance_Params
{
	bool                                               isBiped;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPDoAttack
struct AIguanodon_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SetUseStamina
struct AIguanodon_Character_BP_C_SetUseStamina_Params
{
	bool                                               newUse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveAnyDamage
struct AIguanodon_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintCanRiderAttack
struct AIguanodon_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ClientSetBipedState
struct AIguanodon_Character_BP_C_ClientSetBipedState_Params
{
	bool                                               isBiped;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.GetDefaultDino
struct AIguanodon_Character_BP_C_GetDefaultDino_Params
{
	class AIguanodon_Character_BP_C*                   ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UserConstructionScript
struct AIguanodon_Character_BP_C_UserConstructionScript_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Server_SetWantsToSwitchStance
struct AIguanodon_Character_BP_C_Server_SetWantsToSwitchStance_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SwitchStanceAfterDelay
struct AIguanodon_Character_BP_C_SwitchStanceAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveBeginPlay
struct AIguanodon_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ExecuteUbergraph_Iguanodon_Character_BP
struct AIguanodon_Character_BP_C_ExecuteUbergraph_Iguanodon_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
