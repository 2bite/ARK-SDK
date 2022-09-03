#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinopithecusRider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinopithecusRider.Buff_DinopithecusRider_C
// 0x0038 (0x09B0 - 0x0978)
class ABuff_DinopithecusRider_C : public APrimalBuff
{
public:
	float                                              PounceRange;                                              // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceTraceRadius;                                        // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	class AActor*                                      CurrentTarget;                                            // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PounceIconSize;                                           // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceIconSizeMult;                                       // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetMassThresholdForPounuce;                            // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SequentialJumpPostProcessSpeedThreshold;                  // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevActorLocation;                                        // 0x09A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinopithecusRider.Buff_DinopithecusRider_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	float GetBuffPostprocessIntensity();
	bool AllowPostProcessEffect();
	void Is_Valid_PounceTarget(class APrimalCharacter* Target, bool* Result);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void IsAnotherDinoAlreadyAttached(class AActor* Target, bool* Ret);
	void Can_Ignore_Traced_Actor(class AActor* Actor, bool* CanBeIgnored);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DinopithecusRider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
