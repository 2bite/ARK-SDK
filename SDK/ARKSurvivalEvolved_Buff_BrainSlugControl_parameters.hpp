#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlugControl_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorDied
struct ABuff_BrainSlugControl_C_BPInstigatorDied_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.SetupInstigatorDinoAndAttachSlug
struct ABuff_BrainSlugControl_C_SetupInstigatorDinoAndAttachSlug_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PossessDino;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPStasis
struct ABuff_BrainSlugControl_C_BPStasis_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPUnstasis
struct ABuff_BrainSlugControl_C_BPUnstasis_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickClient
struct ABuff_BrainSlugControl_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSerializeForInstigator
struct ABuff_BrainSlugControl_C_BPPreSerializeForInstigator_Params
{
	bool*                                              bBeginningSerialize;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorReceivedKillingDamage
struct ABuff_BrainSlugControl_C_BPInstigatorReceivedKillingDamage_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorSleeped
struct ABuff_BrainSlugControl_C_BPInstigatorSleeped_Params
{
	bool*                                              bIsSleeped;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPBuffPreventUploading
struct ABuff_BrainSlugControl_C_BPBuffPreventUploading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffOverrideInventoryAccessInput
struct ABuff_BrainSlugControl_C_BuffOverrideInventoryAccessInput_Params
{
	class AController**                                InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInputPressed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UpdateTimeAndDamageForInstigator
struct ABuff_BrainSlugControl_C_UpdateTimeAndDamageForInstigator_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPForceDinoNameTargetingTeamOverride
struct ABuff_BrainSlugControl_C_BPForceDinoNameTargetingTeamOverride_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TargetingTeamToCheck;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.EndBrainControlEffects
struct ABuff_BrainSlugControl_C_EndBrainControlEffects_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetDinoNameColorOverride
struct ABuff_BrainSlugControl_C_BPGetDinoNameColorOverride_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor*                                     ColorToOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DrawBuffFloatingHUD
struct ABuff_BrainSlugControl_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPOverrideTargetingDesire
struct ABuff_BrainSlugControl_C_BPOverrideTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventFirstPerson
struct ABuff_BrainSlugControl_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetHUDElements
struct ABuff_BrainSlugControl_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPTryMultiUse
struct ABuff_BrainSlugControl_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetMultiUseEntries
struct ABuff_BrainSlugControl_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSetupForInstigator
struct ABuff_BrainSlugControl_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveDestroyed
struct ABuff_BrainSlugControl_C_ReceiveDestroyed_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPDeactivated
struct ABuff_BrainSlugControl_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPSetupForInstigator
struct ABuff_BrainSlugControl_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UserConstructionScript
struct ABuff_BrainSlugControl_C_UserConstructionScript_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.LaunchClearOfAttachment
struct ABuff_BrainSlugControl_C_LaunchClearOfAttachment_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveBeginPlay
struct ABuff_BrainSlugControl_C_ReceiveBeginPlay_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerClearPossessor
struct ABuff_BrainSlugControl_C_ServerClearPossessor_Params
{
	bool                                               RetainSlugControl;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_DisableInput
struct ABuff_BrainSlugControl_C_Multi_DisableInput_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BeginPossessionResponse
struct ABuff_BrainSlugControl_C_BeginPossessionResponse_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerDeath
struct ABuff_BrainSlugControl_C_RespondToPlayerDeath_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerSleep
struct ABuff_BrainSlugControl_C_RespondToPlayerSleep_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerTryRepossesion
struct ABuff_BrainSlugControl_C_ServerTryRepossesion_Params
{
	class AShooterPlayerController*                    NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_EnablePossession
struct ABuff_BrainSlugControl_C_Multi_EnablePossession_Params
{
	class AShooterPlayerController*                    NewPossessingPC;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickServer
struct ABuff_BrainSlugControl_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TryingToClearRider
struct ABuff_BrainSlugControl_C_TryingToClearRider_Params
{
	class AShooterCharacter*                           RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        ForDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BindClearRiderEvent
struct ABuff_BrainSlugControl_C_BindClearRiderEvent_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.KillAttachedChar
struct ABuff_BrainSlugControl_C_KillAttachedChar_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DoMultiUseAccessInventory
struct ABuff_BrainSlugControl_C_DoMultiUseAccessInventory_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DelayedDeactivate
struct ABuff_BrainSlugControl_C_DelayedDeactivate_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerDeactivate
struct ABuff_BrainSlugControl_C_ServerDeactivate_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TestingMessage
struct ABuff_BrainSlugControl_C_TestingMessage_Params
{
	class FString                                      OutMessage;                                               // (Parm, ZeroConstructor)
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_SetupDinos
struct ABuff_BrainSlugControl_C_Multi_SetupDinos_Params
{
};

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ExecuteUbergraph_Buff_BrainSlugControl
struct ABuff_BrainSlugControl_C_ExecuteUbergraph_Buff_BrainSlugControl_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
