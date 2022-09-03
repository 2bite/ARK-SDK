#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TrainingDummy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.TimedReportDPS
struct AStructure_TrainingDummy_C_TimedReportDPS_Params
{
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPPlacedStructure
struct AStructure_TrainingDummy_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.RemoveSnapshot
struct AStructure_TrainingDummy_C_RemoveSnapshot_Params
{
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ApplySnapshot
struct AStructure_TrainingDummy_C_ApplySnapshot_Params
{
	class UPrimalItem**                                Snapshot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPGetMultiUseCenterText
struct AStructure_TrainingDummy_C_BPGetMultiUseCenterText_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      OutCenterText;                                            // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                OutCenterTextColor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPTryMultiUse
struct AStructure_TrainingDummy_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPGetMultiUseEntries
struct AStructure_TrainingDummy_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ReportDPS
struct AStructure_TrainingDummy_C_ReportDPS_Params
{
	float                                              ReportTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPAdjustDamage
struct AStructure_TrainingDummy_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.UserConstructionScript
struct AStructure_TrainingDummy_C_UserConstructionScript_Params
{
};

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ExecuteUbergraph_Structure_TrainingDummy
struct AStructure_TrainingDummy_C_ExecuteUbergraph_Structure_TrainingDummy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
