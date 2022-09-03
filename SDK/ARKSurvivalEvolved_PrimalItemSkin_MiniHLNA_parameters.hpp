#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_MiniHLNA_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.IsPlayingExplorerNote
struct UPrimalItemSkin_MiniHLNA_C_IsPlayingExplorerNote_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.hide skin
struct UPrimalItemSkin_MiniHLNA_C_hide_skin_Params
{
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPGetItemDescription
struct UPrimalItemSkin_MiniHLNA_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.SetVisibility
struct UPrimalItemSkin_MiniHLNA_C_SetVisibility_Params
{
	bool                                               Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPClientHandleItemNetExecCommand
struct UPrimalItemSkin_MiniHLNA_C_BPClientHandleItemNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.TryRemoveBuffOnUnequip
struct UPrimalItemSkin_MiniHLNA_C_TryRemoveBuffOnUnequip_Params
{
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.RemovedSkinFromItem
struct UPrimalItemSkin_MiniHLNA_C_RemovedSkinFromItem_Params
{
	class UPrimalItem**                                FromOwnerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.OnEquipDelayedFn
struct UPrimalItemSkin_MiniHLNA_C_OnEquipDelayedFn_Params
{
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.Spawn Emitter
struct UPrimalItemSkin_MiniHLNA_C_Spawn_Emitter_Params
{
	class UParticleSystem*                             Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComponent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.PlayRandomSoundFromSounds
struct UPrimalItemSkin_MiniHLNA_C_PlayRandomSoundFromSounds_Params
{
	TArray<class USoundBase*>                          Sounds;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BlueprintUnequipped
struct UPrimalItemSkin_MiniHLNA_C_BlueprintUnequipped_Params
{
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPAddedAttachments
struct UPrimalItemSkin_MiniHLNA_C_BPAddedAttachments_Params
{
};

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.ExecuteUbergraph_PrimalItemSkin_MiniHLNA
struct UPrimalItemSkin_MiniHLNA_C_ExecuteUbergraph_PrimalItemSkin_MiniHLNA_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
