#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MiniHLNA_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.VerifySeasonPassFn
struct ABuff_MiniHLNA_C_VerifySeasonPassFn_Params
{
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.RemoveSkin
struct ABuff_MiniHLNA_C_RemoveSkin_Params
{
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.BPServerHandleNetExecCommand
struct ABuff_MiniHLNA_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.BPClientHandleNetExecCommand
struct ABuff_MiniHLNA_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.Play Random UniqueSound
struct ABuff_MiniHLNA_C_Play_Random_UniqueSound_Params
{
	TArray<class USoundBase*>                          Sounds;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                PrevSoundIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayedIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.OnUnequip
struct ABuff_MiniHLNA_C_OnUnequip_Params
{
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.Get Random UniqueInt
struct ABuff_MiniHLNA_C_Get_Random_UniqueInt_Params
{
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Exclude;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.ReceiveBeginPlay
struct ABuff_MiniHLNA_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.BuffPostAdjustDamage
struct ABuff_MiniHLNA_C_BuffPostAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.UserConstructionScript
struct ABuff_MiniHLNA_C_UserConstructionScript_Params
{
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.MultiPlaySound
struct ABuff_MiniHLNA_C_MultiPlaySound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.VerifySeasonPass
struct ABuff_MiniHLNA_C_VerifySeasonPass_Params
{
};

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.ExecuteUbergraph_Buff_MiniHLNA
struct ABuff_MiniHLNA_C_ExecuteUbergraph_Buff_MiniHLNA_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
