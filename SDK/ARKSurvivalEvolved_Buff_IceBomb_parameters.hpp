#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IceBomb_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_IceBomb.Buff_IceBomb_C.BPCustomAllowAddBuff
struct ABuff_IceBomb_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_IceBomb.Buff_IceBomb_C.BPSetupForInstigator
struct ABuff_IceBomb_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IceBomb.Buff_IceBomb_C.UserConstructionScript
struct ABuff_IceBomb_C_UserConstructionScript_Params
{
};

// Function Buff_IceBomb.Buff_IceBomb_C.ExecuteUbergraph_Buff_IceBomb
struct ABuff_IceBomb_C_ExecuteUbergraph_Buff_IceBomb_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
