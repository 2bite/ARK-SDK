#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPlantSpeciesZFruit_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsActorValidForPVEorIsPVP
struct AProjPlantSpeciesZFruit_C_IsActorValidForPVEorIsPVP_Params
{
	class AActor*                                      HitCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsShielded
struct AProjPlantSpeciesZFruit_C_IsShielded_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShielded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsWearingProtection
struct AProjPlantSpeciesZFruit_C_IsWearingProtection_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWearingProtection;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsNearbyStructure
struct AProjPlantSpeciesZFruit_C_IsNearbyStructure_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IndexOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StructureInBetween;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.GetAngleBetween
struct AProjPlantSpeciesZFruit_C_GetAngleBetween_Params
{
	struct FVector                                     v1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     v2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              retVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.UserConstructionScript
struct AProjPlantSpeciesZFruit_C_UserConstructionScript_Params
{
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.OnExplode
struct AProjPlantSpeciesZFruit_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.BPProjectileBounced
struct AProjPlantSpeciesZFruit_C_BPProjectileBounced_Params
{
	struct FHitResult                                  ImpactResult;                                             // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpactVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ReceiveBeginPlay
struct AProjPlantSpeciesZFruit_C_ReceiveBeginPlay_Params
{
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ROC_DisableProjectile
struct AProjPlantSpeciesZFruit_C_ROC_DisableProjectile_Params
{
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.SpawnCharge_Emitter
struct AProjPlantSpeciesZFruit_C_SpawnCharge_Emitter_Params
{
};

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ExecuteUbergraph_ProjPlantSpeciesZFruit
struct AProjPlantSpeciesZFruit_C_ExecuteUbergraph_ProjPlantSpeciesZFruit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
