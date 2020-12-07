#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExitedMekShield_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.BuffTickClient
struct ABuff_ExitedMekShield_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.GetOwnerMek
struct ABuff_ExitedMekShield_C_GetOwnerMek_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFriendly;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AMek_Character_BP_C*                         Mek;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.IsOwnerMek
struct ABuff_ExitedMekShield_C_IsOwnerMek_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.UserConstructionScript
struct ABuff_ExitedMekShield_C_UserConstructionScript_Params
{
};

// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.ExecuteUbergraph_Buff_ExitedMekShield
struct ABuff_ExitedMekShield_C_ExecuteUbergraph_Buff_ExitedMekShield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
