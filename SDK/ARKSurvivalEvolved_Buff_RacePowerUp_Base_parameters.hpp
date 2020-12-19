#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RacePowerUp_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.InitRacePowerUp
struct ABuff_RacePowerUp_Base_C_InitRacePowerUp_Params
{
	class AMissionType_Race_C*                         FromRaceMission;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.UserConstructionScript
struct ABuff_RacePowerUp_Base_C_UserConstructionScript_Params
{
};

// Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.ExecuteUbergraph_Buff_RacePowerUp_Base
struct ABuff_RacePowerUp_Base_C_ExecuteUbergraph_Buff_RacePowerUp_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
