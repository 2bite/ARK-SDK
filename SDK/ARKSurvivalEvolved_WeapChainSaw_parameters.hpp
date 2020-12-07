#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapChainSaw_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapChainSaw.WeapChainSaw_C.StopIdleSound
struct AWeapChainSaw_C_StopIdleSound_Params
{
};

// Function WeapChainSaw.WeapChainSaw_C.Chainsaw Can Start
struct AWeapChainSaw_C_Chainsaw_Can_Start_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapChainSaw.WeapChainSaw_C.ChainsawCanFire
struct AWeapChainSaw_C_ChainsawCanFire_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapChainSaw.WeapChainSaw_C.UpdateIdleSound
struct AWeapChainSaw_C_UpdateIdleSound_Params
{
};

// Function WeapChainSaw.WeapChainSaw_C.ChainsawHasAmmo
struct AWeapChainSaw_C_ChainsawHasAmmo_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapChainSaw.WeapChainSaw_C.UserConstructionScript
struct AWeapChainSaw_C_UserConstructionScript_Params
{
};

// Function WeapChainSaw.WeapChainSaw_C.AnimNotify_Equip
struct AWeapChainSaw_C_AnimNotify_Equip_Params
{
};

// Function WeapChainSaw.WeapChainSaw_C.AnimNotify_Unequip
struct AWeapChainSaw_C_AnimNotify_Unequip_Params
{
};

// Function WeapChainSaw.WeapChainSaw_C.BPAnimNotifyCustomEvent
struct AWeapChainSaw_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapChainSaw.WeapChainSaw_C.ReceiveBeginPlay
struct AWeapChainSaw_C_ReceiveBeginPlay_Params
{
};

// Function WeapChainSaw.WeapChainSaw_C.ReceiveEndPlay
struct AWeapChainSaw_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapChainSaw.WeapChainSaw_C.ExecuteUbergraph_WeapChainSaw
struct AWeapChainSaw_C_ExecuteUbergraph_WeapChainSaw_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
