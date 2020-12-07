#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_C4Charge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function C4Charge.C4Charge_C.BPPreventPlacementOnPawn
struct AC4Charge_C_BPPreventPlacementOnPawn_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ForBone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function C4Charge.C4Charge_C.UserConstructionScript
struct AC4Charge_C_UserConstructionScript_Params
{
};

// Function C4Charge.C4Charge_C.ExecuteUbergraph_C4Charge
struct AC4Charge_C_ExecuteUbergraph_C4Charge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
