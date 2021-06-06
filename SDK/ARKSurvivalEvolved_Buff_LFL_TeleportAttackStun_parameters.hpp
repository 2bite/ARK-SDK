#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFL_TeleportAttackStun_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.BPCustomAllowAddBuff
struct ABuff_LFL_TeleportAttackStun_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.UserConstructionScript
struct ABuff_LFL_TeleportAttackStun_C_UserConstructionScript_Params
{
};

// Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.ExecuteUbergraph_Buff_LFL_TeleportAttackStun
struct ABuff_LFL_TeleportAttackStun_C_ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
