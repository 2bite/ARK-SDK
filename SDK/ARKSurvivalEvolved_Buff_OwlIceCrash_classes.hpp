#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OwlIceCrash_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_OwlIceCrash.Buff_OwlIceCrash_C
// 0x0024 (0x0914 - 0x08F0)
class ABuff_OwlIceCrash_C : public ABuff_FrozenEffect_Base_C
{
public:
	bool                                               WaitingForHit;                                            // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08F1(0x0003) MISSED OFFSET
	float                                              OrigGravityScale;                                         // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EncapsulatedGravityScale;                                 // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EncapsulatedFallDamageMultiplier;                         // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrigFallDamageMultiplier;                                 // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VelocityAtBuffStart;                                      // 0x0904(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToGroundAtStart;                                  // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OwlIceCrash.Buff_OwlIceCrash_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void BPActivated(class AActor** ForInstigator);
	void BPOnInstigatorCapsuleComponentHit(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BPDeactivated(class AActor** ForInstigator);
	void SetupIceCrash(class APrimalCharacter* Character, bool Frozen);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* newCustomMode);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_OwlIceCrash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
