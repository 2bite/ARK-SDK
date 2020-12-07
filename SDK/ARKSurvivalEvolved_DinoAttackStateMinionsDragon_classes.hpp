#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsDragon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C
// 0x005C (0x00B4 - 0x0058)
class UDinoAttackStateMinionsDragon_C : public UPrimalAIState
{
public:
	TArray<class APrimalDinoCharacter*>                SpawnedMinions;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                NumOfMinionsToSpawn;                                      // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              TargetAreasArray;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UClass*>                              MinionCharacterTypeClasses;                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MinionCharacterTypeClassesWeights;                        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PreventMinionTaming;                                      // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreventMinionSaving;                                      // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	float                                              StasisOverrideRadius;                                     // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OverrideMinionBaseLevel;                                  // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MinionsSpawnAreaTag;                                      // 0x00AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C");
		return ptr;
	}


	void RemoveDeadCharactersInContainer(TArray<class APrimalDinoCharacter*>* Container_In, TArray<class APrimalDinoCharacter*>* ReturnArray);
	void EndAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void TickAnimationStateEvent(float* DeltaTime, struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	bool OnCanUseStateEvent();
	void OnEndEvent();
	void OnTickEvent(float* DeltaSeconds);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_DinoAttackStateMinionsDragon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
