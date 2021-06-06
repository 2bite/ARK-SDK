#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DinoSpawner_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetTextColor
struct UPrimalItem_DinoSpawner_Base_C_BPGetCustomInventoryWidgetTextColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_DinoSpawner_Base_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.DoesClientHaveStatData
struct UPrimalItem_DinoSpawner_Base_C_DoesClientHaveStatData_Params
{
	bool                                               HasData;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPCanUse
struct UPrimalItem_DinoSpawner_Base_C_BPCanUse_Params
{
	bool*                                              bIgnoreCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoColorizationData
struct UPrimalItem_DinoSpawner_Base_C_GetDinoColorizationData_Params
{
	bool                                               HasAnyColorData;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ColorData;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.PreDinoSpawned
struct UPrimalItem_DinoSpawner_Base_C_PreDinoSpawned_Params
{
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.CopyDinoStatsFromDino
struct UPrimalItem_DinoSpawner_Base_C_CopyDinoStatsFromDino_Params
{
	class UPrimalCharacterStatusComponent*             StatusComp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        StatOffsets;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              Colorization;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetStatDisplayString
struct UPrimalItem_DinoSpawner_Base_C_GetStatDisplayString_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StatConvertMapIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      StatDisplay;                                              // (Parm, OutParm, ZeroConstructor)
	class FString                                      ValueDisplay;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ShowInTooltip;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoStat
struct UPrimalItem_DinoSpawner_Base_C_GetDinoStat_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           statType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumDinoLevels;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StatMapIndexUsed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetItemDescription
struct UPrimalItem_DinoSpawner_Base_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.OnDinoSpawned
struct UPrimalItem_DinoSpawner_Base_C_OnDinoSpawned_Params
{
	class APrimalDinoCharacter*                        NewDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BlueprintUsed
struct UPrimalItem_DinoSpawner_Base_C_BlueprintUsed_Params
{
};

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.ExecuteUbergraph_PrimalItem_DinoSpawner_Base
struct UPrimalItem_DinoSpawner_Base_C_ExecuteUbergraph_PrimalItem_DinoSpawner_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
