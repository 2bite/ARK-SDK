#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Eel_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Eel_Character_BP.Eel_Character_BP_C.BPUnstasis
struct AEel_Character_BP_C_BPUnstasis_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.BPSetupTamed
struct AEel_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Eel_Character_BP.Eel_Character_BP_C.UpdateEmissive
struct AEel_Character_BP_C_UpdateEmissive_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.OnRep_CanLightningAttack
struct AEel_Character_BP_C_OnRep_CanLightningAttack_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.BlueprintCanAttack
struct AEel_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Eel_Character_BP.Eel_Character_BP_C.CheckNearbyAndUpdateBeams
struct AEel_Character_BP_C_CheckNearbyAndUpdateBeams_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.UpdateChainBeamEnds
struct AEel_Character_BP_C_UpdateChainBeamEnds_Params
{
	TArray<class AActor*>                              NearbyTeamEels;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Eel_Character_BP.Eel_Character_BP_C.BPTimerNonDedicated
struct AEel_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.BPDoAttack
struct AEel_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Eel_Character_BP.Eel_Character_BP_C.UserConstructionScript
struct AEel_Character_BP_C_UserConstructionScript_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.ClearParticles
struct AEel_Character_BP_C_ClearParticles_Params
{
	float                                              DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Eel_Character_BP.Eel_Character_BP_C.StartParticles
struct AEel_Character_BP_C_StartParticles_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.SetCanLightningAttackAfterDelay
struct AEel_Character_BP_C_SetCanLightningAttackAfterDelay_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.AnimNotify_ShockAOEParticle
struct AEel_Character_BP_C_AnimNotify_ShockAOEParticle_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.ReceiveBeginPlay
struct AEel_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Eel_Character_BP.Eel_Character_BP_C.UnsetFX
struct AEel_Character_BP_C_UnsetFX_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Eel_Character_BP.Eel_Character_BP_C.ExecuteUbergraph_Eel_Character_BP
struct AEel_Character_BP_C_ExecuteUbergraph_Eel_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
