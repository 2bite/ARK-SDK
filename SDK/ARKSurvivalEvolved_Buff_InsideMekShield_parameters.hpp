#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InsideMekShield_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPOverrideBuffToGiveOnDeactivation
struct ABuff_InsideMekShield_C_BPOverrideBuffToGiveOnDeactivation_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BuffTickClient
struct ABuff_InsideMekShield_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPDeactivated
struct ABuff_InsideMekShield_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPActivated
struct ABuff_InsideMekShield_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BuffTickServer
struct ABuff_InsideMekShield_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.GetBuffDescription
struct ABuff_InsideMekShield_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.GetOwnerMek
struct ABuff_InsideMekShield_C_GetOwnerMek_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFriendly;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AMek_Character_BP_C*                         Mek;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.IsOwnerMek
struct ABuff_InsideMekShield_C_IsOwnerMek_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.HideBuffFromHUD
struct ABuff_InsideMekShield_C_HideBuffFromHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.UserConstructionScript
struct ABuff_InsideMekShield_C_UserConstructionScript_Params
{
};

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.ExecuteUbergraph_Buff_InsideMekShield
struct ABuff_InsideMekShield_C_ExecuteUbergraph_Buff_InsideMekShield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
