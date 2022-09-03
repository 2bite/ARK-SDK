#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ShieldTek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPClientHandleItemNetExecCommand
struct UPrimalItemArmor_ShieldTek_C_BPClientHandleItemNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.PlayHitShieldEffect
struct UPrimalItemArmor_ShieldTek_C_PlayHitShieldEffect_Params
{
	bool                                               bLocalOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPConsumeProjectileImpact
struct UPrimalItemArmor_ShieldTek_C_BPConsumeProjectileImpact_Params
{
	class AShooterProjectile**                         theProjectile;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPAddedAttachments
struct UPrimalItemArmor_ShieldTek_C_BPAddedAttachments_Params
{
};

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.RefreshAmmoMaterial
struct UPrimalItemArmor_ShieldTek_C_RefreshAmmoMaterial_Params
{
};

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ClientUpdatedWeaponClipAmmo
struct UPrimalItemArmor_ShieldTek_C_ClientUpdatedWeaponClipAmmo_Params
{
};

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.HandleShieldDamageBlocking
struct UPrimalItemArmor_ShieldTek_C_HandleShieldDamageBlocking_Params
{
	class AShooterCharacter**                          ForShooterCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ExecuteUbergraph_PrimalItemArmor_ShieldTek
struct UPrimalItemArmor_ShieldTek_C_ExecuteUbergraph_PrimalItemArmor_ShieldTek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
