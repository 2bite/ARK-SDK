#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basilosaurus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BlueprintCanRiderAttack
struct ABasilosaurus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.OverrideRandomWanderLocation
struct ABasilosaurus_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.IsOfFollowTypeClass
struct ABasilosaurus_Character_BP_C_IsOfFollowTypeClass_Params
{
	class APrimalDinoCharacter*                        DinoToCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.GetValidFollowingTargets
struct ABasilosaurus_Character_BP_C_GetValidFollowingTargets_Params
{
	TArray<class APrimalDinoCharacter*>                ValidDinos;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BPFedWakingTameEvent
struct ABasilosaurus_Character_BP_C_BPFedWakingTameEvent_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ReceiveAnyDamage
struct ABasilosaurus_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BPTimerServer
struct ABasilosaurus_Character_BP_C_BPTimerServer_Params
{
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.UserConstructionScript
struct ABasilosaurus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ReceiveBeginPlay
struct ABasilosaurus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.AnimNotify_StopMove
struct ABasilosaurus_Character_BP_C_AnimNotify_StopMove_Params
{
};

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ExecuteUbergraph_Basilosaurus_Character_BP
struct ABasilosaurus_Character_BP_C_ExecuteUbergraph_Basilosaurus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
