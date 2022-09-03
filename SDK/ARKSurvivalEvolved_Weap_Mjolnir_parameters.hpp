#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_Mjolnir_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanEquip
struct AWeap_Mjolnir_C_BPCanEquip_Params
{
	class AShooterCharacter**                          ByCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleSound
struct AWeap_Mjolnir_C_PlayRandomIdleSound_Params
{
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.CheckPlayIdleAudio
struct AWeap_Mjolnir_C_CheckPlayIdleAudio_Params
{
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.OnRep_bIsCharged
struct AWeap_Mjolnir_C_OnRep_bIsCharged_Params
{
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.ReceiveTick
struct AWeap_Mjolnir_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.BPSpawnMeleeEffects
struct AWeap_Mjolnir_C_BPSpawnMeleeEffects_Params
{
	struct FVector*                                    Impact;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShootDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanMeleeAttack
struct AWeap_Mjolnir_C_BPCanMeleeAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.UserConstructionScript
struct AWeap_Mjolnir_C_UserConstructionScript_Params
{
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleAudio
struct AWeap_Mjolnir_C_PlayRandomIdleAudio_Params
{
};

// Function Weap_Mjolnir.Weap_Mjolnir_C.ExecuteUbergraph_Weap_Mjolnir
struct AWeap_Mjolnir_C_ExecuteUbergraph_Weap_Mjolnir_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
