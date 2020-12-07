#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekGravityGrenade_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.SetupNewGravityMode
struct AWeapTekGravityGrenade_C_SetupNewGravityMode_Params
{
	int                                                ForMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludingVFX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.UserConstructionScript
struct AWeapTekGravityGrenade_C_UserConstructionScript_Params
{
};

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ReceiveBeginPlay
struct AWeapTekGravityGrenade_C_ReceiveBeginPlay_Params
{
};

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.StartSecondaryActionEvent
struct AWeapTekGravityGrenade_C_StartSecondaryActionEvent_Params
{
};

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ServerRequestModeChange
struct AWeapTekGravityGrenade_C_ServerRequestModeChange_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.MultiUpdateCurrentMode
struct AWeapTekGravityGrenade_C_MultiUpdateCurrentMode_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.BPAnimNotifyCustomEvent
struct AWeapTekGravityGrenade_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.BPFiredWeapon
struct AWeapTekGravityGrenade_C_BPFiredWeapon_Params
{
};

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ExecuteUbergraph_WeapTekGravityGrenade
struct AWeapTekGravityGrenade_C_ExecuteUbergraph_WeapTekGravityGrenade_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
