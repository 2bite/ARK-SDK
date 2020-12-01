#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SKComponent_SkinAttachment_Interp_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PrintDMICAnimTextureParams
struct USKComponent_SkinAttachment_Interp_C_PrintDMICAnimTextureParams_Params
{
	class UMaterialInstanceDynamic*                    DMIC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.GetAssociatedItem
struct USKComponent_SkinAttachment_Interp_C_GetAssociatedItem_Params
{
	class UPrimalItem*                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingAnimTexture
struct USKComponent_SkinAttachment_Interp_C_IsPlayingAnimTexture_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateAnimTextureStatus
struct USKComponent_SkinAttachment_Interp_C_UpdateAnimTextureStatus_Params
{
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentDestroyed
struct USKComponent_SkinAttachment_Interp_C_BPOnComponentDestroyed_Params
{
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoaded Explorer Note
struct USKComponent_SkinAttachment_Interp_C_PlayLoaded_Explorer_Note_Params
{
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Set HLNA Visibility
struct USKComponent_SkinAttachment_Interp_C_Set_HLNA_Visibility_Params
{
	bool                                               Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayerIsLookingAtHLNA
struct USKComponent_SkinAttachment_Interp_C_PlayerIsLookingAtHLNA_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Is Talking Public
struct USKComponent_SkinAttachment_Interp_C_Is_Talking_Public_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsTalking
struct USKComponent_SkinAttachment_Interp_C_IsTalking_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlaySound
struct USKComponent_SkinAttachment_Interp_C_PlaySound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayEmote
struct USKComponent_SkinAttachment_Interp_C_PlayEmote_Params
{
	int                                                EmoteIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CheckEmotes
struct USKComponent_SkinAttachment_Interp_C_CheckEmotes_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateInterpolation
struct USKComponent_SkinAttachment_Interp_C_UpdateInterpolation_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AddedAsPrimalItemAttachment
struct USKComponent_SkinAttachment_Interp_C_AddedAsPrimalItemAttachment_Params
{
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopFacingPlayer
struct USKComponent_SkinAttachment_Interp_C_StopFacingPlayer_Params
{
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentTick
struct USKComponent_SkinAttachment_Interp_C_BPOnComponentTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CompTick
struct USKComponent_SkinAttachment_Interp_C_CompTick_Params
{
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncLoadExplorerNote
struct USKComponent_SkinAttachment_Interp_C_AsyncLoadExplorerNote_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
struct USKComponent_SkinAttachment_Interp_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	class UObject*                                     LoadedAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopPlayingLoadedExplorerNote
struct USKComponent_SkinAttachment_Interp_C_StopPlayingLoadedExplorerNote_Params
{
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoadedExplorerNoteEvent
struct USKComponent_SkinAttachment_Interp_C_PlayLoadedExplorerNoteEvent_Params
{
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event
struct USKComponent_SkinAttachment_Interp_C_ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event_Params
{
	struct FName                                       MaterialFName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LoadedMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.InitializeForPlayerController
struct USKComponent_SkinAttachment_Interp_C_InitializeForPlayerController_Params
{
	class AShooterPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ExecuteUbergraph_SKComponent_SkinAttachment_Interp
struct USKComponent_SkinAttachment_Interp_C_ExecuteUbergraph_SKComponent_SkinAttachment_Interp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
