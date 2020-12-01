#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndDrone_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPTimerServer
struct AEndDrone_Character_BP_C_BPTimerServer_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.UpdateAccel
struct AEndDrone_Character_BP_C_UpdateAccel_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.Update Turn Anims And Rate
struct AEndDrone_Character_BP_C_Update_Turn_Anims_And_Rate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.Update Visual Roll and Pitch
struct AEndDrone_Character_BP_C_Update_Visual_Roll_and_Pitch_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.UpdateDamageEffect
struct AEndDrone_Character_BP_C_UpdateDamageEffect_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPAdjustDamage
struct AEndDrone_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.UserConstructionScript
struct AEndDrone_Character_BP_C_UserConstructionScript_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.ReceiveBeginPlay
struct AEndDrone_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.OnDied_Event
struct AEndDrone_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.Multi_UpdateDamage
struct AEndDrone_Character_BP_C_Multi_UpdateDamage_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.Multi_DeathUpdateParticles
struct AEndDrone_Character_BP_C_Multi_DeathUpdateParticles_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPTimerNonDedicated
struct AEndDrone_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.DestroySelf
struct AEndDrone_Character_BP_C_DestroySelf_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.ServerUpdateVisuals
struct AEndDrone_Character_BP_C_ServerUpdateVisuals_Params
{
};

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.ExecuteUbergraph_EndDrone_Character_BP
struct AEndDrone_Character_BP_C_ExecuteUbergraph_EndDrone_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
