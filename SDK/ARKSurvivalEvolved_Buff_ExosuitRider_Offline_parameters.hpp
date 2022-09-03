#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExosuitRider_Offline_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPAdjustStatusValueModification
struct ABuff_ExosuitRider_Offline_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPSetupForInstigator
struct ABuff_ExosuitRider_Offline_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.PreventActorTargeting
struct ABuff_ExosuitRider_Offline_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BuffAdjustDamage
struct ABuff_ExosuitRider_Offline_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.InitBuff
struct ABuff_ExosuitRider_Offline_C_InitBuff_Params
{
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPDeactivated
struct ABuff_ExosuitRider_Offline_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.OnOwningSuitDied
struct ABuff_ExosuitRider_Offline_C_OnOwningSuitDied_Params
{
	class APrimalCharacter*                            DiedChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPInstigatorPossessed
struct ABuff_ExosuitRider_Offline_C_BPInstigatorPossessed_Params
{
	class AController**                                ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.UserConstructionScript
struct ABuff_ExosuitRider_Offline_C_UserConstructionScript_Params
{
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.WaitForClient
struct ABuff_ExosuitRider_Offline_C_WaitForClient_Params
{
};

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.ExecuteUbergraph_Buff_ExosuitRider_Offline
struct ABuff_ExosuitRider_Offline_C_ExecuteUbergraph_Buff_ExosuitRider_Offline_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
