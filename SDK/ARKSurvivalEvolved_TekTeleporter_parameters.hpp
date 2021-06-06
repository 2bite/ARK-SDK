#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekTeleporter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekTeleporter.TekTeleporter_C.DoTeleportBatch
struct ATekTeleporter_C_DoTeleportBatch_Params
{
};

// Function TekTeleporter.TekTeleporter_C.BPServerHandleNetExecCommand
struct ATekTeleporter_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.BPPreventSpawnForPlayer
struct ATekTeleporter_C_BPPreventSpawnForPlayer_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCheckCooldownTime;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure**                           FromStructure;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.BPOverrideAllowStructureAccess
struct ATekTeleporter_C_BPOverrideAllowStructureAccess_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAccessAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForInventoryOnly;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.GetTeleportEffectScale
struct ATekTeleporter_C_GetTeleportEffectScale_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutScale;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.GetBedFilterClass
struct ATekTeleporter_C_GetBedFilterClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.BPClientDoMultiUse
struct ATekTeleporter_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.BPHandleBedFastTravel
struct ATekTeleporter_C_BPHandleBedFastTravel_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure**                           ToBed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.GetElementCostToTeleport
struct ATekTeleporter_C_GetElementCostToTeleport_Params
{
	int                                                ElementCostToTeleport;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.GetCharactersForTeleport
struct ATekTeleporter_C_GetCharactersForTeleport_Params
{
	TArray<class APrimalCharacter*>                    OutChars;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<struct UObject_FTransform>                  OutTransforms;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function TekTeleporter.TekTeleporter_C.DoTeleport
struct ATekTeleporter_C_DoTeleport_Params
{
	class ATekTeleporter_C*                            ToTeleporter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.BPTryMultiUse
struct ATekTeleporter_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.BPGetMultiUseEntries
struct ATekTeleporter_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekTeleporter.TekTeleporter_C.UserConstructionScript
struct ATekTeleporter_C_UserConstructionScript_Params
{
};

// Function TekTeleporter.TekTeleporter_C.DoTeleportOutVFX
struct ATekTeleporter_C_DoTeleportOutVFX_Params
{
	float                                              EffectScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EffectRot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.DoTeleportInVFX
struct ATekTeleporter_C_DoTeleportInVFX_Params
{
	float                                              EffectScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EffectRot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekTeleporter.TekTeleporter_C.DoPlayTeleportOutSound
struct ATekTeleporter_C_DoPlayTeleportOutSound_Params
{
};

// Function TekTeleporter.TekTeleporter_C.DoPlayTeleportInSound
struct ATekTeleporter_C_DoPlayTeleportInSound_Params
{
};

// Function TekTeleporter.TekTeleporter_C.ExecuteUbergraph_TekTeleporter
struct ATekTeleporter_C_ExecuteUbergraph_TekTeleporter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
