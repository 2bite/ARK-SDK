#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataBP_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPCreatedNewPlayerData
struct UPrimalPlayerDataBP_Base_C_BPCreatedNewPlayerData_Params
{
};

// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss
struct UPrimalPlayerDataBP_Base_C_DefeatedBoss_Params
{
	class APrimalDinoCharacter*                        BossChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DifficultyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TagOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.ExecuteUbergraph_PrimalPlayerDataBP_Base
struct UPrimalPlayerDataBP_Base_C_ExecuteUbergraph_PrimalPlayerDataBP_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
