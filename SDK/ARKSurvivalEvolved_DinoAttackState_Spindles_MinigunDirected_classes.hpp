#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunDirected_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C
// 0x003B (0x0260 - 0x0225)
class UDinoAttackState_Spindles_MinigunDirected_C : public UDinoAttackState_Spindles_MinigunBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	struct FVector                                     LastStart;                                                // 0x0228(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastEnd;                                                  // 0x0234(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDurationOfDirectedMinigun;                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class ASpindles_Character_BP_C*                    K2Node_DynamicCast_AsSpindles_Character_BP_C;             // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0250(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C");
		return ptr;
	}


	class FString STATIC_BPGetDebugInfoString();
	void GetRandomVectorOnCircle(float MinRadius, float MaxRadius, struct FVector* RandomVector);
	bool BPShouldEndAttack();
	void OnEndEvent();
	void OnBeginEvent(class UPrimalAIState** InParentState);
	bool OnCanUseStateEvent();
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void GetAttackIndex(int* AttackIndex);
	void STATIC_Get_Spine_Start_and_End_Position(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd);
	void UpdateAimedActors();
	void ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
