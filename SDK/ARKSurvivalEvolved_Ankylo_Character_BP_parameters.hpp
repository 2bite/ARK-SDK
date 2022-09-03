#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ankylo_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ankylo_Character_BP.Ankylo_Character_BP_C.BlueprintCanAttack
struct AAnkylo_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ankylo_Character_BP.Ankylo_Character_BP_C.BlueprintCanRiderAttack
struct AAnkylo_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ankylo_Character_BP.Ankylo_Character_BP_C.BPModifyHarvestDamage
struct AAnkylo_Character_BP_C_BPModifyHarvestDamage_Params
{
	class UPrimalHarvestingComponent**                 harvestComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ankylo_Character_BP.Ankylo_Character_BP_C.UserConstructionScript
struct AAnkylo_Character_BP_C_UserConstructionScript_Params
{
};

// Function Ankylo_Character_BP.Ankylo_Character_BP_C.ExecuteUbergraph_Ankylo_Character_BP
struct AAnkylo_Character_BP_C_ExecuteUbergraph_Ankylo_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
