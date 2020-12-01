#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Otter_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Otter_Character_BP.Otter_Character_BP_C.BPSetupTamed
struct AOtter_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.OnLaunched
struct AOtter_Character_BP_C_OnLaunched_Params
{
	struct FVector*                                    LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.BPTimerServer
struct AOtter_Character_BP_C_BPTimerServer_Params
{
};

// Function Otter_Character_BP.Otter_Character_BP_C.OnOwnerReached
struct AOtter_Character_BP_C_OnOwnerReached_Params
{
};

// Function Otter_Character_BP.Otter_Character_BP_C.Returning To Owner Actions
struct AOtter_Character_BP_C_Returning_To_Owner_Actions_Params
{
};

// Function Otter_Character_BP.Otter_Character_BP_C.Set Last Player Order
struct AOtter_Character_BP_C_Set_Last_Player_Order_Params
{
	class APawn*                                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.GetOwnerCharacter
struct AOtter_Character_BP_C_GetOwnerCharacter_Params
{
	class APawn*                                       Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.ReturnToPlayer
struct AOtter_Character_BP_C_ReturnToPlayer_Params
{
};

// Function Otter_Character_BP.Otter_Character_BP_C.SelectPearl
struct AOtter_Character_BP_C_SelectPearl_Params
{
	bool                                               GotAPearl;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                IndexOfSelectedItem;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.AttemptToGetAPearl
struct AOtter_Character_BP_C_AttemptToGetAPearl_Params
{
	bool                                               ObtainedAPearl;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.IsCharacterAFish
struct AOtter_Character_BP_C_IsCharacterAFish_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.BPKilledSomethingEvent
struct AOtter_Character_BP_C_BPKilledSomethingEvent_Params
{
	class APrimalCharacter**                           killedTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.EatPlayersCarriedFood
struct AOtter_Character_BP_C_EatPlayersCarriedFood_Params
{
	class APrimalCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.Init
struct AOtter_Character_BP_C_Init_Params
{
};

// Function Otter_Character_BP.Otter_Character_BP_C.IsCarriedFishValid
struct AOtter_Character_BP_C_IsCarriedFishValid_Params
{
	class APrimalCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.BPTryMultiUse
struct AOtter_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.BPGetMultiUseEntries
struct AOtter_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Otter_Character_BP.Otter_Character_BP_C.BPClientDoMultiUse
struct AOtter_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.UserConstructionScript
struct AOtter_Character_BP_C_UserConstructionScript_Params
{
};

// Function Otter_Character_BP.Otter_Character_BP_C.ReceiveBeginPlay
struct AOtter_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Otter_Character_BP.Otter_Character_BP_C.AnimNotify_ShowPearl
struct AOtter_Character_BP_C_AnimNotify_ShowPearl_Params
{
};

// Function Otter_Character_BP.Otter_Character_BP_C.MulticastPlayShowPearl
struct AOtter_Character_BP_C_MulticastPlayShowPearl_Params
{
	int                                                switchIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Otter_Character_BP.Otter_Character_BP_C.ExecuteUbergraph_Otter_Character_BP
struct AOtter_Character_BP_C_ExecuteUbergraph_Otter_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
