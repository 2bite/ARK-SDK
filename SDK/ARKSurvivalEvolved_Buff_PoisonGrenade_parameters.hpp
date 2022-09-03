#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonGrenade_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPPreSetupForInstigator
struct ABuff_PoisonGrenade_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPDeactivated
struct ABuff_PoisonGrenade_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPCustomAllowAddBuff
struct ABuff_PoisonGrenade_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.UserConstructionScript
struct ABuff_PoisonGrenade_C_UserConstructionScript_Params
{
};

// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.ExecuteUbergraph_Buff_PoisonGrenade
struct ABuff_PoisonGrenade_C_ExecuteUbergraph_Buff_PoisonGrenade_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
