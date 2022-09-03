#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HealAura_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HealAura.Buff_HealAura_C.IsAlly
struct ABuff_HealAura_C_IsAlly_Params
{
	int                                                otherTargetingTeam;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAllyOrSomeTeam;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.BPClientHandleNetExecCommand
struct ABuff_HealAura_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.HasReachedMaxHealedCharacters
struct ABuff_HealAura_C_HasReachedMaxHealedCharacters_Params
{
	bool                                               hasReachedMax;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.TryHealCharacterAndSpawnParticles
struct ABuff_HealAura_C_TryHealCharacterAndSpawnParticles_Params
{
	class APrimalCharacter*                            characterToHeal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dontHealIfAlreadyHealing;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.CheckStopHealingCondition
struct ABuff_HealAura_C_CheckStopHealingCondition_Params
{
	bool                                               shouldStopHealing;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotification
struct ABuff_HealAura_C_ShowHUDNotification_Params
{
	struct FStatusValueModifierDescription             notificationDescription;                                  // (Parm)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.CalculateFoodConsumptionForHealingAmount
struct ABuff_HealAura_C_CalculateFoodConsumptionForHealingAmount_Params
{
	float                                              healAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              foodAmount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.StopHealing
struct ABuff_HealAura_C_StopHealing_Params
{
	bool                                               doMulticast;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.Get Current Status Amount
struct ABuff_HealAura_C_Get_Current_Status_Amount_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           statusField;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              food;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.ConsumeFood
struct ABuff_HealAura_C_ConsumeFood_Params
{
	float                                              foodAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.DisableHealingForCharacter
struct ABuff_HealAura_C_DisableHealingForCharacter_Params
{
	class APrimalCharacter*                            characterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               disableParticles;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.RestoreBitFlag
struct ABuff_HealAura_C_RestoreBitFlag_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.CanHealCharacter
struct ABuff_HealAura_C_CanHealCharacter_Params
{
	class APrimalCharacter*                            PrimalCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canHeal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.CleanHealArray
struct ABuff_HealAura_C_CleanHealArray_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.BuffTickServer
struct ABuff_HealAura_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.Activate Healing
struct ABuff_HealAura_C_Activate_Healing_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.TryHeal Character and Consume Food
struct ABuff_HealAura_C_TryHeal_Character_and_Consume_Food_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSelf;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               couldHeal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.CheckFoodCondition
struct ABuff_HealAura_C_CheckFoodCondition_Params
{
	bool                                               hasEnoughFood;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.HealCharacter
struct ABuff_HealAura_C_HealCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.Restore All Bit Flags
struct ABuff_HealAura_C_Restore_All_Bit_Flags_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.BPDeactivated
struct ABuff_HealAura_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.ReceiveDestroyed
struct ABuff_HealAura_C_ReceiveDestroyed_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.Calculate Healing Amount For Character
struct ABuff_HealAura_C_Calculate_Healing_Amount_For_Character_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSelf;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              healingAmount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.UserConstructionScript
struct ABuff_HealAura_C_UserConstructionScript_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.FadeOut__FinishedFunc
struct ABuff_HealAura_C_FadeOut__FinishedFunc_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.FadeOut__UpdateFunc
struct ABuff_HealAura_C_FadeOut__UpdateFunc_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.FadeIn__FinishedFunc
struct ABuff_HealAura_C_FadeIn__FinishedFunc_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.FadeIn__UpdateFunc
struct ABuff_HealAura_C_FadeIn__UpdateFunc_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.SpawnHealParticleOnCharacter
struct ABuff_HealAura_C_SpawnHealParticleOnCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.FadeInPulse
struct ABuff_HealAura_C_FadeInPulse_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.ReceiveBeginPlay
struct ABuff_HealAura_C_ReceiveBeginPlay_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse
struct ABuff_HealAura_C_FadeOutPulse_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.DestroyHealingParticleForCharacter_Multicast
struct ABuff_HealAura_C_DestroyHealingParticleForCharacter_Multicast_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles_Multicast
struct ABuff_HealAura_C_DeactivateAndDestroyAllParticles_Multicast_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.DeactivateAllParticles
struct ABuff_HealAura_C_DeactivateAllParticles_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.DestroyAllHealingParticles
struct ABuff_HealAura_C_DestroyAllHealingParticles_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles
struct ABuff_HealAura_C_DeactivateAndDestroyAllParticles_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse_Multicast
struct ABuff_HealAura_C_FadeOutPulse_Multicast_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.FadeInPulse_Multicast
struct ABuff_HealAura_C_FadeInPulse_Multicast_Params
{
};

// Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotificationForPlayer_FromServer
struct ABuff_HealAura_C_ShowHUDNotificationForPlayer_FromServer_Params
{
	class AShooterCharacter*                           PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.DeactivateAfterDelay
struct ABuff_HealAura_C_DeactivateAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura.Buff_HealAura_C.ExecuteUbergraph_Buff_HealAura
struct ABuff_HealAura_C_ExecuteUbergraph_Buff_HealAura_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
