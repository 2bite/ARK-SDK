#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TrappedTarget_VenusFlyTrap_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPPreventOnStartJump
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPPreventOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.Struggle
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_Struggle_Params
{
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.Validate
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_Validate_Params
{
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.SetIsHostileBuff
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_SetIsHostileBuff_Params
{
	bool                                               NewSetting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.GetBuffDescription
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.UpdateStruggle
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_UpdateStruggle_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPActivated
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPGetHUDElements
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BuffTickServer
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPHandleOnStartAltFire
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPHandleOnStartAltFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.TryStruggle
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_TryStruggle_Params
{
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.PreventJump
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_PreventJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPHandleOnStartFire
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.GetBuffPostprocessIntensity
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPDeactivated
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPSetupForInstigator
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.UserConstructionScript
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_UserConstructionScript_Params
{
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ServerRequestStruggle
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_ServerRequestStruggle_Params
{
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ClientOnStruggle
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_ClientOnStruggle_Params
{
};

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP
struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
