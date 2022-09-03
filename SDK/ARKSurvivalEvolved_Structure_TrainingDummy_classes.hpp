#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TrainingDummy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_TrainingDummy.Structure_TrainingDummy_C
// 0x0045 (0x0F56 - 0x0F11)
class AStructure_TrainingDummy_C : public AStructure_TaxidermyBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F11(0x0003) MISSED OFFSET
	float                                              CachedDamage;                                             // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       TwoLineFormatText;                                        // 0x0F18(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      DPSEvaluationTimeOptions;                                 // 0x0F40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DPSEvaluationTimeIndex;                                   // 0x0F50(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowPublicDamEval;                                      // 0x0F54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDamEvalReqsShooterController;                            // 0x0F55(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TrainingDummy.Structure_TrainingDummy_C");
		return ptr;
	}


	void TimedReportDPS();
	void BPPlacedStructure(class APlayerController** ForPC);
	void RemoveSnapshot();
	void ApplySnapshot(class UPrimalItem** Snapshot);
	bool STATIC_BPGetMultiUseCenterText(class APlayerController** ForPC, int* UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void STATIC_ReportDPS(float ReportTime);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UserConstructionScript();
	void ExecuteUbergraph_Structure_TrainingDummy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
