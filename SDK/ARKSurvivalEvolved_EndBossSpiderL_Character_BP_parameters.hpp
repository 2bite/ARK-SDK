#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossSpiderL_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.BPAdjustDamage
struct AEndBossSpiderL_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.UserConstructionScript
struct AEndBossSpiderL_Character_BP_C_UserConstructionScript_Params
{
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_1__FinishedFunc
struct AEndBossSpiderL_Character_BP_C_Timeline_1__FinishedFunc_Params
{
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_1__UpdateFunc
struct AEndBossSpiderL_Character_BP_C_Timeline_1__UpdateFunc_Params
{
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_2__FinishedFunc
struct AEndBossSpiderL_Character_BP_C_Timeline_2__FinishedFunc_Params
{
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.Timeline_2__UpdateFunc
struct AEndBossSpiderL_Character_BP_C_Timeline_2__UpdateFunc_Params
{
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.StartRipple
struct AEndBossSpiderL_Character_BP_C_StartRipple_Params
{
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.OnDied_Event
struct AEndBossSpiderL_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.StartPulse
struct AEndBossSpiderL_Character_BP_C_StartPulse_Params
{
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.ReceiveBeginPlay
struct AEndBossSpiderL_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function EndBossSpiderL_Character_BP.EndBossSpiderL_Character_BP_C.ExecuteUbergraph_EndBossSpiderL_Character_BP
struct AEndBossSpiderL_Character_BP_C_ExecuteUbergraph_EndBossSpiderL_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
