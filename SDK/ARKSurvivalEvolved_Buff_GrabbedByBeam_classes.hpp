#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GrabbedByBeam_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_GrabbedByBeam.Buff_GrabbedByBeam_C
// 0x0065 (0x09B5 - 0x0950)
class ABuff_GrabbedByBeam_C : public ABuff_Base_C
{
public:
	float                                              maxDistanceToApplyImpulse;                                // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxImpulseToInstigator;                                   // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minImpulseToInstigator;                                   // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minDistanceToApplyImpulse;                                // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxAdditionalMultiplier;                                  // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minAdditionalMultiplier;                                  // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxWeightForCalculationns;                                // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minWeightForCalculations;                                 // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              logDeviation;                                             // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minProgressDeltaBasedOnDistance;                          // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxProgressDeltaBasedOnDistance;                          // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxProgress;                                              // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredLookDirDotToCapture;                              // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxProgressMultiplierForMinWeight;                        // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInitialized;                                           // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0989(0x0003) MISSED OFFSET
	float                                              CurrentBeamProgress;                                      // 0x098C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              additionalMultiplier;                                     // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxProgressMultiplierForMaxWeight;                        // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxAngleForCalculations;                                  // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParentSkiff_CurrentBeamStartLoc;                          // 0x099C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParentSkiff_CurrentBeamEndLoc;                            // 0x09A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 ParentSkiff_CurrentBeamState;                             // 0x09B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GrabbedByBeam.Buff_GrabbedByBeam_C");
		return ptr;
	}


	void ReceiveSkiffVars(const struct FVector& BeamStartLoc, const struct FVector& BeamEndLoc, TEnumAsByte<E_HoverSkiffBeamState> BeamState);
	void GetBeamCapturePercent(float* Percent);
	float GetOwnerDragWeight();
	void GetMaxProgress(float* maxProgress);
	void Calculate_Progress(float timeDelta, float* NewProgress);
	void CalculateBeamProgressDelta(float timeDelta, float* ProgressDelta, bool* bInvalidProgress);
	void InitializeBuff(float MaxBeamLength);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_GrabbedByBeam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
