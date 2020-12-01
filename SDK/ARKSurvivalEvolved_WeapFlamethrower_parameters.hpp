#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlamethrower_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapFlamethrower.WeapFlamethrower_C.TogglePilotLight
struct AWeapFlamethrower_C_TogglePilotLight_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFlamethrower.WeapFlamethrower_C.StartUnequipEvent
struct AWeapFlamethrower_C_StartUnequipEvent_Params
{
};

// Function WeapFlamethrower.WeapFlamethrower_C.BPAnimNotifyCustomEvent
struct AWeapFlamethrower_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFlamethrower.WeapFlamethrower_C.RefreshLighterState
struct AWeapFlamethrower_C_RefreshLighterState_Params
{
};

// Function WeapFlamethrower.WeapFlamethrower_C.UserConstructionScript
struct AWeapFlamethrower_C_UserConstructionScript_Params
{
};

// Function WeapFlamethrower.WeapFlamethrower_C.ReceiveBeginPlay
struct AWeapFlamethrower_C_ReceiveBeginPlay_Params
{
};

// Function WeapFlamethrower.WeapFlamethrower_C.AnimNotify_Pilot_On
struct AWeapFlamethrower_C_AnimNotify_Pilot_On_Params
{
};

// Function WeapFlamethrower.WeapFlamethrower_C.AnimNotify_Pilot_Off
struct AWeapFlamethrower_C_AnimNotify_Pilot_Off_Params
{
};

// Function WeapFlamethrower.WeapFlamethrower_C.ExecuteUbergraph_WeapFlamethrower
struct AWeapFlamethrower_C_ExecuteUbergraph_WeapFlamethrower_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
