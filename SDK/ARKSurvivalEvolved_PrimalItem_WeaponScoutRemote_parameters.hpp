#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponScoutRemote_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.GetScoutStats
struct UPrimalItem_WeaponScoutRemote_C_GetScoutStats_Params
{
	TArray<float>                                      Stats;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemIcon
struct UPrimalItem_WeaponScoutRemote_C_BPGetItemIcon_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemName
struct UPrimalItem_WeaponScoutRemote_C_BPGetItemName_Params
{
	class FString*                                     ItemNameIn;                                               // (Parm, ZeroConstructor)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.SetScoutCharacterStatusValues
struct UPrimalItem_WeaponScoutRemote_C_SetScoutCharacterStatusValues_Params
{
	TArray<float>                                      Stats;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.OnRep_ScoutStats
struct UPrimalItem_WeaponScoutRemote_C_OnRep_ScoutStats_Params
{
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemDescription
struct UPrimalItem_WeaponScoutRemote_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutPossessedBySurvivor
struct UPrimalItem_WeaponScoutRemote_C_ScoutPossessedBySurvivor_Params
{
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutReleasedPossessingSurvivor
struct UPrimalItem_WeaponScoutRemote_C_ScoutReleasedPossessingSurvivor_Params
{
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintUnequipped
struct UPrimalItem_WeaponScoutRemote_C_BlueprintUnequipped_Params
{
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.Can FireWeapon
struct UPrimalItem_WeaponScoutRemote_C_Can_FireWeapon_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScoutRemoteReturnCode>                FailReason;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintEquipped
struct UPrimalItem_WeaponScoutRemote_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ExecuteUbergraph_PrimalItem_WeaponScoutRemote
struct UPrimalItem_WeaponScoutRemote_C_ExecuteUbergraph_PrimalItem_WeaponScoutRemote_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
