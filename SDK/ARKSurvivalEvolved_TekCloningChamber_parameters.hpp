#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekCloningChamber_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekCloningChamber.TekCloningChamber_C.BPChangedActorTeam
struct ATekCloningChamber_C_BPChangedActorTeam_Params
{
};

// Function TekCloningChamber.TekCloningChamber_C.BPNotifyInventoryItemChange
struct ATekCloningChamber_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.BPContainerDeactivated
struct ATekCloningChamber_C_BPContainerDeactivated_Params
{
};

// Function TekCloningChamber.TekCloningChamber_C.IsValidToClone
struct ATekCloningChamber_C_IsValidToClone_Params
{
	class APrimalDinoCharacter*                        InDino;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.BPOverrideAllowStructureAccess
struct ATekCloningChamber_C_BPOverrideAllowStructureAccess_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAccessAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.BlueprintDrawHUD
struct ATekCloningChamber_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.ReceiveBeginPlay
struct ATekCloningChamber_C_ReceiveBeginPlay_Params
{
};

// Function TekCloningChamber.TekCloningChamber_C.BPPostLoadedFromSaveGame
struct ATekCloningChamber_C_BPPostLoadedFromSaveGame_Params
{
};

// Function TekCloningChamber.TekCloningChamber_C.BPPreventStasis
struct ATekCloningChamber_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.StartCloneDino
struct ATekCloningChamber_C_StartCloneDino_Params
{
	class APrimalDinoCharacter*                        DinoToClone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.BPServerHandleNetExecCommand
struct ATekCloningChamber_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.BPClientDoMultiUse
struct ATekCloningChamber_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.BPGetMultiUseEntries
struct ATekCloningChamber_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekCloningChamber.TekCloningChamber_C.UserConstructionScript
struct ATekCloningChamber_C_UserConstructionScript_Params
{
};

// Function TekCloningChamber.TekCloningChamber_C.DoNetStartCloning
struct ATekCloningChamber_C_DoNetStartCloning_Params
{
	class FString                                      TheCloningDescriptiveName;                                // (Parm, ZeroConstructor)
	double                                             TheCloningCompletionTime;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCloningChamber.TekCloningChamber_C.NetFinishCloning
struct ATekCloningChamber_C_NetFinishCloning_Params
{
};

// Function TekCloningChamber.TekCloningChamber_C.DoNetHaltCloning
struct ATekCloningChamber_C_DoNetHaltCloning_Params
{
};

// Function TekCloningChamber.TekCloningChamber_C.ExecuteUbergraph_TekCloningChamber
struct ATekCloningChamber_C_ExecuteUbergraph_TekCloningChamber_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
