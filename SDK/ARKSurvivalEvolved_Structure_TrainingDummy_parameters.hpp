#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TrainingDummy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ReportDPS
struct AStructure_TrainingDummy_C_ReportDPS_Params
{
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

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.TookDamage
struct AStructure_TrainingDummy_C_TookDamage_Params
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
