#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPaintbrush_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapPaintbrush.WeapPaintbrush_C.BPGetSelectedMeleeAttackAnim
struct AWeapPaintbrush_C_BPGetSelectedMeleeAttackAnim_Params
{
	struct FWeaponAnim                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapPaintbrush.WeapPaintbrush_C.BPAnimNotifyCustomEvent
struct AWeapPaintbrush_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapPaintbrush.WeapPaintbrush_C.UserConstructionScript
struct AWeapPaintbrush_C_UserConstructionScript_Params
{
};

// Function WeapPaintbrush.WeapPaintbrush_C.ExecuteUbergraph_WeapPaintbrush
struct AWeapPaintbrush_C_ExecuteUbergraph_WeapPaintbrush_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
