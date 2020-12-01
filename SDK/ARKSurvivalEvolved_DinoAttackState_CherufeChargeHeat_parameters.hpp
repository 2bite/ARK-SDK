#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_CherufeChargeHeat_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPCanAttack
struct UDinoAttackState_CherufeChargeHeat_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ShouldSkipRangeCheckEvent
struct UDinoAttackState_CherufeChargeHeat_C_ShouldSkipRangeCheckEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOverrideAttackWeight
struct UDinoAttackState_CherufeChargeHeat_C_BPOverrideAttackWeight_Params
{
	float*                                             inputWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnClearAttackState
struct UDinoAttackState_CherufeChargeHeat_C_BPOnClearAttackState_Params
{
};

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.EndAnimationStateEvent
struct UDinoAttackState_CherufeChargeHeat_C_EndAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackEnd
struct UDinoAttackState_CherufeChargeHeat_C_BPOnAttackEnd_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackStart
struct UDinoAttackState_CherufeChargeHeat_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ExecuteUbergraph_DinoAttackState_CherufeChargeHeat
struct UDinoAttackState_CherufeChargeHeat_C_ExecuteUbergraph_DinoAttackState_CherufeChargeHeat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
