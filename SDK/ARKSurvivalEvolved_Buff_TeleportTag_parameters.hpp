#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TeleportTag_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TeleportTag.Buff_TeleportTag_C.BPCustomAllowAddBuff
struct ABuff_TeleportTag_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TeleportTag.Buff_TeleportTag_C.BPSetupForInstigator
struct ABuff_TeleportTag_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TeleportTag.Buff_TeleportTag_C.UserConstructionScript
struct ABuff_TeleportTag_C_UserConstructionScript_Params
{
};

// Function Buff_TeleportTag.Buff_TeleportTag_C.ExecuteUbergraph_Buff_TeleportTag
struct ABuff_TeleportTag_C_ExecuteUbergraph_Buff_TeleportTag_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
