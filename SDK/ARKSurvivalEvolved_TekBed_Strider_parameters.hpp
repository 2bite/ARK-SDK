#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBed_Strider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekBed_Strider.TekBed_Strider_C.BPReleasedPlayer
struct ATekBed_Strider_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekBed_Strider.TekBed_Strider_C.ReceiveBeginPlay
struct ATekBed_Strider_C_ReceiveBeginPlay_Params
{
};

// Function TekBed_Strider.TekBed_Strider_C.BPAllowSeating
struct ATekBed_Strider_C_BPAllowSeating_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekBed_Strider.TekBed_Strider_C.BPGetMultiUseEntries
struct ATekBed_Strider_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekBed_Strider.TekBed_Strider_C.UserConstructionScript
struct ATekBed_Strider_C_UserConstructionScript_Params
{
};

// Function TekBed_Strider.TekBed_Strider_C.ExecuteUbergraph_TekBed_Strider
struct ATekBed_Strider_C_ExecuteUbergraph_TekBed_Strider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
