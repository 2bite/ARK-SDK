#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttackStateRanged_Fireball_Cherufe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C
// 0x0010 (0x00B0 - 0x00A0)
class UAttackStateRanged_Fireball_Cherufe_C : public UPrimalAIStateDinoRangedState
{
public:
	float                                              ShootAngleDegree;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShootOffset;                                              // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C");
		return ptr;
	}


	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void STATIC_BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
