#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_Scout_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C
// 0x0028 (0x00C8 - 0x00A0)
class UDinoAttackStateRanged_Scout_C : public UPrimalAIStateBPBase
{
public:
	float                                              ProjectileRange;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationAtSpawnTime;                                      // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileVFXLifeTime;                                    // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ValidBeamTarget;                                          // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              BeamDistanceCurrent;                                      // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class AActor*                                      ValidBeamTargetActor;                                     // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PrevValidBeamTargetActor;                                 // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C");
		return ptr;
	}


	void GetScout(class AScout_Character_BP_C** Result);
	void OnTickEvent(float* DeltaSeconds);
	void OnEndEvent();
	void BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void Tracker_Impact_Pawn_or_Terrain(class AActor* Target, const struct FVector& ImpactLocation, bool* IsValidTarget);
	void STATIC_CalculateProjectileImpacts(const struct FVector& Origin, const struct FVector& Direction);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_DinoAttackStateRanged_Scout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
