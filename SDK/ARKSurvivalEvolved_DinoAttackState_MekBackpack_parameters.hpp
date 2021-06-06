#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekBackpack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.BPOnAttackTick
struct UDinoAttackState_MekBackpack_C_BPOnAttackTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.BPOnAttackStart
struct UDinoAttackState_MekBackpack_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.GetMuzzleInfo
struct UDinoAttackState_MekBackpack_C_GetMuzzleInfo_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.ExecuteUbergraph_DinoAttackState_MekBackpack
struct UDinoAttackState_MekBackpack_C_ExecuteUbergraph_DinoAttackState_MekBackpack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
