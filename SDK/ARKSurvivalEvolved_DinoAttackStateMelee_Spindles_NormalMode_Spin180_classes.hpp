#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Spindles_NormalMode_Spin180_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C
// 0x0010 (0x00A0 - 0x0090)
class UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C : public UDinoAttackStateMelee_C
{
public:
	struct FVector                                     targetForward;                                            // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C");
		return ptr;
	}


	void OnBeginEvent(class UPrimalAIState** InParentState);
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
