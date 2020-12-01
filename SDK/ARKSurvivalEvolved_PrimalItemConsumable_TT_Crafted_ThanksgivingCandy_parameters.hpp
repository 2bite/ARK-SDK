#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.GetBuffSpeedPercentage
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_GetBuffSpeedPercentage_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.BPInitIconMaterial
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_BPInitIconMaterial_Params
{
};

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.GetDyeItemDescriptiveName
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_GetDyeItemDescriptiveName_Params
{
	class UPrimalGameData*                             GameData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      DescriptiveNameBase;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.GetInvertedWeights
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_GetInvertedWeights_Params
{
	TArray<float>                                      Weights;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.BPPreUseItem
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_BPPreUseItem_Params
{
};

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.BPInitItemColors
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_BPInitItemColors_Params
{
	TArray<int>                                        ColorIDs;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.BPPostAddBuffToGiveOwnerCharacter
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_BPPostAddBuffToGiveOwnerCharacter_Params
{
	class APrimalCharacter**                           OwnerCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff**                                Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.BPGetItemDescription
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemConsumable_TT_Crafted_ThanksgivingCandy.PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C.ExecuteUbergraph_PrimalItemConsumable_TT_Crafted_ThanksgivingCandy
struct UPrimalItemConsumable_TT_Crafted_ThanksgivingCandy_C_ExecuteUbergraph_PrimalItemConsumable_TT_Crafted_ThanksgivingCandy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
