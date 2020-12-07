#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BiglyPostProccess_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BiglyPostProccess.Buff_BiglyPostProccess_C
// 0x0038 (0x0988 - 0x0950)
class ABuff_BiglyPostProccess_C : public APrimalBuff
{
public:
	float                                              PounceRange;                                              // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceTraceRadius;                                        // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0959(0x0007) MISSED OFFSET
	class AActor*                                      CurrentTarget;                                            // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PounceIconSize;                                           // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceIconSizeMult;                                       // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetMassThresholdForPounuce;                            // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SequentialJumpPostProcessSpeedThreshold;                  // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevActorLocation;                                        // 0x097C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BiglyPostProccess.Buff_BiglyPostProccess_C");
		return ptr;
	}


	float GetBuffPostprocessIntensity();
	bool AllowPostProcessEffect();
	void Is_Valid_PounceTarget(class APrimalCharacter* Target, bool* Result);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void IsAnotherDinoAlreadyAttached(class AActor* Target, bool* ret);
	void Can_Ignore_Traced_Actor(class AActor* Actor, bool* CanBeIgnored);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BiglyPostProccess(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
