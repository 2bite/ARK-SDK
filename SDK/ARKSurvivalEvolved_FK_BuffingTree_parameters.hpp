#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FK_BuffingTree_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FK_BuffingTree.FK_BuffingTree_C.ReceiveDestroyed
struct AFK_BuffingTree_C_ReceiveDestroyed_Params
{
};

// Function FK_BuffingTree.FK_BuffingTree_C.GetScale
struct AFK_BuffingTree_C_GetScale_Params
{
	struct FVector                                     Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FK_BuffingTree.FK_BuffingTree_C.BPAdjustDamage
struct AFK_BuffingTree_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FK_BuffingTree.FK_BuffingTree_C.UserConstructionScript
struct AFK_BuffingTree_C_UserConstructionScript_Params
{
};

// Function FK_BuffingTree.FK_BuffingTree_C.ReceiveBeginPlay
struct AFK_BuffingTree_C_ReceiveBeginPlay_Params
{
};

// Function FK_BuffingTree.FK_BuffingTree_C.TickGrowth
struct AFK_BuffingTree_C_TickGrowth_Params
{
};

// Function FK_BuffingTree.FK_BuffingTree_C.Multi_SetScale
struct AFK_BuffingTree_C_Multi_SetScale_Params
{
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FK_BuffingTree.FK_BuffingTree_C.ExecuteUbergraph_FK_BuffingTree
struct AFK_BuffingTree_C_ExecuteUbergraph_FK_BuffingTree_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
