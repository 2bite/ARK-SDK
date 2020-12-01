#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekClaw_Owner_MaxPower_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.BPAdjustImpulseFromDamage
struct ABuff_TekClaw_Owner_MaxPower_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.UserConstructionScript
struct ABuff_TekClaw_Owner_MaxPower_C_UserConstructionScript_Params
{
};

// Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower
struct ABuff_TekClaw_Owner_MaxPower_C_ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
