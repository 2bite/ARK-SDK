#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OnFire_Amarga_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.BPCustomAllowAddBuff
struct ABuff_OnFire_Amarga_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.ReceiveTick
struct ABuff_OnFire_Amarga_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.BPPreventAddingOtherBuff
struct ABuff_OnFire_Amarga_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.UserConstructionScript
struct ABuff_OnFire_Amarga_C_UserConstructionScript_Params
{
};

// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.ExecuteUbergraph_Buff_OnFire_Amarga
struct ABuff_OnFire_Amarga_C_ExecuteUbergraph_Buff_OnFire_Amarga_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
