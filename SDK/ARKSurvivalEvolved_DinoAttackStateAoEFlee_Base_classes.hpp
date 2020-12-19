#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateAoEFlee_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C
// 0x0011 (0x0069 - 0x0058)
class UDinoAttackStateAoEFlee_Base_C : public UPrimalAIState
{
public:
	class UClass*                                      FrightenCooldownBuffClass;                                // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FrightenBuffToApply;                                      // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DontApplyToEnemyTamesOnPVEServer;                         // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C");
		return ptr;
	}


	void Get_Octree_Group(TEnumAsByte<EServerOctreeGroup>* OctreeGroup);
	void OnTickEvent(float* DeltaSeconds);
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void Get_AoE_Radius(float* Radius);
	void Find_Characters_To_Frighten(TArray<class APrimalCharacter*>* Characters);
	void Should_Frighten_Character(class APrimalCharacter* Character, bool* ShouldFrighten);
	void Is_On_Cooldown(bool* On_Cooldown);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_DinoAttackStateAoEFlee_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
