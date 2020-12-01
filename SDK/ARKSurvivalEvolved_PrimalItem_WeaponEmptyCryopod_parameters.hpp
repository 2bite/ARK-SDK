#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponEmptyCryopod_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.Get Stat Value for Display
struct UPrimalItem_WeaponEmptyCryopod_C_Get_Stat_Value_for_Display_Params
{
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetStatDisplayName
struct UPrimalItem_WeaponEmptyCryopod_C_GetStatDisplayName_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm, OutParm)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemDescription
struct UPrimalItem_WeaponEmptyCryopod_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPInitIconMaterial
struct UPrimalItem_WeaponEmptyCryopod_C_BPInitIconMaterial_Params
{
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomIconMaterialParent
struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomIconMaterialParent_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemUploaded
struct UPrimalItem_WeaponEmptyCryopod_C_BPTributeItemUploaded_Params
{
	class UObject**                                    ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemDownloaded
struct UPrimalItem_WeaponEmptyCryopod_C_BPTributeItemDownloaded_Params
{
	class UObject**                                    ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBelowDurabilityThreshold
struct UPrimalItem_WeaponEmptyCryopod_C_BPItemBelowDurabilityThreshold_Params
{
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetTextColor
struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomInventoryWidgetTextColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomDurabilityText
struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomDurabilityText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomAutoDecreaseDurabilityPerInterval
struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomAutoDecreaseDurabilityPerInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBroken
struct UPrimalItem_WeaponEmptyCryopod_C_BPItemBroken_Params
{
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.TryDeploy
struct UPrimalItem_WeaponEmptyCryopod_C_TryDeploy_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawningActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Deployed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      FailureReason;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanFit
struct UPrimalItem_WeaponEmptyCryopod_C_CanFit_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VerticalOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawningActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanDeploy
struct UPrimalItem_WeaponEmptyCryopod_C_CanDeploy_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawningActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      FailureReason;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemName
struct UPrimalItem_WeaponEmptyCryopod_C_BPGetItemName_Params
{
	class FString*                                     ItemNameIn;                                               // (Parm, ZeroConstructor)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BrokenDeploy
struct UPrimalItem_WeaponEmptyCryopod_C_BrokenDeploy_Params
{
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod
struct UPrimalItem_WeaponEmptyCryopod_C_ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.NewEventDispatcher__DelegateSignature
struct UPrimalItem_WeaponEmptyCryopod_C_NewEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
