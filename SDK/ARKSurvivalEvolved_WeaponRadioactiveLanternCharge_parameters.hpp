#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeaponRadioactiveLanternCharge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetNumBatteries
struct AWeaponRadioactiveLanternCharge_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Get Charge Variable Interface
struct AWeaponRadioactiveLanternCharge_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveAllBeamsServer
struct AWeaponRadioactiveLanternCharge_C_RemoveAllBeamsServer_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.IsFreeBeamForActor
struct AWeaponRadioactiveLanternCharge_C_IsFreeBeamForActor_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFreeBeam;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPPrefireAction
struct AWeaponRadioactiveLanternCharge_C_BPPrefireAction_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RechargeFromMaxBattery
struct AWeaponRadioactiveLanternCharge_C_RechargeFromMaxBattery_Params
{
	bool                                               couldRecharge;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWeaponCanFire
struct AWeaponRadioactiveLanternCharge_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateMaterial
struct AWeaponRadioactiveLanternCharge_C_UpdateMaterial_Params
{
	class UMaterialInstanceDynamic*                    dynamicMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyChargeBuff
struct AWeaponRadioactiveLanternCharge_C_DestroyChargeBuff_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAdjustAmmoPerShot
struct AWeaponRadioactiveLanternCharge_C_BPAdjustAmmoPerShot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetBeamIntensity
struct AWeaponRadioactiveLanternCharge_C_SetBeamIntensity_Params
{
	class UParticleSystemComponent*                    BeamComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPSecondaryAction
struct AWeaponRadioactiveLanternCharge_C_BPSecondaryAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetLightMultiplier
struct AWeaponRadioactiveLanternCharge_C_GetLightMultiplier_Params
{
	float                                              lightMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWaitingForPlacement
struct AWeaponRadioactiveLanternCharge_C_BPWaitingForPlacement_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CheckIfFireStopped
struct AWeaponRadioactiveLanternCharge_C_CheckIfFireStopped_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateLightEffects
struct AWeaponRadioactiveLanternCharge_C_UpdateLightEffects_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update MaterialsAndParticles
struct AWeaponRadioactiveLanternCharge_C_Update_MaterialsAndParticles_Params
{
	bool                                               couldUpdateMaterial;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DisableFiringEffects
struct AWeaponRadioactiveLanternCharge_C_DisableFiringEffects_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitializeFiringEffects
struct AWeaponRadioactiveLanternCharge_C_InitializeFiringEffects_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DetectChupasAndTriggerBeams
struct AWeaponRadioactiveLanternCharge_C_DetectChupasAndTriggerBeams_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring
struct AWeaponRadioactiveLanternCharge_C_OnStopFiring_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget
struct AWeaponRadioactiveLanternCharge_C_DestroyBeamForTarget_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamVisuals
struct AWeaponRadioactiveLanternCharge_C_DestroyBeamVisuals_Params
{
	struct FSTR_ChargeBeamInfo                         beamInfo;                                                 // (Parm)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ServerTick
struct AWeaponRadioactiveLanternCharge_C_ServerTick_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ClientTick
struct AWeaponRadioactiveLanternCharge_C_ClientTick_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Remove All BeamsClient
struct AWeaponRadioactiveLanternCharge_C_Remove_All_BeamsClient_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveDestroyed
struct AWeaponRadioactiveLanternCharge_C_ReceiveDestroyed_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TryAddNewBeam
struct AWeaponRadioactiveLanternCharge_C_TryAddNewBeam_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartUnequipEvent
struct AWeaponRadioactiveLanternCharge_C_StartUnequipEvent_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Should Remove Beam
struct AWeaponRadioactiveLanternCharge_C_Should_Remove_Beam_Params
{
	struct FSTR_ChargeBeamInfo                         beamInfo;                                                 // (Parm)
	bool                                               shouldRemove;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update Impact Particles
struct AWeaponRadioactiveLanternCharge_C_Update_Impact_Particles_Params
{
	struct FSTR_ChargeBeamInfo                         beamInfo;                                                 // (Parm)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetEndPoints
struct AWeaponRadioactiveLanternCharge_C_SetEndPoints_Params
{
	class UParticleSystemComponent*                    beam;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     endPoint2;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     endPoint3;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ConnectBeamToTarget
struct AWeaponRadioactiveLanternCharge_C_ConnectBeamToTarget_Params
{
	struct FSTR_ChargeBeamInfo                         beamInfo;                                                 // (Parm)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateNewBeam
struct AWeaponRadioactiveLanternCharge_C_CreateNewBeam_Params
{
	class AActor*                                      ToActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ShouldRemoveBeamForTarget
struct AWeaponRadioactiveLanternCharge_C_ShouldRemoveBeamForTarget_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldRemove;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveBeamTarget_Server
struct AWeaponRadioactiveLanternCharge_C_RemoveBeamTarget_Server_Params
{
	class AActor*                                      BeamTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateCharge
struct AWeaponRadioactiveLanternCharge_C_UpdateCharge_Params
{
	bool                                               ShouldActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.EffectsDisableCheck
struct AWeaponRadioactiveLanternCharge_C_EffectsDisableCheck_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPFiredWeapon
struct AWeaponRadioactiveLanternCharge_C_BPFiredWeapon_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartSecondaryActionEvent
struct AWeaponRadioactiveLanternCharge_C_StartSecondaryActionEvent_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UserConstructionScript
struct AWeaponRadioactiveLanternCharge_C_UserConstructionScript_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__FinishedFunc
struct AWeaponRadioactiveLanternCharge_C_LightFlickerTimeline__FinishedFunc_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__UpdateFunc
struct AWeaponRadioactiveLanternCharge_C_LightFlickerTimeline__UpdateFunc_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__FinishedFunc
struct AWeaponRadioactiveLanternCharge_C_LightTurnOffTimeline__FinishedFunc_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__UpdateFunc
struct AWeaponRadioactiveLanternCharge_C_LightTurnOffTimeline__UpdateFunc_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Interface
struct AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Trigger Multicast Interface
struct AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Interface Check for Batteries and Update Multicast
struct AWeaponRadioactiveLanternCharge_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Double MulticastInterface
struct AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventDoubleInterface
struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntInterface
struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntMulticastInterface
struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveBeginPlay
struct AWeaponRadioactiveLanternCharge_C_ReceiveBeginPlay_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnNewActorAffected_Multicast
struct AWeaponRadioactiveLanternCharge_C_OnNewActorAffected_Multicast_Params
{
	class AActor*                                      actorAffected;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget_Multicast
struct AWeaponRadioactiveLanternCharge_C_DestroyBeamForTarget_Multicast_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.PlayLanternCameraShake
struct AWeaponRadioactiveLanternCharge_C_PlayLanternCameraShake_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateChargeManager
struct AWeaponRadioactiveLanternCharge_C_CreateChargeManager_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Set Charge Variable Interface
struct AWeaponRadioactiveLanternCharge_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.FiringBeamLogic
struct AWeaponRadioactiveLanternCharge_C_FiringBeamLogic_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring
struct AWeaponRadioactiveLanternCharge_C_OnStartFiring_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean
struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Boolean_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float
struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Float_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float_Multicast
struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Float_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean Interface
struct AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventFloatInterface
struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean_Multicast
struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Boolean_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean MulticastInterface
struct AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Float Multicast Interface
struct AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DoLightFlicker
struct AWeaponRadioactiveLanternCharge_C_DoLightFlicker_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMaterialUpdate
struct AWeaponRadioactiveLanternCharge_C_InitialMaterialUpdate_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TurnOffLight
struct AWeaponRadioactiveLanternCharge_C_TurnOffLight_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring_Multicast
struct AWeaponRadioactiveLanternCharge_C_OnStopFiring_Multicast_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CancelPlacement
struct AWeaponRadioactiveLanternCharge_C_CancelPlacement_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAnimNotifyCustomEvent
struct AWeaponRadioactiveLanternCharge_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMeterAnim
struct AWeaponRadioactiveLanternCharge_C_InitialMeterAnim_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring_Multicast
struct AWeaponRadioactiveLanternCharge_C_OnStartFiring_Multicast_Params
{
};

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ExecuteUbergraph_WeaponRadioactiveLanternCharge
struct AWeaponRadioactiveLanternCharge_C_ExecuteUbergraph_WeaponRadioactiveLanternCharge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
