#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Horde_MeteorBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PulseFallDamage
struct ASupplyCrate_Horde_MeteorBase_C_PulseFallDamage_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.RunLandSequence
struct ASupplyCrate_Horde_MeteorBase_C_RunLandSequence_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.Initiate Horde Mode
struct ASupplyCrate_Horde_MeteorBase_C_Initiate_Horde_Mode_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SpawnShield
struct ASupplyCrate_Horde_MeteorBase_C_SpawnShield_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OpenCrate
struct ASupplyCrate_Horde_MeteorBase_C_OpenCrate_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BPImpactEffect
struct ASupplyCrate_Horde_MeteorBase_C_BPImpactEffect_Params
{
	struct FHitResult                                  HitRes;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDirection;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ConfigureWaves
struct ASupplyCrate_Horde_MeteorBase_C_ConfigureWaves_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OnRep_bStartingNewWave
struct ASupplyCrate_Horde_MeteorBase_C_OnRep_bStartingNewWave_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ShouldPlayVFX
struct ASupplyCrate_Horde_MeteorBase_C_ShouldPlayVFX_Params
{
	float                                              NotifPct;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NotifBool;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldPlay;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveAnyDamage
struct ASupplyCrate_Horde_MeteorBase_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OnRep_bOpenSeqInitiated
struct ASupplyCrate_Horde_MeteorBase_C_OnRep_bOpenSeqInitiated_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UserConstructionScript
struct ASupplyCrate_Horde_MeteorBase_C_UserConstructionScript_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveBeginPlay
struct ASupplyCrate_Horde_MeteorBase_C_ReceiveBeginPlay_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PlayHealthEmitter
struct ASupplyCrate_Horde_MeteorBase_C_PlayHealthEmitter_Params
{
	class UParticleSystemComponent*                    Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Emitter2;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveDestroyed
struct ASupplyCrate_Horde_MeteorBase_C_ReceiveDestroyed_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PauseOpenSequence
struct ASupplyCrate_Horde_MeteorBase_C_PauseOpenSequence_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PopDoors
struct ASupplyCrate_Horde_MeteorBase_C_PopDoors_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.DestroySpawnEmitters
struct ASupplyCrate_Horde_MeteorBase_C_DestroySpawnEmitters_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.CloseCrate
struct ASupplyCrate_Horde_MeteorBase_C_CloseCrate_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.CheckProgress
struct ASupplyCrate_Horde_MeteorBase_C_CheckProgress_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UpdateVFXProgress
struct ASupplyCrate_Horde_MeteorBase_C_UpdateVFXProgress_Params
{
	float                                              AmtToShow;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UpdateIntermissionBar
struct ASupplyCrate_Horde_MeteorBase_C_UpdateIntermissionBar_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ProgressAnimationSequence
struct ASupplyCrate_Horde_MeteorBase_C_ProgressAnimationSequence_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.EjectItems
struct ASupplyCrate_Horde_MeteorBase_C_EjectItems_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ROS_EjectItems
struct ASupplyCrate_Horde_MeteorBase_C_ROS_EjectItems_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BeginSpinAnimation
struct ASupplyCrate_Horde_MeteorBase_C_BeginSpinAnimation_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.InterpStopSpinAnimation
struct ASupplyCrate_Horde_MeteorBase_C_InterpStopSpinAnimation_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.FindLandingLocations
struct ASupplyCrate_Horde_MeteorBase_C_FindLandingLocations_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.InterpPackage
struct ASupplyCrate_Horde_MeteorBase_C_InterpPackage_Params
{
	class ADroppedItemHorde_Base_C*                    Package;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetSpin
struct ASupplyCrate_Horde_MeteorBase_C_SetSpin_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetSpinOff
struct ASupplyCrate_Horde_MeteorBase_C_SetSpinOff_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetInterpMultiplier
struct ASupplyCrate_Horde_MeteorBase_C_SetInterpMultiplier_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ColorizeDoors
struct ASupplyCrate_Horde_MeteorBase_C_ColorizeDoors_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BeginWaveSpawnTimer
struct ASupplyCrate_Horde_MeteorBase_C_BeginWaveSpawnTimer_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ROC_DeactivateSmokePlume
struct ASupplyCrate_Horde_MeteorBase_C_ROC_DeactivateSmokePlume_Params
{
};

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ExecuteUbergraph_SupplyCrate_Horde_MeteorBase
struct ASupplyCrate_Horde_MeteorBase_C_ExecuteUbergraph_SupplyCrate_Horde_MeteorBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
