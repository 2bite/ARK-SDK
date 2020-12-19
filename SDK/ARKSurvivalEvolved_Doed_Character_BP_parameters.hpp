#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Doed_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Doed_Character_BP.Doed_Character_BP_C.BPChargingModifyInputAcceleration
struct ADoed_Character_BP_C_BPChargingModifyInputAcceleration_Params
{
	struct FVector*                                    inputAcceleration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Doed_Character_BP.Doed_Character_BP_C.BlueprintCanAttack
struct ADoed_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Doed_Character_BP.Doed_Character_BP_C.BlueprintCanRiderAttack
struct ADoed_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Doed_Character_BP.Doed_Character_BP_C.UserConstructionScript
struct ADoed_Character_BP_C_UserConstructionScript_Params
{
};

// Function Doed_Character_BP.Doed_Character_BP_C.AnimNotify_EndCharge
struct ADoed_Character_BP_C_AnimNotify_EndCharge_Params
{
};

// Function Doed_Character_BP.Doed_Character_BP_C.ExecuteUbergraph_Doed_Character_BP
struct ADoed_Character_BP_C_ExecuteUbergraph_Doed_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
