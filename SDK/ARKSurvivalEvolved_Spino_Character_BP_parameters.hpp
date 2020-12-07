#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spino_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spino_Character_BP.Spino_Character_BP_C.BlueprintCanAttack
struct ASpino_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.BPDoAttack
struct ASpino_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.CanSwitchStances
struct ASpino_Character_BP_C_CanSwitchStances_Params
{
	bool                                               isBiped;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSwitch;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.BlueprintCanRiderAttack
struct ASpino_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.GetStanceSwitchAnim
struct ASpino_Character_BP_C_GetStanceSwitchAnim_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.SS_SetCurrentStance
struct ASpino_Character_BP_C_SS_SetCurrentStance_Params
{
	bool                                               isBiped;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCooldown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.ToggleStance
struct ASpino_Character_BP_C_ToggleStance_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.BPTimerServer
struct ASpino_Character_BP_C_BPTimerServer_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.PreInit_SwitchStance
struct ASpino_Character_BP_C_PreInit_SwitchStance_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.K2_OnMovementModeChanged
struct ASpino_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.GetDefaultDino
struct ASpino_Character_BP_C_GetDefaultDino_Params
{
	class ASpino_Character_BP_C*                       Dino;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.UpdateMoveSpeed
struct ASpino_Character_BP_C_UpdateMoveSpeed_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.UpdateStance
struct ASpino_Character_BP_C_UpdateStance_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.OnRep_bIsBiped
struct ASpino_Character_BP_C_OnRep_bIsBiped_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.CS_Set Biped State
struct ASpino_Character_BP_C_CS_Set_Biped_State_Params
{
	bool                                               isBiped;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.UserConstructionScript
struct ASpino_Character_BP_C_UserConstructionScript_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.SS_RequestStanceSwitch
struct ASpino_Character_BP_C_SS_RequestStanceSwitch_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.StanceSwitch_Delay
struct ASpino_Character_BP_C_StanceSwitch_Delay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.ReceiveActorBeginOverlap
struct ASpino_Character_BP_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.ReceiveActorEndOverlap
struct ASpino_Character_BP_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.Multi_UpdateBuffTime
struct ASpino_Character_BP_C_Multi_UpdateBuffTime_Params
{
	bool                                               bIsActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spino_Character_BP.Spino_Character_BP_C.AdditiveRoar
struct ASpino_Character_BP_C_AdditiveRoar_Params
{
};

// Function Spino_Character_BP.Spino_Character_BP_C.ExecuteUbergraph_Spino_Character_BP
struct ASpino_Character_BP_C_ExecuteUbergraph_Spino_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
