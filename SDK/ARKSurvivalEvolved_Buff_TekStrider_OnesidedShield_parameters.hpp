#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_OnesidedShield_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get activation charge cost
struct ABuff_TekStrider_OnesidedShield_C_get_activation_charge_cost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.
struct ABuff_TekStrider_OnesidedShield_C__Params
{
	float                                              _1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              _2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.inverse map range
struct ABuff_TekStrider_OnesidedShield_C_inverse_map_range_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeA;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeB;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Mapped_range_A__inverse_;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Mapped_range_B__inverse_;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Activate
struct ABuff_TekStrider_OnesidedShield_C_Restrict_Doubletap_Activate_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.toggle active on ai
struct ABuff_TekStrider_OnesidedShield_C_toggle_active_on_ai_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Ai Controlled
struct ABuff_TekStrider_OnesidedShield_C_Is_Ai_Controlled_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BuffTickServer
struct ABuff_TekStrider_OnesidedShield_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.can activate
struct ABuff_TekStrider_OnesidedShield_C_can_activate_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield loc to aiming direction
struct ABuff_TekStrider_OnesidedShield_C_adjust_shield_loc_to_aiming_direction_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Deactivating
struct ABuff_TekStrider_OnesidedShield_C_Is_Deactivating_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Deactivate
struct ABuff_TekStrider_OnesidedShield_C_Restrict_Doubletap_Deactivate_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerDoubletapped
struct ABuff_TekStrider_OnesidedShield_C_TriggerDoubletapped_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceivePointDamage
struct ABuff_TekStrider_OnesidedShield_C_ReceivePointDamage_Params
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

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Dynamic Material
struct ABuff_TekStrider_OnesidedShield_C_Get_Dynamic_Material_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerReleased
struct ABuff_TekStrider_OnesidedShield_C_TriggerReleased_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get local yaw and roll
struct ABuff_TekStrider_OnesidedShield_C_get_local_yaw_and_roll_Params
{
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield location
struct ABuff_TekStrider_OnesidedShield_C_adjust_shield_location_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPGetHUDElements
struct ABuff_TekStrider_OnesidedShield_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.timeout cancel shield
struct ABuff_TekStrider_OnesidedShield_C_timeout_cancel_shield_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Held Direction
struct ABuff_TekStrider_OnesidedShield_C_Get_Held_Direction_Params
{
	struct FVector                                     Held_Direction;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPServerHandleNetExecCommand
struct ABuff_TekStrider_OnesidedShield_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPClientHandleNetExecCommand
struct ABuff_TekStrider_OnesidedShield_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield
struct ABuff_TekStrider_OnesidedShield_C_deactivate_shield_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Trigger
struct ABuff_TekStrider_OnesidedShield_C_Trigger_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceiveAnyDamage
struct ABuff_TekStrider_OnesidedShield_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPDeactivated
struct ABuff_TekStrider_OnesidedShield_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPSetupForInstigator
struct ABuff_TekStrider_OnesidedShield_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.UserConstructionScript
struct ABuff_TekStrider_OnesidedShield_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__FinishedFunc
struct ABuff_TekStrider_OnesidedShield_C_Timeline_0__FinishedFunc_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__UpdateFunc
struct ABuff_TekStrider_OnesidedShield_C_Timeline_0__UpdateFunc_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__FinishedFunc
struct ABuff_TekStrider_OnesidedShield_C_Timeline_1__FinishedFunc_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__UpdateFunc
struct ABuff_TekStrider_OnesidedShield_C_Timeline_1__UpdateFunc_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__FinishedFunc
struct ABuff_TekStrider_OnesidedShield_C_Timeline_2__FinishedFunc_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__UpdateFunc
struct ABuff_TekStrider_OnesidedShield_C_Timeline_2__UpdateFunc_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_ActivateShield
struct ABuff_TekStrider_OnesidedShield_C_Multicast_ActivateShield_Params
{
	float                                              shield_durability;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_DeactivateShield
struct ABuff_TekStrider_OnesidedShield_C_Multicast_DeactivateShield_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.SetShieldRotation
struct ABuff_TekStrider_OnesidedShield_C_SetShieldRotation_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Activate Shield VFX
struct ABuff_TekStrider_OnesidedShield_C_Activate_Shield_VFX_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield vfx
struct ABuff_TekStrider_OnesidedShield_C_deactivate_shield_vfx_Params
{
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield color
struct ABuff_TekStrider_OnesidedShield_C_adjust_shield_color_Params
{
	float                                              durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Spawn Particle At Hit Point
struct ABuff_TekStrider_OnesidedShield_C_Spawn_Particle_At_Hit_Point_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Hit;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ExecuteUbergraph_Buff_TekStrider_OnesidedShield
struct ABuff_TekStrider_OnesidedShield_C_ExecuteUbergraph_Buff_TekStrider_OnesidedShield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
