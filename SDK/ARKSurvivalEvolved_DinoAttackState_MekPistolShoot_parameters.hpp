#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekPistolShoot_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.BPOnAttackTick
struct UDinoAttackState_MekPistolShoot_C_BPOnAttackTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.BPOnAttackStart
struct UDinoAttackState_MekPistolShoot_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.GetMuzzleInfo
struct UDinoAttackState_MekPistolShoot_C_GetMuzzleInfo_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.ExecuteUbergraph_DinoAttackState_MekPistolShoot
struct UDinoAttackState_MekPistolShoot_C_ExecuteUbergraph_DinoAttackState_MekPistolShoot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
