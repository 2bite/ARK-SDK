#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapScissors_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapScissors.WeapScissors_C.ReceiveBeginPlay
struct AWeapScissors_C_ReceiveBeginPlay_Params
{
};

// Function WeapScissors.WeapScissors_C.IsValidHairCutTarget
struct AWeapScissors_C_IsValidHairCutTarget_Params
{
	class AActor*                                      PotentialTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.OpenUI
struct AWeapScissors_C_OpenUI_Params
{
	class AShooterCharacter*                           TheTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.GiveHairLocks
struct AWeapScissors_C_GiveHairLocks_Params
{
	int                                                NumLocks;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.BPAnimNotifyCustomEvent
struct AWeapScissors_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.BPGetSelectedMeleeAttackAnim
struct AWeapScissors_C_BPGetSelectedMeleeAttackAnim_Params
{
	struct FWeaponAnim                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.UserConstructionScript
struct AWeapScissors_C_UserConstructionScript_Params
{
};

// Function WeapScissors.WeapScissors_C.InitializeUI
struct AWeapScissors_C_InitializeUI_Params
{
	class UUI_Hairstyle*                               TheUI;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.OnHairStyleAccepted__DelegateSignature_Event
struct AWeapScissors_C_OnHairStyleAccepted__DelegateSignature_Event_Params
{
	int                                                newHeadHairIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                newFacialHairIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHeadHairPercent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewFacialHairPercent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HeadHairDyeID1;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HeadHairDyeID2;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FacialHairDyeID1;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FacialHairDyeID2;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.ClearFacialHairClicked
struct AWeapScissors_C_ClearFacialHairClicked_Params
{
};

// Function WeapScissors.WeapScissors_C.ClearHeadHairClicked
struct AWeapScissors_C_ClearHeadHairClicked_Params
{
};

// Function WeapScissors.WeapScissors_C.ServerClearFacialHairColor
struct AWeapScissors_C_ServerClearFacialHairColor_Params
{
	class AShooterCharacter*                           TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.ServerClearHeadHairColor
struct AWeapScissors_C_ServerClearHeadHairColor_Params
{
	class AShooterCharacter*                           TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.TheServerHairStyleAccepted
struct AWeapScissors_C_TheServerHairStyleAccepted_Params
{
	int                                                newHeadHairIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                newFacialHairIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHeadHairPercent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewFacialHairPercent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HeadHairDyeID1;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HeadHairDyeID2;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FacialHairDyeID1;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FacialHairDyeID2;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.DoServerRequestDinoHaircut
struct AWeapScissors_C_DoServerRequestDinoHaircut_Params
{
	class ADino_Character_BP_Haircuttable_C*           DoRequestOnDino;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapScissors.WeapScissors_C.ExecuteUbergraph_WeapScissors
struct AWeapScissors_C_ExecuteUbergraph_WeapScissors_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
