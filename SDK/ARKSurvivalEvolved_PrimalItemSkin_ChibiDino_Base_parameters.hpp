#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemName
struct UPrimalItemSkin_ChibiDino_Base_C_BPGetItemName_Params
{
	class FString*                                     ItemNameIn;                                               // (Parm, ZeroConstructor)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BlueprintEquipped
struct UPrimalItemSkin_ChibiDino_Base_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPSetupHUDIconMaterial
struct UPrimalItemSkin_ChibiDino_Base_C_BPSetupHUDIconMaterial_Params
{
	class UMaterialInstanceDynamic**                   theMID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.Get XPRequired for PreviousLevel
struct UPrimalItemSkin_ChibiDino_Base_C_Get_XPRequired_for_PreviousLevel_Params
{
	float                                              XPOut;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetCustomInventoryWidgetText
struct UPrimalItemSkin_ChibiDino_Base_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.GetXPRequiredForNextLevel
struct UPrimalItemSkin_ChibiDino_Base_C_GetXPRequiredForNextLevel_Params
{
	float                                              XPOut;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDurabilityPercentage
struct UPrimalItemSkin_ChibiDino_Base_C_BPGetItemDurabilityPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPClientHandleItemNetExecCommand
struct UPrimalItemSkin_ChibiDino_Base_C_BPClientHandleItemNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.RefreshLevelData
struct UPrimalItemSkin_ChibiDino_Base_C_RefreshLevelData_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.AddXP
struct UPrimalItemSkin_ChibiDino_Base_C_AddXP_Params
{
	float                                              XPAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPEquippedItemOnXPEarning
struct UPrimalItemSkin_ChibiDino_Base_C_BPEquippedItemOnXPEarning_Params
{
	class APrimalCharacter**                           forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             howMuchXP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EXPType>*                              TheXPType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPInitFromItemNetInfo
struct UPrimalItemSkin_ChibiDino_Base_C_BPInitFromItemNetInfo_Params
{
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDescription
struct UPrimalItemSkin_ChibiDino_Base_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPAddedAttachments
struct UPrimalItemSkin_ChibiDino_Base_C_BPAddedAttachments_Params
{
};

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base
struct UPrimalItemSkin_ChibiDino_Base_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
