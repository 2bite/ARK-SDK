#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatform_Base_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ThrottledTick
struct AOceanPlatform_Base_BP_C_ThrottledTick_Params
{
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPOnDemolish
struct AOceanPlatform_Base_BP_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SetRetract Ladders
struct AOceanPlatform_Base_BP_C_SetRetract_Ladders_Params
{
	bool                                               Retract;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UpdateLadderHeight
struct AOceanPlatform_Base_BP_C_UpdateLadderHeight_Params
{
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BuildLadders
struct AOceanPlatform_Base_BP_C_BuildLadders_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPPlacedStructure
struct AOceanPlatform_Base_BP_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SelfDamage
struct AOceanPlatform_Base_BP_C_SelfDamage_Params
{
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ReceiveBeginPlay
struct AOceanPlatform_Base_BP_C_ReceiveBeginPlay_Params
{
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPIsAllowedToBuild
struct AOceanPlatform_Base_BP_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UserConstructionScript
struct AOceanPlatform_Base_BP_C_UserConstructionScript_Params
{
};

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ExecuteUbergraph_OceanPlatform_Base_BP
struct AOceanPlatform_Base_BP_C_ExecuteUbergraph_OceanPlatform_Base_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
