#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basilosaurus_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Basilosaurus_Character_BP.Basilosaurus_Character_BP_C
// 0x0038 (0x2140 - 0x2108)
class ABasilosaurus_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Basil_C*    DinoCharacterStatus_BP_Basil_C1;                          // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowMeRadius;                                           // 0x2110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2114(0x0004) MISSED OFFSET
	double                                             LastTimeShotByPlayer;                                     // 0x2118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBeingHitAllowsAggroTowardsPlayers;                    // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWeightToBeAbleToFollow;                                // 0x2124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumberOfFollowTargets;                                 // 0x2128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x212C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ValidFollowClasses;                                       // 0x2130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Basilosaurus_Character_BP.Basilosaurus_Character_BP_C");
		return ptr;
	}


	bool BlueprintCanRiderAttack(int* AttackIndex);
	void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
	void IsOfFollowTypeClass(class APrimalDinoCharacter* DinoToCheck, bool* ValidClass);
	void GetValidFollowingTargets(TArray<class APrimalDinoCharacter*>* ValidDinos);
	void BPFedWakingTameEvent(class APlayerController** ForPC);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void BPTimerServer();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AnimNotify_StopMove();
	void ExecuteUbergraph_Basilosaurus_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
