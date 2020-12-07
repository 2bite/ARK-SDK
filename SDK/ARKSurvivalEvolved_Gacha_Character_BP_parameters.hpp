#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gacha_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChanceWild
struct AGacha_Character_BP_C_CalculateItemChanceWild_Params
{
	float                                              CrystalQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChance
struct AGacha_Character_BP_C_CalculateItemChance_Params
{
	float                                              CrystalQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.HasEnemyTarget
struct AGacha_Character_BP_C_HasEnemyTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.HasFriendlyTarget
struct AGacha_Character_BP_C_HasFriendlyTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalDropTransform
struct AGacha_Character_BP_C_GetCrystalDropTransform_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BlueprintCanRiderAttack
struct AGacha_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetNoTarget
struct AGacha_Character_BP_C_BPModifyAimOffsetNoTarget_Params
{
	struct FRotator                                    Aim;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.OverrideRandomWanderLocation
struct AGacha_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveAnyDamage
struct AGacha_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeProduction
struct AGacha_Character_BP_C_InitializeProduction_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeCrystals
struct AGacha_Character_BP_C_InitializeCrystals_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.FindWanderTarget
struct AGacha_Character_BP_C_FindWanderTarget_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.GetDigestionFrequencyMultiplier
struct AGacha_Character_BP_C_GetDigestionFrequencyMultiplier_Params
{
	float                                              mult;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalQualityMultiplier
struct AGacha_Character_BP_C_GetCrystalQualityMultiplier_Params
{
	float                                              mult;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.Get Digestion Amount Multiplier
struct AGacha_Character_BP_C_Get_Digestion_Amount_Multiplier_Params
{
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetTargetLocation
struct AGacha_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
{
	struct FVector                                     AimTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPUnstasisConsumeFood
struct AGacha_Character_BP_C_BPUnstasisConsumeFood_Params
{
	float*                                             FoodNeeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.GetEfficiencyFactor
struct AGacha_Character_BP_C_GetEfficiencyFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.ResetDigestionTimer
struct AGacha_Character_BP_C_ResetDigestionTimer_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BabyDigestion
struct AGacha_Character_BP_C_BabyDigestion_Params
{
	bool                                               AteSomething;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.Is Unhappy
struct AGacha_Character_BP_C_Is_Unhappy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.IsHappy
struct AGacha_Character_BP_C_IsHappy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateCrystalQuality
struct AGacha_Character_BP_C_CalculateCrystalQuality_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.OnRep_EmotionLevel
struct AGacha_Character_BP_C_OnRep_EmotionLevel_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.EmotionCheck
struct AGacha_Character_BP_C_EmotionCheck_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveTick
struct AGacha_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.Play Start Digest Animation
struct AGacha_Character_BP_C_Play_Start_Digest_Animation_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPOnDinoCheat
struct AGacha_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.DistributeFood
struct AGacha_Character_BP_C_DistributeFood_Params
{
	float                                              FoodEaten;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.Look for Food Drops
struct AGacha_Character_BP_C_Look_for_Food_Drops_Params
{
	bool                                               PlayerAttack;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundSomething;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemTamingValue
struct AGacha_Character_BP_C_GetItemTamingValue_Params
{
	class UPrimalItem*                                 Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Affinity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWanted;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemFoodValue
struct AGacha_Character_BP_C_GetItemFoodValue_Params
{
	class UPrimalItem*                                 Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPremium;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FoodValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.Stop Eating
struct AGacha_Character_BP_C_Stop_Eating_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.StartEating
struct AGacha_Character_BP_C_StartEating_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPNotifyWildHarvestAttack
struct AGacha_Character_BP_C_BPNotifyWildHarvestAttack_Params
{
	int*                                               harvestIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemBaseValue
struct AGacha_Character_BP_C_GetItemBaseValue_Params
{
	class UPrimalItem*                                 PrimalItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.ChooseLootSet
struct AGacha_Character_BP_C_ChooseLootSet_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPClientDoMultiUse
struct AGacha_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPTryMultiUse
struct AGacha_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPGetMultiUseEntries
struct AGacha_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.WildDigestion
struct AGacha_Character_BP_C_WildDigestion_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.Play Digest Animation
struct AGacha_Character_BP_C_Play_Digest_Animation_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.SetCrystalScale
struct AGacha_Character_BP_C_SetCrystalScale_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.DropCrystal
struct AGacha_Character_BP_C_DropCrystal_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.FinishDigestion
struct AGacha_Character_BP_C_FinishDigestion_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.TamedDigestion
struct AGacha_Character_BP_C_TamedDigestion_Params
{
	bool                                               AteSomething;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.Play Release Animation
struct AGacha_Character_BP_C_Play_Release_Animation_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.DigestionTick
struct AGacha_Character_BP_C_DigestionTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.TamingTick
struct AGacha_Character_BP_C_TamingTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.LookForTamingDrops
struct AGacha_Character_BP_C_LookForTamingDrops_Params
{
	bool                                               FoundSomething;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.GiveAffinity
struct AGacha_Character_BP_C_GiveAffinity_Params
{
	class APrimalCharacter*                            tamer;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              AffinityToGive;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               wasTamed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.WantsResource
struct AGacha_Character_BP_C_WantsResource_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               IsWanted;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Affinity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPDoHarvestAttack
struct AGacha_Character_BP_C_BPDoHarvestAttack_Params
{
	int*                                               harvestIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestingQuantity
struct AGacha_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestDamage
struct AGacha_Character_BP_C_BPModifyHarvestDamage_Params
{
	class UPrimalHarvestingComponent**                 harvestComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.UserConstructionScript
struct AGacha_Character_BP_C_UserConstructionScript_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DoneEating
struct AGacha_Character_BP_C_AnimNotify_DoneEating_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DropCrystal
struct AGacha_Character_BP_C_AnimNotify_DropCrystal_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.BPDinoPostBeginPlay
struct AGacha_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_CheckForCrystal
struct AGacha_Character_BP_C_AnimNotify_CheckForCrystal_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.CleanUpEating
struct AGacha_Character_BP_C_CleanUpEating_Params
{
};

// Function Gacha_Character_BP.Gacha_Character_BP_C.ExecuteUbergraph_Gacha_Character_BP
struct AGacha_Character_BP_C_ExecuteUbergraph_Gacha_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
