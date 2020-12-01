#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moth_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Moth_Character_BP.Moth_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AMoth_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moth_Character_BP.Moth_Character_BP_C.ReceiveAnyDamage
struct AMoth_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moth_Character_BP.Moth_Character_BP_C.UserConstructionScript
struct AMoth_Character_BP_C_UserConstructionScript_Params
{
};

// Function Moth_Character_BP.Moth_Character_BP_C.SpawnSpores
struct AMoth_Character_BP_C_SpawnSpores_Params
{
};

// Function Moth_Character_BP.Moth_Character_BP_C.SporeAttack
struct AMoth_Character_BP_C_SporeAttack_Params
{
};

// Function Moth_Character_BP.Moth_Character_BP_C.ExecuteUbergraph_Moth_Character_BP
struct AMoth_Character_BP_C_ExecuteUbergraph_Moth_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
