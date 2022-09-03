#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_FirstFlockChar_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPCanCryo
struct ADesertKaiju_FirstFlockChar_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPOnLethalDamage
struct ADesertKaiju_FirstFlockChar_BP_C_BPOnLethalDamage_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.OwnerKaijuCheck
struct ADesertKaiju_FirstFlockChar_BP_C_OwnerKaijuCheck_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPTimerServer
struct ADesertKaiju_FirstFlockChar_BP_C_BPTimerServer_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockGroupMaterial
struct ADesertKaiju_FirstFlockChar_BP_C_GetFlockGroupMaterial_Params
{
	int                                                Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.TickFlockGroup
struct ADesertKaiju_FirstFlockChar_BP_C_TickFlockGroup_Params
{
	int                                                Shape;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Group;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FBoidBehavior                               Behavior;                                                 // (Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                groupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockAvoidanceArea
struct ADesertKaiju_FirstFlockChar_BP_C_GetFlockAvoidanceArea_Params
{
	TArray<struct FAvoidanceArea>                      Return;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DistanceToKaiju
struct ADesertKaiju_FirstFlockChar_BP_C_DistanceToKaiju_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPAdjustDamage
struct ADesertKaiju_FirstFlockChar_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPDinoPostBeginPlay
struct ADesertKaiju_FirstFlockChar_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveTick
struct ADesertKaiju_FirstFlockChar_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BP_OnSetDeath
struct ADesertKaiju_FirstFlockChar_BP_C_BP_OnSetDeath_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BlueprintAdjustOutputDamage
struct ADesertKaiju_FirstFlockChar_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.UserConstructionScript
struct ADesertKaiju_FirstFlockChar_BP_C_UserConstructionScript_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveBeginPlay
struct ADesertKaiju_FirstFlockChar_BP_C_ReceiveBeginPlay_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MulticastUpdateShape
struct ADesertKaiju_FirstFlockChar_BP_C_MulticastUpdateShape_Params
{
	int                                                NewShape;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Multi_UpdateAttackShape
struct ADesertKaiju_FirstFlockChar_BP_C_Multi_UpdateAttackShape_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DelayedTurnBoolOff
struct ADesertKaiju_FirstFlockChar_BP_C_DelayedTurnBoolOff_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiUpdateKaijuOwner
struct ADesertKaiju_FirstFlockChar_BP_C_MultiUpdateKaijuOwner_Params
{
	class AActor*                                      KaijuOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Delayed_DealDamage
struct ADesertKaiju_FirstFlockChar_BP_C_Delayed_DealDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitFromDirection;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm)
	class UClass*                                      DmgTypeClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.CleanupBoids
struct ADesertKaiju_FirstFlockChar_BP_C_CleanupBoids_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiOnLethalDamage
struct ADesertKaiju_FirstFlockChar_BP_C_MultiOnLethalDamage_Params
{
};

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP
struct ADesertKaiju_FirstFlockChar_BP_C_ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
