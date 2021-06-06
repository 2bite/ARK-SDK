#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFists_Oar_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapFists_Oar.WeapFists_Oar_C.SendOarInputsToServer
struct AWeapFists_Oar_C_SendOarInputsToServer_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.HandleViewModeChange
struct AWeapFists_Oar_C_HandleViewModeChange_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.InterpToSocket
struct AWeapFists_Oar_C_InterpToSocket_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.OnChangedViewMode
struct AWeapFists_Oar_C_OnChangedViewMode_Params
{
	bool                                               bIsFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.PlayPaddleAnim
struct AWeapFists_Oar_C_PlayPaddleAnim_Params
{
	struct FWeaponAnim                                 AnimToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideFPVMasterPoseComponent
struct AWeapFists_Oar_C_BPOverrideFPVMasterPoseComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.ReceiveDestroyed
struct AWeapFists_Oar_C_ReceiveDestroyed_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.HandlePaddleAnimation
struct AWeapFists_Oar_C_HandlePaddleAnimation_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.GetCurrentPaddleAnimation
struct AWeapFists_Oar_C_GetCurrentPaddleAnimation_Params
{
	struct FWeaponAnim                                 AnimToPlay;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECardinal_Directions_Enum>             Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.GetStandingAnimation
struct AWeapFists_Oar_C_GetStandingAnimation_Params
{
	float                                              OutBlendInTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutBlendOutTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.BPAnimNotifyCustomEvent
struct AWeapFists_Oar_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideRootRotationOffset
struct AWeapFists_Oar_C_BPOverrideRootRotationOffset_Params
{
	struct FRotator*                                   InRootRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.BPHandleMeleeAttack
struct AWeapFists_Oar_C_BPHandleMeleeAttack_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.UserConstructionScript
struct AWeapFists_Oar_C_UserConstructionScript_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_302
struct AWeapFists_Oar_C_InpActEvt_AltFire_K2Node_InputActionEvent_302_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_301
struct AWeapFists_Oar_C_InpActEvt_AltFire_K2Node_InputActionEvent_301_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.ReceiveBeginPlay
struct AWeapFists_Oar_C_ReceiveBeginPlay_Params
{
};

// Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272
struct AWeapFists_Oar_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153
struct AWeapFists_Oar_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.ReceiveTick
struct AWeapFists_Oar_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.Server_ReceiveOarInputs
struct AWeapFists_Oar_C_Server_ReceiveOarInputs_Params
{
	struct FCanoePassengerClientInputAxes              SavedInputs;                                              // (Parm)
};

// Function WeapFists_Oar.WeapFists_Oar_C.Server_SetCanoeWantsToBeach
struct AWeapFists_Oar_C_Server_SetCanoeWantsToBeach_Params
{
	bool                                               bNewVal;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.ReceiveOarInputAxes
struct AWeapFists_Oar_C_ReceiveOarInputAxes_Params
{
	float                                              Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFists_Oar.WeapFists_Oar_C.ExecuteUbergraph_WeapFists_Oar
struct AWeapFists_Oar_C_ExecuteUbergraph_WeapFists_Oar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
