#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AmmoContainerHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoContainerIcon
struct ABuff_AmmoContainerHelper_C_GetAmmoContainerIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ProvidedAmmoQuantity
struct ABuff_AmmoContainerHelper_C_ProvidedAmmoQuantity_Params
{
	class APrimalStructureItemContainer*               TurretStructureItemContainer;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoItemTemplate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AnyAmmoContainersInRange;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAllAmmoNearby
struct ABuff_AmmoContainerHelper_C_GetAllAmmoNearby_Params
{
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialQuantity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartingLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            TurretToCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                finalQuantity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AnyAmmoContainersInRange;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.DrawBuffFloatingHUD
struct ABuff_AmmoContainerHelper_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.CalculateWidgetLocation
struct ABuff_AmmoContainerHelper_C_CalculateWidgetLocation_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSlots;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoInfo
struct ABuff_AmmoContainerHelper_C_GetAmmoInfo_Params
{
	TArray<class UClass*>                              AmmoTypeList;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        AmmoCountList;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FAmmoCount>                          AmmoCounts;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.SyncHUDElements
struct ABuff_AmmoContainerHelper_C_SyncHUDElements_Params
{
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BPGetHUDElements
struct ABuff_AmmoContainerHelper_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ReceiveBeginPlay
struct ABuff_AmmoContainerHelper_C_ReceiveBeginPlay_Params
{
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.UserConstructionScript
struct ABuff_AmmoContainerHelper_C_UserConstructionScript_Params
{
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BuffTickClient
struct ABuff_AmmoContainerHelper_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ExecuteUbergraph_Buff_AmmoContainerHelper
struct ABuff_AmmoContainerHelper_C_ExecuteUbergraph_Buff_AmmoContainerHelper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
