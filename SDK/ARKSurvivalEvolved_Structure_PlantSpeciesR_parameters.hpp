#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesR_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.RefreshIdleAudio
struct AStructure_PlantSpeciesR_C_RefreshIdleAudio_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPOnDemolish
struct AStructure_PlantSpeciesR_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ClearLastHitRot
struct AStructure_PlantSpeciesR_C_ClearLastHitRot_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FillHarvestHealth
struct AStructure_PlantSpeciesR_C_FillHarvestHealth_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.OnRep_HarvestHealth
struct AStructure_PlantSpeciesR_C_OnRep_HarvestHealth_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.PlayHarvestVFX
struct AStructure_PlantSpeciesR_C_PlayHarvestVFX_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, IsPlainOldData)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetPlantEmissivePercent
struct AStructure_PlantSpeciesR_C_SetPlantEmissivePercent_Params
{
	float                                              NewEmissiveVal;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ReceiveBeginPlay
struct AStructure_PlantSpeciesR_C_ReceiveBeginPlay_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetHarvestClassColor
struct AStructure_PlantSpeciesR_C_SetHarvestClassColor_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPUpdatedHealth
struct AStructure_PlantSpeciesR_C_BPUpdatedHealth_Params
{
	bool*                                              bDoReplication;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FindOrCreateDynamicMaterials
struct AStructure_PlantSpeciesR_C_FindOrCreateDynamicMaterials_Params
{
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPAdjustDamage
struct AStructure_PlantSpeciesR_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BlueprintDrawHUD
struct AStructure_PlantSpeciesR_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UserConstructionScript
struct AStructure_PlantSpeciesR_C_UserConstructionScript_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__FinishedFunc
struct AStructure_PlantSpeciesR_C_Timeline_UpdateMatZHeight__FinishedFunc_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__UpdateFunc
struct AStructure_PlantSpeciesR_C_Timeline_UpdateMatZHeight__UpdateFunc_Params
{
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Multi_UpdateHarvestVFX
struct AStructure_PlantSpeciesR_C_Multi_UpdateHarvestVFX_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, IsPlainOldData)
	int                                                AnimIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UpdateMatZHeight
struct AStructure_PlantSpeciesR_C_UpdateMatZHeight_Params
{
	bool                                               Retracted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instant;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ExecuteUbergraph_Structure_PlantSpeciesR
struct AStructure_PlantSpeciesR_C_ExecuteUbergraph_Structure_PlantSpeciesR_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
