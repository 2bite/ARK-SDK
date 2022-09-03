#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0024 (0x09EC - 0x09C8)
class ABuff_OwlIceCrash_C : public ABuff_FrozenEffect_Base_C
{
public:
	bool                                               WaitingForHit;                                            // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09C9(0x0003) MISSED OFFSET
	float                                              OrigGravityScale;                                         // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EncapsulatedGravityScale;                                 // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EncapsulatedFallDamageMultiplier;                         // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrigFallDamageMultiplier;                                 // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VelocityAtBuffStart;                                      // 0x09DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToGroundAtStart;                                  // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OwlIceCrash.Buff_OwlIceCrash_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BuffTickClient(float* DeltaTime);
	void BPActivated(class AActor** ForInstigator);
	void BPOnInstigatorCapsuleComponentHit(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BPDeactivated(class AActor** ForInstigator);
	void SetupIceCrash(class APrimalCharacter* Character, bool Frozen);
	void STATIC_BPSetupForInstigator(class AActor** ForInstigator);
	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_OwlIceCrash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
