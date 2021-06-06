#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateFollowSpline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C
// 0x00A8 (0x0100 - 0x0058)
class UDinoAttackStateFollowSpline_C : public UPrimalAIState
{
public:
	bool                                               bShouldContinue;                                          // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class ASplineActor*                                CurrentSpline;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ASplineActor*>                        Splines;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DistanceOnSpline;                                         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SplinesCounter;                                           // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SplinesCoveredCounter;                                    // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefaultRotationSpeed;                                     // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFinishedTime;                                         // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RangedAttackCounter;                                      // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableRotationAcceleration;                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                SplineMovementCounter;                                    // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentSplineIndex;                                       // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetFocalPoint;                                         // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PawnAcceleration;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PawnAccelerationUpgraded;                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRangedAttackInterval;                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StateUsageCount;                                          // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SplinesToUseCount;                                        // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReactivateTime;                                           // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationSpeedOnSpline;                                    // 0x00C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRangedAttackInterval;                                  // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRangedAttackInterval;                                  // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultRangedAttackCounter;                               // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineDistanceIncrement;                                  // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalAIState*                              RangedState;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultFlyingSpeed;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireProjectileFlyingSpeed;                                // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastRangedTimeDouble;                                     // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C");
		return ptr;
	}


	void OnTickEvent(float* DeltaSeconds);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	bool ShouldSkipIntervalCheckEvent();
	void EndAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void OnChildStateEndedEvent(class UPrimalAIState** PrimalAIState);
	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void TickAnimationStateEvent(float* DeltaTime, struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	bool OnCanUseStateEvent();
	void OnEndEvent();
	void TickRangedState();
	void GotoNextSpline();
	void UpgradePawnAcceleration(bool Upgrade);
	void FindDragonSplines(bool* found);
	void ExecuteUbergraph_DinoAttackStateFollowSpline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
