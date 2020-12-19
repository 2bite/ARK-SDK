#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekRifle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekRifle.WeapTekRifle_C.BPAppliedPrimalItemToWeapon
struct AWeapTekRifle_C_BPAppliedPrimalItemToWeapon_Params
{
};

// Function WeapTekRifle.WeapTekRifle_C.ReceiveDestroyed
struct AWeapTekRifle_C_ReceiveDestroyed_Params
{
};

// Function WeapTekRifle.WeapTekRifle_C.BPPreventSwitchingWeapon
struct AWeapTekRifle_C_BPPreventSwitchingWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekRifle.WeapTekRifle_C.BPWeaponZoom
struct AWeapTekRifle_C_BPWeaponZoom_Params
{
	bool*                                              bZoomingIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekRifle.WeapTekRifle_C.BPGlobalFireWeapon
struct AWeapTekRifle_C_BPGlobalFireWeapon_Params
{
};

// Function WeapTekRifle.WeapTekRifle_C.AllowTargeting
struct AWeapTekRifle_C_AllowTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekRifle.WeapTekRifle_C.BPWeaponCanFire
struct AWeapTekRifle_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekRifle.WeapTekRifle_C.BPFireWeapon
struct AWeapTekRifle_C_BPFireWeapon_Params
{
};

// Function WeapTekRifle.WeapTekRifle_C.ReceiveTick
struct AWeapTekRifle_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekRifle.WeapTekRifle_C.GetIs Overheated
struct AWeapTekRifle_C_GetIs_Overheated_Params
{
	bool                                               bRetOverheated;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekRifle.WeapTekRifle_C.UserConstructionScript
struct AWeapTekRifle_C_UserConstructionScript_Params
{
};

// Function WeapTekRifle.WeapTekRifle_C.Overheated
struct AWeapTekRifle_C_Overheated_Params
{
};

// Function WeapTekRifle.WeapTekRifle_C.AddHeat
struct AWeapTekRifle_C_AddHeat_Params
{
};

// Function WeapTekRifle.WeapTekRifle_C.NotOverheated
struct AWeapTekRifle_C_NotOverheated_Params
{
};

// Function WeapTekRifle.WeapTekRifle_C.ExecuteUbergraph_WeapTekRifle
struct AWeapTekRifle_C_ExecuteUbergraph_WeapTekRifle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
