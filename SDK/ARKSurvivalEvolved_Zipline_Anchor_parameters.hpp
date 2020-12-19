#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_Anchor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Zipline_Anchor.Zipline_Anchor_C.BPAdjustDamage
struct AZipline_Anchor_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.Get Closest Point on Line Non Pure
struct AZipline_Anchor_C_Get_Closest_Point_on_Line_Non_Pure_Params
{
	struct FVector                                     LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     closestPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info NonPure
struct AZipline_Anchor_C_Get_Zipline_Info_NonPure_Params
{
	struct FVector                                     DownDirection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           UpperAnchor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           LowerAnchor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpperCableAttachLoc;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowerCableAttachLoc;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Buff
struct AZipline_Anchor_C_Get_Zipline_Buff_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchorClient
struct AZipline_Anchor_C_InitLinkedAnchorClient_Params
{
};

// Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchor
struct AZipline_Anchor_C_InitLinkedAnchor_Params
{
};

// Function Zipline_Anchor.Zipline_Anchor_C.CreateCable
struct AZipline_Anchor_C_CreateCable_Params
{
};

// Function Zipline_Anchor.Zipline_Anchor_C.AllowManualMultiUseActivation
struct AZipline_Anchor_C_AllowManualMultiUseActivation_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.IsUpperAnchorPoint
struct AZipline_Anchor_C_IsUpperAnchorPoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.HasLineOfSight
struct AZipline_Anchor_C_HasLineOfSight_Params
{
	class APrimalCharacter*                            PrimalCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasLineOfSight;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.CheckForHarness
struct AZipline_Anchor_C_CheckForHarness_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.SpawnBreakEmitter
struct AZipline_Anchor_C_SpawnBreakEmitter_Params
{
};

// Function Zipline_Anchor.Zipline_Anchor_C.GetBuffInfo
struct AZipline_Anchor_C_GetBuffInfo_Params
{
	class UClass*                                      ZiplineBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AttachOffset;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FWeaponAnim                                 AttachAnims;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HandleMeshComp;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Motorized;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StartEndOffset;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HideWeaponEnabled;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxActivationDistance;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info
struct AZipline_Anchor_C_Get_Zipline_Info_Params
{
	struct FVector                                     DownDirection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           UpperAnchor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           LowerAnchor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpperCableAttachLoc;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowerCableAttachLoc;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.IsZiplineBlocked
struct AZipline_Anchor_C_IsZiplineBlocked_Params
{
	class APrimalCharacter*                            primalChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartEndOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AttachOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     overrideStartLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              overrideFindLocationDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideFindLocationDirection;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontUseLineOfSightCheck;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               HitReturn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.ReceiveDestroyed
struct AZipline_Anchor_C_ReceiveDestroyed_Params
{
};

// Function Zipline_Anchor.Zipline_Anchor_C.GetClosestPointOnLine
struct AZipline_Anchor_C_GetClosestPointOnLine_Params
{
	struct FVector                                     LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     closestPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.RideZipline
struct AZipline_Anchor_C_RideZipline_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ZiplineBuff;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.BPTryMultiUse
struct AZipline_Anchor_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Zipline_Anchor.Zipline_Anchor_C.BPGetMultiUseEntries
struct AZipline_Anchor_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Zipline_Anchor.Zipline_Anchor_C.UserConstructionScript
struct AZipline_Anchor_C_UserConstructionScript_Params
{
};

// Function Zipline_Anchor.Zipline_Anchor_C.ReceiveBeginPlay
struct AZipline_Anchor_C_ReceiveBeginPlay_Params
{
};

// Function Zipline_Anchor.Zipline_Anchor_C.ExecuteUbergraph_Zipline_Anchor
struct AZipline_Anchor_C_ExecuteUbergraph_Zipline_Anchor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
