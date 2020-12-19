#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Therizino_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Therizino_Character_BP.Therizino_Character_BP_C.Cap Harvest Stats
struct ATherizino_Character_BP_C_Cap_Harvest_Stats_Params
{
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingWeightsArray
struct ATherizino_Character_BP_C_BPModifyHarvestingWeightsArray_Params
{
	TArray<float>                                      resourceWeightsIn;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimalItem*>                         resourceItems;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      resourceWeightsOut;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestDamage
struct ATherizino_Character_BP_C_BPModifyHarvestDamage_Params
{
	class UPrimalHarvestingComponent**                 harvestComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.Multiply Items by Attack Type
struct ATherizino_Character_BP_C_Multiply_Items_by_Attack_Type_Params
{
	int                                                InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPClientDoMultiUse
struct ATherizino_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPDoHarvestAttack
struct ATherizino_Character_BP_C_BPDoHarvestAttack_Params
{
	int*                                               harvestIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanAttack
struct ATherizino_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.SetClawAttackAnimByMovement
struct ATherizino_Character_BP_C_SetClawAttackAnimByMovement_Params
{
	int                                                Attack_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanRiderAttack
struct ATherizino_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingQuantity
struct ATherizino_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.GetCurrentHarvestLevel
struct ATherizino_Character_BP_C_GetCurrentHarvestLevel_Params
{
	int                                                Current_Level;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPNotifyLevelUp
struct ATherizino_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPGetMultiUseEntries
struct ATherizino_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.Harvest Multiplier Level Up
struct ATherizino_Character_BP_C_Harvest_Multiplier_Level_Up_Params
{
	int                                                UseEntryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.MakeUseEntryString
struct ATherizino_Character_BP_C_MakeUseEntryString_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPTryMultiUse
struct ATherizino_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.AddLevelUpEntries
struct ATherizino_Character_BP_C_AddLevelUpEntries_Params
{
	TArray<struct FMultiUseEntry>                      FullEntryList;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.UserConstructionScript
struct ATherizino_Character_BP_C_UserConstructionScript_Params
{
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_HarvestEnd
struct ATherizino_Character_BP_C_AnimNotify_HarvestEnd_Params
{
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_PowerHarvestEnd
struct ATherizino_Character_BP_C_AnimNotify_PowerHarvestEnd_Params
{
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.PlayLevelUpAnim
struct ATherizino_Character_BP_C_PlayLevelUpAnim_Params
{
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.ReceiveBeginPlay
struct ATherizino_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.BPResetClone
struct ATherizino_Character_BP_C_BPResetClone_Params
{
};

// Function Therizino_Character_BP.Therizino_Character_BP_C.ExecuteUbergraph_Therizino_Character_BP
struct ATherizino_Character_BP_C_ExecuteUbergraph_Therizino_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
