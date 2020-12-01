#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItem_GachaPod_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UpdateItemName
struct ADroppedItem_GachaPod_C_UpdateItemName_Params
{
};

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveHit
struct ADroppedItem_GachaPod_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.OnRep_ItemQuality
struct ADroppedItem_GachaPod_C_OnRep_ItemQuality_Params
{
};

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveBeginPlay
struct ADroppedItem_GachaPod_C_ReceiveBeginPlay_Params
{
};

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.CheckForItem
struct ADroppedItem_GachaPod_C_CheckForItem_Params
{
};

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ActivateFX
struct ADroppedItem_GachaPod_C_ActivateFX_Params
{
};

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UserConstructionScript
struct ADroppedItem_GachaPod_C_UserConstructionScript_Params
{
};

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ColorShift
struct ADroppedItem_GachaPod_C_ColorShift_Params
{
};

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ExecuteUbergraph_DroppedItem_GachaPod
struct ADroppedItem_GachaPod_C_ExecuteUbergraph_DroppedItem_GachaPod_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
