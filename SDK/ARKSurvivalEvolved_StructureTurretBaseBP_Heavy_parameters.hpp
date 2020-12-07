#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_Heavy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.ReceiveBeginPlay
struct AStructureTurretBaseBP_Heavy_C_ReceiveBeginPlay_Params
{
};

// Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.BPIsAllowedToBuildEx
struct AStructureTurretBaseBP_Heavy_C_BPIsAllowedToBuildEx_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinalPlacement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bChoosingRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.UserConstructionScript
struct AStructureTurretBaseBP_Heavy_C_UserConstructionScript_Params
{
};

// Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.ExecuteUbergraph_StructureTurretBaseBP_Heavy
struct AStructureTurretBaseBP_Heavy_C_ExecuteUbergraph_StructureTurretBaseBP_Heavy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
