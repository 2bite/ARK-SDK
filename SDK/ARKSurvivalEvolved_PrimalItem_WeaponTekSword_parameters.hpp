#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekSword_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintUnequipped
struct UPrimalItem_WeaponTekSword_C_BlueprintUnequipped_Params
{
};

// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintOwnerPosssessed
struct UPrimalItem_WeaponTekSword_C_BlueprintOwnerPosssessed_Params
{
	class AController**                                PossessedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.InitBuff
struct UPrimalItem_WeaponTekSword_C_InitBuff_Params
{
};

// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintEquipped
struct UPrimalItem_WeaponTekSword_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.ExecuteUbergraph_PrimalItem_WeaponTekSword
struct UPrimalItem_WeaponTekSword_C_ExecuteUbergraph_PrimalItem_WeaponTekSword_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
