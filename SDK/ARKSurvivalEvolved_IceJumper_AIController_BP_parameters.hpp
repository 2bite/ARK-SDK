#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumper_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetBabyFleeLocation
struct AIceJumper_AIController_BP_C_GetBabyFleeLocation_Params
{
	struct FVector                                     Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsStuckInAir
struct AIceJumper_AIController_BP_C_IsStuckInAir_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPUpdateBestTarget
struct AIceJumper_AIController_BP_C_BPUpdateBestTarget_Params
{
	class AActor**                                     bestTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              dontSetIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dontSetOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.DoLOS
struct AIceJumper_AIController_BP_C_DoLOS_Params
{
	struct FVector                                     ViewLocationOffset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RetVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Update LOSChecks
struct AIceJumper_AIController_BP_C_Update_LOSChecks_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Percent Stamina
struct AIceJumper_AIController_BP_C_Get_Percent_Stamina_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsFallingToGroundBelowTarget
struct AIceJumper_AIController_BP_C_IsFallingToGroundBelowTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPGetTargetingDesire
struct AIceJumper_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetPrimalTarget
struct AIceJumper_AIController_BP_C_GetPrimalTarget_Params
{
	class APrimalCharacter*                            Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is PreventingFrozen
struct AIceJumper_AIController_BP_C_Target_Is_PreventingFrozen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is Freezing
struct AIceJumper_AIController_BP_C_Target_Is_Freezing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Is LowStamina
struct AIceJumper_AIController_BP_C_Is_LowStamina_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnTakeDamage
struct AIceJumper_AIController_BP_C_OnTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TookLotsOfDamage
struct AIceJumper_AIController_BP_C_TookLotsOfDamage_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TargetIsFrozen
struct AIceJumper_AIController_BP_C_TargetIsFrozen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetMeleeWeight
struct AIceJumper_AIController_BP_C_GetMeleeWeight_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateMelee
struct AIceJumper_AIController_BP_C_UpdateMelee_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.melee
struct AIceJumper_AIController_BP_C_melee_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateIceBreath
struct AIceJumper_AIController_BP_C_UpdateIceBreath_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnMovementModeChanged
struct AIceJumper_AIController_BP_C_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         newMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnAbilityChanged
struct AIceJumper_AIController_BP_C_OnAbilityChanged_Params
{
	TEnumAsByte<EIceJumperAbilities_Enum>              NewAbility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIceJumperAbilities_Enum>              PrevAbility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIceJumperShortDashTypes_Enum>         SecondaryAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Trigger RandomWeighted Ability
struct AIceJumper_AIController_BP_C_Trigger_RandomWeighted_Ability_Params
{
	TEnumAsByte<EIceJumperAbilities_Enum>              TriggeredAbility;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIceJumperShortDashTypes_Enum>         SecondaryAbility;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get ShortForward Dash Weight
struct AIceJumper_AIController_BP_C_Get_ShortForward_Dash_Weight_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetSide DashWeight
struct AIceJumper_AIController_BP_C_GetSide_DashWeight_Params
{
	bool                                               Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get JumpWeight
struct AIceJumper_AIController_BP_C_Get_JumpWeight_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsTarget Tamed or Survivor
struct AIceJumper_AIController_BP_C_IsTarget_Tamed_or_Survivor_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Forward DashWeight
struct AIceJumper_AIController_BP_C_Get_Forward_DashWeight_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsInAir
struct AIceJumper_AIController_BP_C_IsInAir_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Ice BreathWeight
struct AIceJumper_AIController_BP_C_Get_Ice_BreathWeight_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceBreath
struct AIceJumper_AIController_BP_C_IceBreath_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ForwardDash
struct AIceJumper_AIController_BP_C_ForwardDash_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceJumper
struct AIceJumper_AIController_BP_C_IceJumper_Params
{
	class AIceJumper_Character_BP_C*                   Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.SideDash
struct AIceJumper_AIController_BP_C_SideDash_Params
{
	TEnumAsByte<EIceJumperShortDashTypes_Enum>         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveBeginPlay
struct AIceJumper_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Jump
struct AIceJumper_AIController_BP_C_Jump_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ChangedAITarget
struct AIceJumper_AIController_BP_C_ChangedAITarget_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveTick
struct AIceJumper_AIController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UserConstructionScript
struct AIceJumper_AIController_BP_C_UserConstructionScript_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TryNextAbility
struct AIceJumper_AIController_BP_C_TryNextAbility_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TickStaminaRegen
struct AIceJumper_AIController_BP_C_TickStaminaRegen_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ResetDamageCounter
struct AIceJumper_AIController_BP_C_ResetDamageCounter_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.FindImprintPlayer
struct AIceJumper_AIController_BP_C_FindImprintPlayer_Params
{
};

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ExecuteUbergraph_IceJumper_AIController_BP
struct AIceJumper_AIController_BP_C_ExecuteUbergraph_IceJumper_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
