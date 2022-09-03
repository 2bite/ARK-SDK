#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekBed.TekBed_C.BPReleasedPlayer
struct ATekBed_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekBed.TekBed_C.BPAllowSeating
struct ATekBed_C_BPAllowSeating_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekBed.TekBed_C.BPSeatedPlayer
struct ATekBed_C_BPSeatedPlayer_Params
{
	class AShooterCharacter**                          SeatedChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekBed.TekBed_C.UserConstructionScript
struct ATekBed_C_UserConstructionScript_Params
{
};

// Function TekBed.TekBed_C.ExecuteUbergraph_TekBed
struct ATekBed_C_ExecuteUbergraph_TekBed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
