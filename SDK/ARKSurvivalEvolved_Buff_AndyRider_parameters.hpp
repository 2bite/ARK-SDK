#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AndyRider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AndyRider.Buff_AndyRider_C.HiddenCharDiedUnexpectedly
struct ABuff_AndyRider_C_HiddenCharDiedUnexpectedly_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AndyRider.Buff_AndyRider_C.BuffTickServer
struct ABuff_AndyRider_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AndyRider.Buff_AndyRider_C.BPDeactivated
struct ABuff_AndyRider_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AndyRider.Buff_AndyRider_C.BPSetupForInstigator
struct ABuff_AndyRider_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AndyRider.Buff_AndyRider_C.BPNotifyPreventDismounting
struct ABuff_AndyRider_C_BPNotifyPreventDismounting_Params
{
	class APrimalDinoCharacter**                       FromDino;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AndyRider.Buff_AndyRider_C.BPAdjustStatusValueModification
struct ABuff_AndyRider_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AndyRider.Buff_AndyRider_C.BuffAdjustDamage
struct ABuff_AndyRider_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AndyRider.Buff_AndyRider_C.BPPreventAddingOtherBuff
struct ABuff_AndyRider_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AndyRider.Buff_AndyRider_C.UserConstructionScript
struct ABuff_AndyRider_C_UserConstructionScript_Params
{
};

// Function Buff_AndyRider.Buff_AndyRider_C.ExecuteUbergraph_Buff_AndyRider
struct ABuff_AndyRider_C_ExecuteUbergraph_Buff_AndyRider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
