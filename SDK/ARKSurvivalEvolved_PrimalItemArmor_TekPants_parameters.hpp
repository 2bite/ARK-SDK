#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekPants_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.OverrideCrouchingSound
struct UPrimalItemArmor_TekPants_C_OverrideCrouchingSound_Params
{
	class USoundBase**                                 InSound;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsProne;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               soundState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.ExecuteUbergraph_PrimalItemArmor_TekPants
struct UPrimalItemArmor_TekPants_C_ExecuteUbergraph_PrimalItemArmor_TekPants_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
