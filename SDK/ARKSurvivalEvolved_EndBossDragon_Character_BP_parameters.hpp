#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossDragon_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.BPAdjustDamage
struct AEndBossDragon_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.UserConstructionScript
struct AEndBossDragon_Character_BP_C_UserConstructionScript_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_0__FinishedFunc
struct AEndBossDragon_Character_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_0__UpdateFunc
struct AEndBossDragon_Character_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_2__FinishedFunc
struct AEndBossDragon_Character_BP_C_Timeline_2__FinishedFunc_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.Timeline_2__UpdateFunc
struct AEndBossDragon_Character_BP_C_Timeline_2__UpdateFunc_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.StartRipple
struct AEndBossDragon_Character_BP_C_StartRipple_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ReceiveBeginPlay
struct AEndBossDragon_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.OnDied_Event
struct AEndBossDragon_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.StartPulse
struct AEndBossDragon_Character_BP_C_StartPulse_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ReceiveTick
struct AEndBossDragon_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.AnimNotify_FireBreath
struct AEndBossDragon_Character_BP_C_AnimNotify_FireBreath_Params
{
};

// Function EndBossDragon_Character_BP.EndBossDragon_Character_BP_C.ExecuteUbergraph_EndBossDragon_Character_BP
struct AEndBossDragon_Character_BP_C_ExecuteUbergraph_EndBossDragon_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
