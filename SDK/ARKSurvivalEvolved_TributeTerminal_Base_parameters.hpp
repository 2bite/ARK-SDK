#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TributeTerminal_Base.TributeTerminal_Base_C.BPOnDemolish
struct ATributeTerminal_Base_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TributeTerminal_Base.TributeTerminal_Base_C.BPPostLoadedFromSaveGame
struct ATributeTerminal_Base_C_BPPostLoadedFromSaveGame_Params
{
};

// Function TributeTerminal_Base.TributeTerminal_Base_C.UserConstructionScript
struct ATributeTerminal_Base_C_UserConstructionScript_Params
{
};

// Function TributeTerminal_Base.TributeTerminal_Base_C.ExecuteUbergraph_TributeTerminal_Base
struct ATributeTerminal_Base_C_ExecuteUbergraph_TributeTerminal_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
