#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Env_DesertGeyser_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Env_DesertGeyser.Env_DesertGeyser_C.IsCharacterInGeyser
struct AEnv_DesertGeyser_C_IsCharacterInGeyser_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               return_value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Env_DesertGeyser.Env_DesertGeyser_C.UserConstructionScript
struct AEnv_DesertGeyser_C_UserConstructionScript_Params
{
};

// Function Env_DesertGeyser.Env_DesertGeyser_C.BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct AEnv_DesertGeyser_C_BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Env_DesertGeyser.Env_DesertGeyser_C.ServerRequestLaunch
struct AEnv_DesertGeyser_C_ServerRequestLaunch_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveTick
struct AEnv_DesertGeyser_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Env_DesertGeyser.Env_DesertGeyser_C.TurnGeyserOff
struct AEnv_DesertGeyser_C_TurnGeyserOff_Params
{
};

// Function Env_DesertGeyser.Env_DesertGeyser_C.Multi_ToggleParticles
struct AEnv_DesertGeyser_C_Multi_ToggleParticles_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveBeginPlay
struct AEnv_DesertGeyser_C_ReceiveBeginPlay_Params
{
};

// Function Env_DesertGeyser.Env_DesertGeyser_C.ExecuteUbergraph_Env_DesertGeyser
struct AEnv_DesertGeyser_C_ExecuteUbergraph_Env_DesertGeyser_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
