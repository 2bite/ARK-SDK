#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGlowStick_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjGlowStick.ProjGlowStick_C.GetGlowstickOwner
struct AProjGlowStick_C_GetGlowstickOwner_Params
{
	class AActor*                                      glowstickOwner;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjGlowStick.ProjGlowStick_C.ReceiveHit
struct AProjGlowStick_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function ProjGlowStick.ProjGlowStick_C.GetDefaultGlowStickRef
struct AProjGlowStick_C_GetDefaultGlowStickRef_Params
{
	class AWeapGlowStick_C*                            Ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjGlowStick.ProjGlowStick_C.HideAttachedComponents
struct AProjGlowStick_C_HideAttachedComponents_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.Set Collision Response
struct AProjGlowStick_C_Set_Collision_Response_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.IsAttachedToCharacter
struct AProjGlowStick_C_IsAttachedToCharacter_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjGlowStick.ProjGlowStick_C.Get Average Normal Within Radius
struct AProjGlowStick_C_Get_Average_Normal_Within_Radius_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjGlowStick.ProjGlowStick_C.Reset Scale
struct AProjGlowStick_C_Reset_Scale_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.Create Dynamic Material
struct AProjGlowStick_C_Create_Dynamic_Material_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.Update Emissiveness
struct AProjGlowStick_C_Update_Emissiveness_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.Check For Fade Out
struct AProjGlowStick_C_Check_For_Fade_Out_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.Set Collision
struct AProjGlowStick_C_Set_Collision_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjGlowStick.ProjGlowStick_C.InitGlowStickProjectile
struct AProjGlowStick_C_InitGlowStickProjectile_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.Hide Weapon
struct AProjGlowStick_C_Hide_Weapon_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.BPAttachedRootComponent
struct AProjGlowStick_C_BPAttachedRootComponent_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.ReceiveBeginPlay
struct AProjGlowStick_C_ReceiveBeginPlay_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.OnExplode
struct AProjGlowStick_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjGlowStick.ProjGlowStick_C.ReceiveTick
struct AProjGlowStick_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjGlowStick.ProjGlowStick_C.Fade Out Light
struct AProjGlowStick_C_Fade_Out_Light_Params
{
	float                                              Delta_Seconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjGlowStick.ProjGlowStick_C.UserConstructionScript
struct AProjGlowStick_C_UserConstructionScript_Params
{
};

// Function ProjGlowStick.ProjGlowStick_C.ReceiveAnyDamage
struct AProjGlowStick_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjGlowStick.ProjGlowStick_C.ExecuteUbergraph_ProjGlowStick
struct AProjGlowStick_C_ExecuteUbergraph_ProjGlowStick_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
