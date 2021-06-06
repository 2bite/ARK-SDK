#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState
struct UPrimalPlayerDataBP_C_BPAppliedToPlayerState_Params
{
	class AShooterPlayerState**                        ForPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter
struct UPrimalPlayerDataBP_C_BPApplyToPlayerCharacter_Params
{
	class AShooterPlayerState**                        ForPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          NewPlayerCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.ExecuteUbergraph_PrimalPlayerDataBP
struct UPrimalPlayerDataBP_C_ExecuteUbergraph_PrimalPlayerDataBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
