#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FK_PoisonTree_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FK_PoisonTree.FK_PoisonTree_C.ReceiveDestroyed
struct AFK_PoisonTree_C_ReceiveDestroyed_Params
{
};

// Function FK_PoisonTree.FK_PoisonTree_C.GetScale
struct AFK_PoisonTree_C_GetScale_Params
{
	struct FVector                                     Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FK_PoisonTree.FK_PoisonTree_C.BPAdjustDamage
struct AFK_PoisonTree_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FK_PoisonTree.FK_PoisonTree_C.UserConstructionScript
struct AFK_PoisonTree_C_UserConstructionScript_Params
{
};

// Function FK_PoisonTree.FK_PoisonTree_C.ReceiveBeginPlay
struct AFK_PoisonTree_C_ReceiveBeginPlay_Params
{
};

// Function FK_PoisonTree.FK_PoisonTree_C.TickGrowth
struct AFK_PoisonTree_C_TickGrowth_Params
{
};

// Function FK_PoisonTree.FK_PoisonTree_C.BndEvt__HitCapsule_K2Node_ComponentBoundEvent_354_ComponentHitSignature__DelegateSignature
struct AFK_PoisonTree_C_BndEvt__HitCapsule_K2Node_ComponentBoundEvent_354_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function FK_PoisonTree.FK_PoisonTree_C.DestroyTree
struct AFK_PoisonTree_C_DestroyTree_Params
{
};

// Function FK_PoisonTree.FK_PoisonTree_C.ExecuteUbergraph_FK_PoisonTree
struct AFK_PoisonTree_C_ExecuteUbergraph_FK_PoisonTree_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
