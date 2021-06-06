#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekClaws_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BPAddedAttachments
struct UPrimalItem_WeaponTekClaws_C_BPAddedAttachments_Params
{
};

// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.CanRunCosmeticEvents
struct UPrimalItem_WeaponTekClaws_C_CanRunCosmeticEvents_Params
{
	bool                                               CanRun;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintUnequipped
struct UPrimalItem_WeaponTekClaws_C_BlueprintUnequipped_Params
{
};

// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintOwnerPosssessed
struct UPrimalItem_WeaponTekClaws_C_BlueprintOwnerPosssessed_Params
{
	class AController**                                PossessedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintEquipped
struct UPrimalItem_WeaponTekClaws_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.ExecuteUbergraph_PrimalItem_WeaponTekClaws
struct UPrimalItem_WeaponTekClaws_C_ExecuteUbergraph_PrimalItem_WeaponTekClaws_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
