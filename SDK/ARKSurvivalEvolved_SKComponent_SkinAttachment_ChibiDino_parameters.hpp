#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SKComponent_SkinAttachment_ChibiDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentDestroyed
struct USKComponent_SkinAttachment_ChibiDino_C_BPOnComponentDestroyed_Params
{
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AttachSubMeshes
struct USKComponent_SkinAttachment_ChibiDino_C_AttachSubMeshes_Params
{
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentTick
struct USKComponent_SkinAttachment_ChibiDino_C_BPOnComponentTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.LevelUp
struct USKComponent_SkinAttachment_ChibiDino_C_LevelUp_Params
{
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayMontage
struct USKComponent_SkinAttachment_ChibiDino_C_PlayMontage_Params
{
	class UAnimMontage*                                TheAnimMontage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ExtraSound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateMovement
struct USKComponent_SkinAttachment_ChibiDino_C_UpdateMovement_Params
{
	class ACharacter*                                  CharacterRef;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayEmote
struct USKComponent_SkinAttachment_ChibiDino_C_PlayEmote_Params
{
	int                                                EmoteIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CheckEmotes
struct USKComponent_SkinAttachment_ChibiDino_C_CheckEmotes_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateInterpolation
struct USKComponent_SkinAttachment_ChibiDino_C_UpdateInterpolation_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AddedAsPrimalItemAttachment
struct USKComponent_SkinAttachment_ChibiDino_C_AddedAsPrimalItemAttachment_Params
{
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CompTick
struct USKComponent_SkinAttachment_ChibiDino_C_CompTick_Params
{
};

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino
struct USKComponent_SkinAttachment_ChibiDino_C_ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
