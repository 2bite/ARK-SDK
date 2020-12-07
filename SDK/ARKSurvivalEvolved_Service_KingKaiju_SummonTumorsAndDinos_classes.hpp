#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_KingKaiju_SummonTumorsAndDinos_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C
// 0x00B0 (0x0130 - 0x0080)
class UService_KingKaiju_SummonTumorsAndDinos_C : public UBTService_BlueprintBase
{
public:
	int                                                MaxTumors;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TumorSpawnFrequency;                                      // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastTimeSpawnTumor;                                       // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CorruptDinosSpawnFrequency;                               // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	double                                             LastTimeSummonCorruptdinos;                               // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      BBKey_ShouldSummon;                                       // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_ShouldPlayWipeout;                                  // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_StartHordeMode;                                     // 0x00F0(0x0028) (Edit, BlueprintVisible)
	float                                              MinBonusTumors;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBonusTumors;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpawnTumorFrequencyPenalty;                            // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpawnTumorFrequencyPenalty;                            // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HasteSummonCooldownFlyerCountThreshold;                   // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TumorFrequencyPenaltyPerDifficultyLevel;                  // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C");
		return ptr;
	}


	void FindTumorSpawnFrequency(class AKingKaiju_Character_BP_C* KKChar, float* TumorSpawnFrequency);
	void FindMaxTumorAllowed(class AKingKaiju_Character_BP_C* KKChar, int* MaxTumors);
	void ReceiveActivation(class AActor** OwnerActor);
	void TumorIsNearby(const struct FVector& AtLoc, class APrimalCharacter* KKChar, bool* FoundTumorNearby);
	void FindAllTumors(class AActor* KKChar, int* Tumors);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Service_KingKaiju_SummonTumorsAndDinos(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
