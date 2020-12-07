#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateAoEFlee_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get Octree Group
struct UDinoAttackStateAoEFlee_Base_C_Get_Octree_Group_Params
{
	TEnumAsByte<EServerOctreeGroup>                    OctreeGroup;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnTickEvent
struct UDinoAttackStateAoEFlee_Base_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.BPCanAttack
struct UDinoAttackStateAoEFlee_Base_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get AoE Radius
struct UDinoAttackStateAoEFlee_Base_C_Get_AoE_Radius_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Find Characters To Frighten
struct UDinoAttackStateAoEFlee_Base_C_Find_Characters_To_Frighten_Params
{
	TArray<class APrimalCharacter*>                    Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Should Frighten Character
struct UDinoAttackStateAoEFlee_Base_C_Should_Frighten_Character_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFrighten;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Is On Cooldown
struct UDinoAttackStateAoEFlee_Base_C_Is_On_Cooldown_Params
{
	bool                                               On_Cooldown;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnBeginEvent
struct UDinoAttackStateAoEFlee_Base_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Base
struct UDinoAttackStateAoEFlee_Base_C_ExecuteUbergraph_DinoAttackStateAoEFlee_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
