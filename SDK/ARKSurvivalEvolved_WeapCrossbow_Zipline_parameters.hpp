#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Zipline_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ZiplineObstructionTrace
struct AWeapCrossbow_Zipline_C_ZiplineObstructionTrace_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPHandleMeleeAttack
struct AWeapCrossbow_Zipline_C_BPHandleMeleeAttack_Params
{
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.IsValidHitLocationForAttachment
struct AWeapCrossbow_Zipline_C_IsValidHitLocationForAttachment_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
	bool                                               IsValidHit;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPWeaponCanFire
struct AWeapCrossbow_Zipline_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Get ZipProjectile Default Object
struct AWeapCrossbow_Zipline_C_Get_ZipProjectile_Default_Object_Params
{
	class AProjZiplineAnchor_C*                        AsProjArrow_Zipline_Bolt_C;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Update Preview Cable
struct AWeapCrossbow_Zipline_C_Update_Preview_Cable_Params
{
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveTick
struct AWeapCrossbow_Zipline_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveDestroyed
struct AWeapCrossbow_Zipline_C_ReceiveDestroyed_Params
{
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.UserConstructionScript
struct AWeapCrossbow_Zipline_C_UserConstructionScript_Params
{
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReloadNow
struct AWeapCrossbow_Zipline_C_ReloadNow_Params
{
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ResetReload
struct AWeapCrossbow_Zipline_C_ResetReload_Params
{
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.NoPlacementNoti
struct AWeapCrossbow_Zipline_C_NoPlacementNoti_Params
{
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPFiredWeapon
struct AWeapCrossbow_Zipline_C_BPFiredWeapon_Params
{
};

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ExecuteUbergraph_WeapCrossbow_Zipline
struct AWeapCrossbow_Zipline_C_ExecuteUbergraph_WeapCrossbow_Zipline_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
