#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoaFrill_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Get Scaled Affinity Based on Dino
struct ABoaFrill_Character_BP_C_Get_Scaled_Affinity_Based_on_Dino_Params
{
	float                                              InputAffinity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPAdjustDamage
struct ABoaFrill_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.TameIfAllowed
struct ABoaFrill_Character_BP_C_TameIfAllowed_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ResetEggSeeking
struct ABoaFrill_Character_BP_C_ResetEggSeeking_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.IncreaseTamingAffinity
struct ABoaFrill_Character_BP_C_IncreaseTamingAffinity_Params
{
	class AShooterCharacter*                           TamingPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueForTaming;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Update Taming
struct ABoaFrill_Character_BP_C_Update_Taming_Params
{
	float                                              ValueForTaming;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            DroppedByShooterChar;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPSetupTamed
struct ABoaFrill_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UserConstructionScript
struct ABoaFrill_Character_BP_C_UserConstructionScript_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__FinishedFunc
struct ABoaFrill_Character_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__UpdateFunc
struct ABoaFrill_Character_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPTimerServer
struct ABoaFrill_Character_BP_C_BPTimerServer_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.DissolveEggItem
struct ABoaFrill_Character_BP_C_DissolveEggItem_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.EatEgg
struct ABoaFrill_Character_BP_C_EatEgg_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UpdateSeekEgg
struct ABoaFrill_Character_BP_C_UpdateSeekEgg_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.RestartBrain
struct ABoaFrill_Character_BP_C_RestartBrain_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartEggMoving
struct ABoaFrill_Character_BP_C_StartEggMoving_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartUpdateEggSeekTimer
struct ABoaFrill_Character_BP_C_StartUpdateEggSeekTimer_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.MoveToEgg
struct ABoaFrill_Character_BP_C_MoveToEgg_Params
{
};

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ExecuteUbergraph_BoaFrill_Character_BP
struct ABoaFrill_Character_BP_C_ExecuteUbergraph_BoaFrill_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
