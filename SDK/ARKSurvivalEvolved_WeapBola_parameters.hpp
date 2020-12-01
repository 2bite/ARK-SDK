#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBola_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapBola.WeapBola_C.BPWeaponCanFire
struct AWeapBola_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapBola.WeapBola_C.BPGetProjectileSpeed
struct AWeapBola_C_BPGetProjectileSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapBola.WeapBola_C.UserConstructionScript
struct AWeapBola_C_UserConstructionScript_Params
{
};

// Function WeapBola.WeapBola_C.ExecuteUbergraph_WeapBola
struct AWeapBola_C_ExecuteUbergraph_WeapBola_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
