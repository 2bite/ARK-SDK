#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BasePants_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.OverrideCrouchingSound
struct UPrimalItemArmor_BasePants_C_OverrideCrouchingSound_Params
{
	class USoundBase**                                 InSound;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsProne;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               soundState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.ExecuteUbergraph_PrimalItemArmor_BasePants
struct UPrimalItemArmor_BasePants_C_ExecuteUbergraph_PrimalItemArmor_BasePants_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
