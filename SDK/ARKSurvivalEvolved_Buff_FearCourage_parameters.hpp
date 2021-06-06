#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FearCourage_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FearCourage.Buff_FearCourage_C.GetBuffType
struct ABuff_FearCourage_C_GetBuffType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.Process Courage Value
struct ABuff_FearCourage_C_Process_Courage_Value_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canSwitch;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useClientIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              finalValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.ProcessFearValue
struct ABuff_FearCourage_C_ProcessFearValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canSwitch;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useClientIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              finalValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.Max Courage ActionsClient
struct ABuff_FearCourage_C_Max_Courage_ActionsClient_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.BPDrawBuffStatusHUD
struct ABuff_FearCourage_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.GetBuffDescription
struct ABuff_FearCourage_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_FearCourage.Buff_FearCourage_C.Add Fear Or CourageClient
struct ABuff_FearCourage_C_Add_Fear_Or_CourageClient_Params
{
	float                                              amountToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            fearCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               switchFromFearToCourageIfNeeded;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFromRoar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.IsAtMax_f
struct ABuff_FearCourage_C_IsAtMax_f_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useClientIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Courage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               fear;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.GetTeamColorForParticles
struct ABuff_FearCourage_C_GetTeamColorForParticles_Params
{
	struct FVector                                     finalColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.SetMultiplier
struct ABuff_FearCourage_C_SetMultiplier_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           statusValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.isSameTeamOrAlly
struct ABuff_FearCourage_C_isSameTeamOrAlly_Params
{
	int                                                secondTargetingTeam;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                firstTargetingTeamOverride;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAllyOrSameTeam;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.CanAddFearOrCourage
struct ABuff_FearCourage_C_CanAddFearOrCourage_Params
{
	bool                                               isFear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAdd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.UpdateFleePoint
struct ABuff_FearCourage_C_UpdateFleePoint_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.Send HUDMessage to Rider From Server
struct ABuff_FearCourage_C_Send_HUDMessage_to_Rider_From_Server_Params
{
	class FString                                      messageID;                                                // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.BPClientHandleNetExecCommand
struct ABuff_FearCourage_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.ReduceTerror
struct ABuff_FearCourage_C_ReduceTerror_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.BPInventoryItemUsed
struct ABuff_FearCourage_C_BPInventoryItemUsed_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.OnFearAdded
struct ABuff_FearCourage_C_OnFearAdded_Params
{
	class APrimalCharacter*                            causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fearAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.ReceiveDestroyed
struct ABuff_FearCourage_C_ReceiveDestroyed_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.RestoreVariables
struct ABuff_FearCourage_C_RestoreVariables_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.ExtendBuffTimeIfNeeded
struct ABuff_FearCourage_C_ExtendBuffTimeIfNeeded_Params
{
	bool                                               forceExtend;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              toDuration;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.BuffTickClient
struct ABuff_FearCourage_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.CheckDeactivateCondition
struct ABuff_FearCourage_C_CheckDeactivateCondition_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.GetBuffPostprocessIntensity
struct ABuff_FearCourage_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.OnDinoDismounted
struct ABuff_FearCourage_C_OnDinoDismounted_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.OnDinoMounted
struct ABuff_FearCourage_C_OnDinoMounted_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.BPDeactivated
struct ABuff_FearCourage_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.SendHUDMessageToRider
struct ABuff_FearCourage_C_SendHUDMessageToRider_Params
{
	struct FStatusValueModifierDescription             Description;                                              // (Parm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.TerrorActions
struct ABuff_FearCourage_C_TerrorActions_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.ActivateUnmountedFlee
struct ABuff_FearCourage_C_ActivateUnmountedFlee_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.ActivateMountedFlee
struct ABuff_FearCourage_C_ActivateMountedFlee_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.OnRep_isMounted
struct ABuff_FearCourage_C_OnRep_isMounted_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.UpdateMountedVariable
struct ABuff_FearCourage_C_UpdateMountedVariable_Params
{
	bool                                               ForceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.OnCourageRoar
struct ABuff_FearCourage_C_OnCourageRoar_Params
{
	bool                                               canSwitchToCourage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amountOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useAmountOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               sendMessageToRider;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.InitializeBuff
struct ABuff_FearCourage_C_InitializeBuff_Params
{
	bool                                               isFear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.IncreaseStat
struct ABuff_FearCourage_C_IncreaseStat_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           statusValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalCharacterStatusComponent*             statusComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.DrawBuffFloatingHUD
struct ABuff_FearCourage_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.BuffTickServer
struct ABuff_FearCourage_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.Check Terror Condition
struct ABuff_FearCourage_C_Check_Terror_Condition_Params
{
	class APrimalCharacter*                            fearCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.On FearRoar
struct ABuff_FearCourage_C_On_FearRoar_Params
{
	class APrimalCharacter*                            fearCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amountOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useAmountOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               switchFromFearToCourageIfNeeded;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               sendMessageToRider;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.Add FearOrCourage
struct ABuff_FearCourage_C_Add_FearOrCourage_Params
{
	float                                              amountToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            fearCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               switchFromFearToCourageIfNeeded;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFromRoar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.Start Terror
struct ABuff_FearCourage_C_Start_Terror_Params
{
	class APrimalCharacter*                            fearCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.UserConstructionScript
struct ABuff_FearCourage_C_UserConstructionScript_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__FinishedFunc
struct ABuff_FearCourage_C_DecelerationTimeline__FinishedFunc_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__UpdateFunc
struct ABuff_FearCourage_C_DecelerationTimeline__UpdateFunc_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Fire_K2Node_InputActionEvent_148
struct ABuff_FearCourage_C_InpActEvt_Fire_K2Node_InputActionEvent_148_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Targeting_K2Node_InputActionEvent_147
struct ABuff_FearCourage_C_InpActEvt_Targeting_K2Node_InputActionEvent_147_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Crouch_K2Node_InputActionEvent_146
struct ABuff_FearCourage_C_InpActEvt_Crouch_K2Node_InputActionEvent_146_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Jump_K2Node_InputActionEvent_145
struct ABuff_FearCourage_C_InpActEvt_Jump_K2Node_InputActionEvent_145_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.ReceiveBeginPlay
struct ABuff_FearCourage_C_ReceiveBeginPlay_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.InitializeNonDedi
struct ABuff_FearCourage_C_InitializeNonDedi_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.Decelerate
struct ABuff_FearCourage_C_Decelerate_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.GivePlayerControlAfterDelay
struct ABuff_FearCourage_C_GivePlayerControlAfterDelay_Params
{
	class APrimalDinoCharacter*                        Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.UpdatePathingDestination_Multicast
struct ABuff_FearCourage_C_UpdatePathingDestination_Multicast_Params
{
	struct FVector                                     newPathingDestination;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.EmitPoopAfterDelay
struct ABuff_FearCourage_C_EmitPoopAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed_Multicast
struct ABuff_FearCourage_C_UnrollDoed_Multicast_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.SetParticlesColorByTeam
struct ABuff_FearCourage_C_SetParticlesColorByTeam_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed
struct ABuff_FearCourage_C_UnrollDoed_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoedIfNeeded
struct ABuff_FearCourage_C_UnrollDoedIfNeeded_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.InitializeCircleParticles
struct ABuff_FearCourage_C_InitializeCircleParticles_Params
{
};

// Function Buff_FearCourage.Buff_FearCourage_C.ExecuteUbergraph_Buff_FearCourage
struct ABuff_FearCourage_C_ExecuteUbergraph_Buff_FearCourage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
