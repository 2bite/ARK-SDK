#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Shield_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Deactivate
struct ABuff_TekStrider_Shield_C_Restrict_Doubletap_Deactivate_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Activate
struct ABuff_TekStrider_Shield_C_Restrict_Doubletap_Activate_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Is Ai Controlled
struct ABuff_TekStrider_Shield_C_Is_Ai_Controlled_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Toggle Active On Ai
struct ABuff_TekStrider_Shield_C_Toggle_Active_On_Ai_Params
{
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BuffTickServer
struct ABuff_TekStrider_Shield_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPGetHUDElements
struct ABuff_TekStrider_Shield_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.can activate
struct ABuff_TekStrider_Shield_C_can_activate_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Get Dynamic Mat
struct ABuff_TekStrider_Shield_C_Get_Dynamic_Mat_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceivePointDamage
struct ABuff_TekStrider_Shield_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield
struct ABuff_TekStrider_Shield_C_deactivate_shield_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Trigger
struct ABuff_TekStrider_Shield_C_Trigger_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveAnyDamage
struct ABuff_TekStrider_Shield_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPDeactivated
struct ABuff_TekStrider_Shield_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UpdateShieldedCharacters
struct ABuff_TekStrider_Shield_C_UpdateShieldedCharacters_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPSetupForInstigator
struct ABuff_TekStrider_Shield_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UserConstructionScript
struct ABuff_TekStrider_Shield_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__FinishedFunc
struct ABuff_TekStrider_Shield_C_forward_activate_shield_vfx__FinishedFunc_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__UpdateFunc
struct ABuff_TekStrider_Shield_C_forward_activate_shield_vfx__UpdateFunc_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__FinishedFunc
struct ABuff_TekStrider_Shield_C_reverse_activate_shield_vfx__FinishedFunc_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__UpdateFunc
struct ABuff_TekStrider_Shield_C_reverse_activate_shield_vfx__UpdateFunc_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_ActivateShield
struct ABuff_TekStrider_Shield_C_Multicast_ActivateShield_Params
{
	float                                              durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_DeactivateShield
struct ABuff_TekStrider_Shield_C_Multicast_DeactivateShield_Params
{
	bool                                               ForceDeactivate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Activate Shield VFX
struct ABuff_TekStrider_Shield_C_Activate_Shield_VFX_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield vfx
struct ABuff_TekStrider_Shield_C_deactivate_shield_vfx_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Spawn Particle At Hit Point
struct ABuff_TekStrider_Shield_C_Spawn_Particle_At_Hit_Point_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hit_normal;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.adjust shield color
struct ABuff_TekStrider_Shield_C_adjust_shield_color_Params
{
	float                                              durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveBeginPlay
struct ABuff_TekStrider_Shield_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ExecuteUbergraph_Buff_TekStrider_Shield
struct ABuff_TekStrider_Shield_C_ExecuteUbergraph_Buff_TekStrider_Shield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
