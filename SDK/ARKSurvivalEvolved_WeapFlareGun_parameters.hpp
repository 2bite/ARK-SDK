#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlareGun_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapFlareGun.WeapFlareGun_C.BPWeaponCanFire
struct AWeapFlareGun_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFlareGun.WeapFlareGun_C.UserConstructionScript
struct AWeapFlareGun_C_UserConstructionScript_Params
{
};

// Function WeapFlareGun.WeapFlareGun_C.ExecuteUbergraph_WeapFlareGun
struct AWeapFlareGun_C_ExecuteUbergraph_WeapFlareGun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
