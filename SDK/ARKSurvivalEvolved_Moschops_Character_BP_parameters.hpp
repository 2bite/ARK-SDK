#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moschops_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Moschops_Character_BP.Moschops_Character_BP_C.CapHarvestStats
struct AMoschops_Character_BP_C_CapHarvestStats_Params
{
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.Get Taming Food Item List
struct AMoschops_Character_BP_C_Get_Taming_Food_Item_List_Params
{
	TArray<class UClass*>                              Item;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPUntamedConsumeFoodItem
struct AMoschops_Character_BP_C_BPUntamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.OnRep_RequiredTamingFoodIndex
struct AMoschops_Character_BP_C_OnRep_RequiredTamingFoodIndex_Params
{
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPShouldForceFlee
struct AMoschops_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPCanTargetCorpse
struct AMoschops_Character_BP_C_BPCanTargetCorpse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BlueprintCanAttack
struct AMoschops_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPClientDoMultiUse
struct AMoschops_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPDoHarvestAttack
struct AMoschops_Character_BP_C_BPDoHarvestAttack_Params
{
	int*                                               harvestIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.Get Current Harvest Level
struct AMoschops_Character_BP_C_Get_Current_Harvest_Level_Params
{
	int                                                Current_Level;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPNotifyLevelUp
struct AMoschops_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPModifyHarvestingQuantity
struct AMoschops_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPModifyHarvestingWeightsArray
struct AMoschops_Character_BP_C_BPModifyHarvestingWeightsArray_Params
{
	TArray<float>                                      resourceWeightsIn;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimalItem*>                         resourceItems;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      resourceWeightsOut;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.Harvest Multiplier Level Up
struct AMoschops_Character_BP_C_Harvest_Multiplier_Level_Up_Params
{
	int                                                UseEntryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.MakeUseEntryString
struct AMoschops_Character_BP_C_MakeUseEntryString_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPTryMultiUse
struct AMoschops_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.Add Level Up Entries
struct AMoschops_Character_BP_C_Add_Level_Up_Entries_Params
{
	TArray<struct FMultiUseEntry>                      FullEntryList;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPGetMultiUseEntries
struct AMoschops_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.UserConstructionScript
struct AMoschops_Character_BP_C_UserConstructionScript_Params
{
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.AnimNotify_HarvestEnd
struct AMoschops_Character_BP_C_AnimNotify_HarvestEnd_Params
{
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.ReceiveBeginPlay
struct AMoschops_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPSetupTamed
struct AMoschops_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.BPResetClone
struct AMoschops_Character_BP_C_BPResetClone_Params
{
};

// Function Moschops_Character_BP.Moschops_Character_BP_C.ExecuteUbergraph_Moschops_Character_BP
struct AMoschops_Character_BP_C_ExecuteUbergraph_Moschops_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
