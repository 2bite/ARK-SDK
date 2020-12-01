#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NamelessPreggers_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPNotifyExperienceGained
struct ABuff_NamelessPreggers_C_BPNotifyExperienceGained_Params
{
	float*                                             ActualExpGained;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ExpectedExpGain;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EXPType>*                              ExpTypeGained;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPSetupForInstigator
struct ABuff_NamelessPreggers_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDeactivated
struct ABuff_NamelessPreggers_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPModifyPlayerBoneModifiers
struct ABuff_NamelessPreggers_C_BPModifyPlayerBoneModifiers_Params
{
	TArray<struct FBoneModifier>                       InBoneModifiers;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FBoneModifier>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.HandleBuffAnimNotify
struct ABuff_NamelessPreggers_C_HandleBuffAnimNotify_Params
{
	struct FName*                                      AnimNotifyName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     AnimNotifyStringData;                                     // (Parm, ZeroConstructor)
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UpdateBuffPersistentData
struct ABuff_NamelessPreggers_C_UpdateBuffPersistentData_Params
{
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ReceiveBeginPlay
struct ABuff_NamelessPreggers_C_ReceiveBeginPlay_Params
{
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickClient
struct ABuff_NamelessPreggers_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDrawBuffStatusHUD
struct ABuff_NamelessPreggers_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickServer
struct ABuff_NamelessPreggers_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UserConstructionScript
struct ABuff_NamelessPreggers_C_UserConstructionScript_Params
{
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.Multi_SetupBaby
struct ABuff_NamelessPreggers_C_Multi_SetupBaby_Params
{
};

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ExecuteUbergraph_Buff_NamelessPreggers
struct ABuff_NamelessPreggers_C_ExecuteUbergraph_Buff_NamelessPreggers_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
