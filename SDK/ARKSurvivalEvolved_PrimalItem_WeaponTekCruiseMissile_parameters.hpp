#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekCruiseMissile_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.BPProcessEditText
struct UPrimalItem_WeaponTekCruiseMissile_C_BPProcessEditText_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     TextToUse;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Set Scout Character Status Values
struct UPrimalItem_WeaponTekCruiseMissile_C_Set_Scout_Character_Status_Values_Params
{
	TArray<float>                                      Stats;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Released Possessing Survivor
struct UPrimalItem_WeaponTekCruiseMissile_C_Missile_Released_Possessing_Survivor_Params
{
	bool                                               delay_for_zoom_out;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Possessed by Survivor
struct UPrimalItem_WeaponTekCruiseMissile_C_Missile_Possessed_by_Survivor_Params
{
};

// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.ExecuteUbergraph_PrimalItem_WeaponTekCruiseMissile
struct UPrimalItem_WeaponTekCruiseMissile_C_ExecuteUbergraph_PrimalItem_WeaponTekCruiseMissile_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
