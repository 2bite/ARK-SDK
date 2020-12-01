#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossGorilla_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AEndBossGorilla_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.BPAdjustDamage
struct AEndBossGorilla_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.UserConstructionScript
struct AEndBossGorilla_Character_BP_C_UserConstructionScript_Params
{
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_0__FinishedFunc
struct AEndBossGorilla_Character_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_0__UpdateFunc
struct AEndBossGorilla_Character_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_1__FinishedFunc
struct AEndBossGorilla_Character_BP_C_Timeline_1__FinishedFunc_Params
{
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_1__UpdateFunc
struct AEndBossGorilla_Character_BP_C_Timeline_1__UpdateFunc_Params
{
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.StartRipple
struct AEndBossGorilla_Character_BP_C_StartRipple_Params
{
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.OnDied_Event
struct AEndBossGorilla_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.StartPulse
struct AEndBossGorilla_Character_BP_C_StartPulse_Params
{
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.ReceiveBeginPlay
struct AEndBossGorilla_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.ExecuteUbergraph_EndBossGorilla_Character_BP
struct AEndBossGorilla_Character_BP_C_ExecuteUbergraph_EndBossGorilla_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
