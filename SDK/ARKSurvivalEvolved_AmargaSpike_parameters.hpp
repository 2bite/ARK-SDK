#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AmargaSpike.AmargaSpike_C.BPOnDemolish
struct AAmargaSpike_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDebuff
struct AAmargaSpike_C_CheckApplySpikeDebuff_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDamage
struct AAmargaSpike_C_CheckApplySpikeDamage_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmargaSpike.AmargaSpike_C.UpdateSpikeRelLoc
struct AAmargaSpike_C_UpdateSpikeRelLoc_Params
{
};

// Function AmargaSpike.AmargaSpike_C.BPUpdatedHealth
struct AAmargaSpike_C_BPUpdatedHealth_Params
{
	bool*                                              bDoReplication;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmargaSpike.AmargaSpike_C.InitSpike
struct AAmargaSpike_C_InitSpike_Params
{
};

// Function AmargaSpike.AmargaSpike_C.RefreshTeamColorVisuals
struct AAmargaSpike_C_RefreshTeamColorVisuals_Params
{
};

// Function AmargaSpike.AmargaSpike_C.UserConstructionScript
struct AAmargaSpike_C_UserConstructionScript_Params
{
};

// Function AmargaSpike.AmargaSpike_C.SpikeTick
struct AAmargaSpike_C_SpikeTick_Params
{
};

// Function AmargaSpike.AmargaSpike_C.ReceiveBeginPlay
struct AAmargaSpike_C_ReceiveBeginPlay_Params
{
};

// Function AmargaSpike.AmargaSpike_C.BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature
struct AAmargaSpike_C_BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature
struct AAmargaSpike_C_BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature
struct AAmargaSpike_C_BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmargaSpike.AmargaSpike_C.BindOnSpawnedOnStructureDestroyed
struct AAmargaSpike_C_BindOnSpawnedOnStructureDestroyed_Params
{
};

// Function AmargaSpike.AmargaSpike_C.OnSpawnedOnStructureDestroyed
struct AAmargaSpike_C_OnSpawnedOnStructureDestroyed_Params
{
};

// Function AmargaSpike.AmargaSpike_C.ExecuteUbergraph_AmargaSpike
struct AAmargaSpike_C_ExecuteUbergraph_AmargaSpike_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
