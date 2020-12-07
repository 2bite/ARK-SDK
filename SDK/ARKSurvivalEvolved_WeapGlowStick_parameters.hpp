#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGlowStick_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapGlowStick.WeapGlowStick_C.BPHandleMeleeAttack
struct AWeapGlowStick_C_BPHandleMeleeAttack_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.BPAnimNotifyCustomEvent
struct AWeapGlowStick_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.BPLostController
struct AWeapGlowStick_C_BPLostController_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.ReceiveTick
struct AWeapGlowStick_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.IsColorized
struct AWeapGlowStick_C_IsColorized_Params
{
	struct FLinearColor                                currColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.ClampMinColorVals
struct AWeapGlowStick_C_ClampMinColorVals_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                clampedColor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.BPAppliedPrimalItemToWeapon
struct AWeapGlowStick_C_BPAppliedPrimalItemToWeapon_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.PullOutNewGlowStick
struct AWeapGlowStick_C_PullOutNewGlowStick_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.BPWeaponCanFire
struct AWeapGlowStick_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.InitGlowStick
struct AWeapGlowStick_C_InitGlowStick_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.NetSetIsBroken
struct AWeapGlowStick_C_NetSetIsBroken_Params
{
	bool                                               newIsBroken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.TurnOnGlowStick
struct AWeapGlowStick_C_TurnOnGlowStick_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.BPStartEquippedNotify
struct AWeapGlowStick_C_BPStartEquippedNotify_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.BP_OnReloadNotify
struct AWeapGlowStick_C_BP_OnReloadNotify_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.PlayCameraShake
struct AWeapGlowStick_C_PlayCameraShake_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.OnRep_IsBroken
struct AWeapGlowStick_C_OnRep_IsBroken_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.Create Dynamic Material
struct AWeapGlowStick_C_Create_Dynamic_Material_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.TurnOffGlowStick
struct AWeapGlowStick_C_TurnOffGlowStick_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.SetMaterialEmissiveness
struct AWeapGlowStick_C_SetMaterialEmissiveness_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.SetLightIntensityAndAttenuationRadius
struct AWeapGlowStick_C_SetLightIntensityAndAttenuationRadius_Params
{
	class UPointLightComponent*                        Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.UserConstructionScript
struct AWeapGlowStick_C_UserConstructionScript_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.ProjectileFired
struct AWeapGlowStick_C_ProjectileFired_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.ReceiveBeginPlay
struct AWeapGlowStick_C_ReceiveBeginPlay_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.StartUnequipEvent
struct AWeapGlowStick_C_StartUnequipEvent_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.Multi_FakeReload
struct AWeapGlowStick_C_Multi_FakeReload_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.BPFireWeapon
struct AWeapGlowStick_C_BPFireWeapon_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.AfterProjectileFired_ROS
struct AWeapGlowStick_C_AfterProjectileFired_ROS_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.CrackGlowStickAfterDelay
struct AWeapGlowStick_C_CrackGlowStickAfterDelay_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.Multi_UnequipGlowStick
struct AWeapGlowStick_C_Multi_UnequipGlowStick_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.PlayTPVShakeAnimAfterDelay
struct AWeapGlowStick_C_PlayTPVShakeAnimAfterDelay_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.CrackGlowStick
struct AWeapGlowStick_C_CrackGlowStick_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.OnMeleeAttack_Multicast
struct AWeapGlowStick_C_OnMeleeAttack_Multicast_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.MultiFakeReloadAfterDelay
struct AWeapGlowStick_C_MultiFakeReloadAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.PreventUsingGlowstickForDuration
struct AWeapGlowStick_C_PreventUsingGlowstickForDuration_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapGlowStick.WeapGlowStick_C.Multi_BeginCrackingGlowstick
struct AWeapGlowStick_C_Multi_BeginCrackingGlowstick_Params
{
};

// Function WeapGlowStick.WeapGlowStick_C.ExecuteUbergraph_WeapGlowStick
struct AWeapGlowStick_C_ExecuteUbergraph_WeapGlowStick_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
