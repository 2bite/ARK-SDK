#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BubbleHazard_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPDeactivated
struct ABuff_BubbleHazard_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BP_OverrideCharacterFlyingVelocity
struct ABuff_BubbleHazard_C_BP_OverrideCharacterFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.PopBubble
struct ABuff_BubbleHazard_C_PopBubble_Params
{
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPServerHandleNetExecCommand
struct ABuff_BubbleHazard_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPHandleOnStartFire
struct ABuff_BubbleHazard_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BuffTickClient
struct ABuff_BubbleHazard_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.AttachBubble
struct ABuff_BubbleHazard_C_AttachBubble_Params
{
	struct FVector                                     BubbleLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BP_OverrideCharacterSwimmingVelocity
struct ABuff_BubbleHazard_C_BP_OverrideCharacterSwimmingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FluidFriction;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NetBuoyancy;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BuffTickServer
struct ABuff_BubbleHazard_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPSetupForInstigator
struct ABuff_BubbleHazard_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.UserConstructionScript
struct ABuff_BubbleHazard_C_UserConstructionScript_Params
{
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.InitLocation
struct ABuff_BubbleHazard_C_InitLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.ExecuteUbergraph_Buff_BubbleHazard
struct ABuff_BubbleHazard_C_ExecuteUbergraph_Buff_BubbleHazard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
