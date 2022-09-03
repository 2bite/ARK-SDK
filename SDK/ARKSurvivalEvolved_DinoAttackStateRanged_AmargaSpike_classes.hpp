#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_AmargaSpike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C
// 0x0020 (0x00C0 - 0x00A0)
class UDinoAttackStateRanged_AmargaSpike_C : public UPrimalAIStateDinoRangedState
{
public:
	float                                              ShootAngleDegree;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClampedSpeed;                                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedMultiplier;                                       // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ProjClasses;                                              // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C");
		return ptr;
	}


	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
