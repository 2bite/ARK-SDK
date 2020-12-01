#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Frozen_IceKaiju_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPCheckPreventInput
struct ABuff_Frozen_IceKaiju_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPCustomAllowAddBuff
struct ABuff_Frozen_IceKaiju_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPSetupForInstigator
struct ABuff_Frozen_IceKaiju_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventflight
struct ABuff_Frozen_IceKaiju_C_BPPreventflight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPHandleOnStartFire
struct ABuff_Frozen_IceKaiju_C_BPHandleOnStartFire_Params
{
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffAdjustDamage
struct ABuff_Frozen_IceKaiju_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.NotifyDamage
struct ABuff_Frozen_IceKaiju_C_NotifyDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TheDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffPostAdjustDamage
struct ABuff_Frozen_IceKaiju_C_BuffPostAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceivePointDamage
struct ABuff_Frozen_IceKaiju_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffTickClient
struct ABuff_Frozen_IceKaiju_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffTickServer
struct ABuff_Frozen_IceKaiju_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.FreezeCharacter
struct ABuff_Frozen_IceKaiju_C_FreezeCharacter_Params
{
	class APrimalCharacter*                            InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Freeze;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventCharacterStatusValueModifiers
struct ABuff_Frozen_IceKaiju_C_BPPreventCharacterStatusValueModifiers_Params
{
	class APrimalCharacter**                           ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceiveAnyDamage
struct ABuff_Frozen_IceKaiju_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventAddingOtherBuff
struct ABuff_Frozen_IceKaiju_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPDeactivated
struct ABuff_Frozen_IceKaiju_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPActivated
struct ABuff_Frozen_IceKaiju_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.AddFrozenTime
struct ABuff_Frozen_IceKaiju_C_AddFrozenTime_Params
{
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.UserConstructionScript
struct ABuff_Frozen_IceKaiju_C_UserConstructionScript_Params
{
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.UpdateFrozenMIC
struct ABuff_Frozen_IceKaiju_C_UpdateFrozenMIC_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.FreezeChar
struct ABuff_Frozen_IceKaiju_C_FreezeChar_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Freeze;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceiveBeginPlay
struct ABuff_Frozen_IceKaiju_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.Server_HandleOnStartFire
struct ABuff_Frozen_IceKaiju_C_Server_HandleOnStartFire_Params
{
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.Multi_PlayIceBreakVFX
struct ABuff_Frozen_IceKaiju_C_Multi_PlayIceBreakVFX_Params
{
};

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ExecuteUbergraph_Buff_Frozen_IceKaiju
struct ABuff_Frozen_IceKaiju_C_ExecuteUbergraph_Buff_Frozen_IceKaiju_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
