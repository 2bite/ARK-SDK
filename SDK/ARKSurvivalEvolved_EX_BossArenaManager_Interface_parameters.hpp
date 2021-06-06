#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossArenaManager_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.CallEvent_PlayKaijuSecondPhaseMusic
struct UEX_BossArenaManager_Interface_C_CallEvent_PlayKaijuSecondPhaseMusic_Params
{
	class APrimalDinoCharacter*                        Kaiju;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.Call Event Kaiju Despawned
struct UEX_BossArenaManager_Interface_C_Call_Event_Kaiju_Despawned_Params
{
	class APrimalDinoCharacter*                        Kaiju;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
