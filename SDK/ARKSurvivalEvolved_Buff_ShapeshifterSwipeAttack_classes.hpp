#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ShapeshifterSwipeAttack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C
// 0x0024 (0x0974 - 0x0950)
class ABuff_ShapeshifterSwipeAttack_C : public APrimalBuff
{
public:
	struct FVector                                     InitialVelocity;                                          // 0x0950(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InstigatorInitialVelocityFactor;                          // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMassForLaunch;                                         // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar;                                                   // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	struct FVector                                     PrevActorLocation;                                        // 0x0968(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	bool AllowPostProcessEffect();
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BuffTickServer(float* DeltaTime);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ShapeshifterSwipeAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
