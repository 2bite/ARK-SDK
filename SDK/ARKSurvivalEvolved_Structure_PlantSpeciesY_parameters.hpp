#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesY_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPAdjustDamage
struct AStructure_PlantSpeciesY_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPNotifyImmobilizedCharacterIsDeadOrInConscious
struct AStructure_PlantSpeciesY_C_BPNotifyImmobilizedCharacterIsDeadOrInConscious_Params
{
	bool*                                              IsDead;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsConscious;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPNotifyImmobilizedCharacterIsDead
struct AStructure_PlantSpeciesY_C_BPNotifyImmobilizedCharacterIsDead_Params
{
};

// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.UserConstructionScript
struct AStructure_PlantSpeciesY_C_UserConstructionScript_Params
{
};

// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.ReceiveBeginPlay
struct AStructure_PlantSpeciesY_C_ReceiveBeginPlay_Params
{
};

// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.PeriodicDamage
struct AStructure_PlantSpeciesY_C_PeriodicDamage_Params
{
};

// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.ExecuteUbergraph_Structure_PlantSpeciesY
struct AStructure_PlantSpeciesY_C_ExecuteUbergraph_Structure_PlantSpeciesY_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
