#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Poop_Dinopithecus_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPOnPreventedFiringDisabledWeapon
struct ABuff_Poop_Dinopithecus_C_BPOnPreventedFiringDisabledWeapon_Params
{
	class AShooterWeapon**                             weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreventingTag;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPPreventTekArmorBuffs
struct ABuff_Poop_Dinopithecus_C_BPPreventTekArmorBuffs_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.UserConstructionScript
struct ABuff_Poop_Dinopithecus_C_UserConstructionScript_Params
{
};

// Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.ExecuteUbergraph_Buff_Poop_Dinopithecus
struct ABuff_Poop_Dinopithecus_C_ExecuteUbergraph_Buff_Poop_Dinopithecus_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
