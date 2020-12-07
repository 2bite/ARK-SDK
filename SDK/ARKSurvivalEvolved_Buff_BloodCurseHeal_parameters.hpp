#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BloodCurseHeal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.CheckDeactivation
struct ABuff_BloodCurseHeal_C_CheckDeactivation_Params
{
};

// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.RecoverHealth
struct ABuff_BloodCurseHeal_C_RecoverHealth_Params
{
	float                                              DamageCaused;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UpdateVictims
struct ABuff_BloodCurseHeal_C_UpdateVictims_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UserConstructionScript
struct ABuff_BloodCurseHeal_C_UserConstructionScript_Params
{
};

// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.ExecuteUbergraph_Buff_BloodCurseHeal
struct ABuff_BloodCurseHeal_C_ExecuteUbergraph_Buff_BloodCurseHeal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
