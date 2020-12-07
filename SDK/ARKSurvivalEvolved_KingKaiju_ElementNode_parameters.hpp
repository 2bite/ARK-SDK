#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_ElementNode_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.IsKaiju
struct AKingKaiju_ElementNode_C_IsKaiju_Params
{
	class UObject*                                     TestObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsKaiju;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.BPAdjustDamage
struct AKingKaiju_ElementNode_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.RunLandSequence
struct AKingKaiju_ElementNode_C_RunLandSequence_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.EjectElementBasedOnHealth
struct AKingKaiju_ElementNode_C_EjectElementBasedOnHealth_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.BuffCorruptDinos
struct AKingKaiju_ElementNode_C_BuffCorruptDinos_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.CheatEndHordeMode
struct AKingKaiju_ElementNode_C_CheatEndHordeMode_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.OpenCrate
struct AKingKaiju_ElementNode_C_OpenCrate_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.InitializeBehaviorTreeVars
struct AKingKaiju_ElementNode_C_InitializeBehaviorTreeVars_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.FindSpawnLocation
struct AKingKaiju_ElementNode_C_FindSpawnLocation_Params
{
	bool                                               FoundLoc;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Initiate Horde Mode
struct AKingKaiju_ElementNode_C_Initiate_Horde_Mode_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.OnRep_bHasLanded
struct AKingKaiju_ElementNode_C_OnRep_bHasLanded_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.PrepareNPCForRouting
struct AKingKaiju_ElementNode_C_PrepareNPCForRouting_Params
{
	class APrimalDinoCharacter**                       APrimalDino;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsSpawned;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpawnPointStruct*                          LocationNode;                                             // (Parm)
	class AHorde_Spline_Path_C**                       WorldSpline;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.UserConstructionScript
struct AKingKaiju_ElementNode_C_UserConstructionScript_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ReceiveBeginPlay
struct AKingKaiju_ElementNode_C_ReceiveBeginPlay_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ReceiveDestroyed
struct AKingKaiju_ElementNode_C_ReceiveDestroyed_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.SpawnWave
struct AKingKaiju_ElementNode_C_SpawnWave_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Multi_PlaySpawnDinoFX
struct AKingKaiju_ElementNode_C_Multi_PlaySpawnDinoFX_Params
{
	class UParticleSystem*                             FX;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.DelayedDestroyNode
struct AKingKaiju_ElementNode_C_DelayedDestroyNode_Params
{
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.Multi_ToggleFXStunDraw
struct AKingKaiju_ElementNode_C_Multi_ToggleFXStunDraw_Params
{
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.SetVar_KKCharacter
struct AKingKaiju_ElementNode_C_SetVar_KKCharacter_Params
{
	class AActor*                                      KKChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_ElementNode.KingKaiju_ElementNode_C.ExecuteUbergraph_KingKaiju_ElementNode
struct AKingKaiju_ElementNode_C_ExecuteUbergraph_KingKaiju_ElementNode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
