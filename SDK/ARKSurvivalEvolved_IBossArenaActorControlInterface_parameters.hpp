#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IBossArenaActorControlInterface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IBossArenaActorControlInterface.IBossArenaActorControlInterface_C.ArenaShouldPreserveAtClose
struct UIBossArenaActorControlInterface_C_ArenaShouldPreserveAtClose_Params
{
	class ABossArenaManager_C*                         ArenaManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldPreserve;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
