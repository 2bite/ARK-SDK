#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_Boss_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BPGetHealthBarColor
struct ADragon_Character_BP_Boss_C_BPGetHealthBarColor_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BPSentKilledNotification
struct ADragon_Character_BP_Boss_C_BPSentKilledNotification_Params
{
	class AShooterPlayerController**                   ToPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.Force to WanderOnLand
struct ADragon_Character_BP_Boss_C_Force_to_WanderOnLand_Params
{
};

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ForceToFlying
struct ADragon_Character_BP_Boss_C_ForceToFlying_Params
{
};

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BlueprintOverrideWantsToRun
struct ADragon_Character_BP_Boss_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.UserConstructionScript
struct ADragon_Character_BP_Boss_C_UserConstructionScript_Params
{
};

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ReceiveTick
struct ADragon_Character_BP_Boss_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ReceiveBeginPlay
struct ADragon_Character_BP_Boss_C_ReceiveBeginPlay_Params
{
};

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ExecuteUbergraph_Dragon_Character_BP_Boss
struct ADragon_Character_BP_Boss_C_ExecuteUbergraph_Dragon_Character_BP_Boss_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
