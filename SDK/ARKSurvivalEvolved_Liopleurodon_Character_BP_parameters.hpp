#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Liopleurodon_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPCanCryo
struct ALiopleurodon_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPTimerServer
struct ALiopleurodon_Character_BP_C_BPTimerServer_Params
{
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BlueprintDrawFloatingHUD
struct ALiopleurodon_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.Find Remaining Tame Time
struct ALiopleurodon_Character_BP_C_Find_Remaining_Tame_Time_Params
{
	float                                              TimeLeft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPSetupTamed
struct ALiopleurodon_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPNotifyClearRider
struct ALiopleurodon_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPNotifySetRider
struct ALiopleurodon_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.UserConstructionScript
struct ALiopleurodon_Character_BP_C_UserConstructionScript_Params
{
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.DisappearTimeline__FinishedFunc
struct ALiopleurodon_Character_BP_C_DisappearTimeline__FinishedFunc_Params
{
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.DisappearTimeline__UpdateFunc
struct ALiopleurodon_Character_BP_C_DisappearTimeline__UpdateFunc_Params
{
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.StartDisappear
struct ALiopleurodon_Character_BP_C_StartDisappear_Params
{
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ReceiveAnyDamage
struct ALiopleurodon_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.AnimNotify_SpawnSpinEffect
struct ALiopleurodon_Character_BP_C_AnimNotify_SpawnSpinEffect_Params
{
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.RefreshMagicBuffTimers
struct ALiopleurodon_Character_BP_C_RefreshMagicBuffTimers_Params
{
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ReceiveBeginPlay
struct ALiopleurodon_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.OnDied_ClearParticles
struct ALiopleurodon_Character_BP_C_OnDied_ClearParticles_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ExecuteUbergraph_Liopleurodon_Character_BP
struct ALiopleurodon_Character_BP_C_ExecuteUbergraph_Liopleurodon_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
