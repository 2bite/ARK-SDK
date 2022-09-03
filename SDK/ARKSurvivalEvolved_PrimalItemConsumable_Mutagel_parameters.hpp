#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mutagel_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPPreUseItem
struct UPrimalItemConsumable_Mutagel_C_BPPreUseItem_Params
{
};

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPServerHandleItemNetExecCommand
struct UPrimalItemConsumable_Mutagel_C_BPServerHandleItemNetExecCommand_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
};

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.find strider
struct UPrimalItemConsumable_Mutagel_C_find_strider_Params
{
	bool                                               Backup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        strider;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.GetAmountInInventory
struct UPrimalItemConsumable_Mutagel_C_GetAmountInInventory_Params
{
	int                                                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.CalculateAmountNeeded
struct UPrimalItemConsumable_Mutagel_C_CalculateAmountNeeded_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPGetItemDescription
struct UPrimalItemConsumable_Mutagel_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BlueprintUsed
struct UPrimalItemConsumable_Mutagel_C_BlueprintUsed_Params
{
};

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPCanUse
struct UPrimalItemConsumable_Mutagel_C_BPCanUse_Params
{
	bool*                                              bIgnoreCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.ExecuteUbergraph_PrimalItemConsumable_Mutagel
struct UPrimalItemConsumable_Mutagel_C_ExecuteUbergraph_PrimalItemConsumable_Mutagel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
