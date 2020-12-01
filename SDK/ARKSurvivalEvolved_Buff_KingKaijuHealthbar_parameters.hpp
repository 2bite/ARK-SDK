#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KingKaijuHealthbar_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.BPGetHUDElements
struct ABuff_KingKaijuHealthbar_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.UserConstructionScript
struct ABuff_KingKaijuHealthbar_C_UserConstructionScript_Params
{
};

// Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.Server_Deactivate
struct ABuff_KingKaijuHealthbar_C_Server_Deactivate_Params
{
};

// Function Buff_KingKaijuHealthbar.Buff_KingKaijuHealthbar_C.ExecuteUbergraph_Buff_KingKaijuHealthbar
struct ABuff_KingKaijuHealthbar_C_ExecuteUbergraph_Buff_KingKaijuHealthbar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
