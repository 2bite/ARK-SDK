#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TropeWindGustTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C
// 0x0024 (0x0984 - 0x0960)
class ABuff_TropeWindGustTarget_C : public APrimalBuff
{
public:
	struct FVector                                     InitialVelocity;                                          // 0x0960(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InstigatorInitialVelocityFactor;                          // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMassForLaunch;                                         // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar;                                                   // 0x0974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	struct FVector                                     PrevActorLocation;                                        // 0x0978(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C");
		return ptr;
	}


	float GetBuffPostprocessIntensity();
	void ReceiveBeginPlay();
	bool AllowPostProcessEffect();
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BuffTickServer(float* DeltaTime);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TropeWindGustTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
