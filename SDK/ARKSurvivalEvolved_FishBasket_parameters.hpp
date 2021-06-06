#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishBasket_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FishBasket.FishBasket_C.ReceiveBeginPlay
struct AFishBasket_C_ReceiveBeginPlay_Params
{
};

// Function FishBasket.FishBasket_C.TrapFish
struct AFishBasket_C_TrapFish_Params
{
	class APrimalDinoCharacter*                        TrapFish;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FishBasket.FishBasket_C.BPTryMultiUse
struct AFishBasket_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FishBasket.FishBasket_C.BPGetMultiUseEntries
struct AFishBasket_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FishBasket.FishBasket_C.UserConstructionScript
struct AFishBasket_C_UserConstructionScript_Params
{
};

// Function FishBasket.FishBasket_C.NetCapturedCreature
struct AFishBasket_C_NetCapturedCreature_Params
{
};

// Function FishBasket.FishBasket_C.ExecuteUbergraph_FishBasket
struct AFishBasket_C_ExecuteUbergraph_FishBasket_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
