#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekClaw_Owner_Blocking_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C
// 0x0020 (0x0950 - 0x0930)
class ABuff_TekClaw_Owner_Blocking_C : public APrimalBuff
{
public:
	float                                              BlockAngle;                                               // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedDamageMultiplier_Min;                              // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedImpulseMultiplier_Min;                             // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedDamageMultiplier_Max;                              // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedImpulseMultiplier_Max;                             // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	class AShooterWeapon_MeleeLock*                    WeapClaws;                                                // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	float BPAdjustDamage_Ex(float* Damage, class AController** EventInstigator, class AActor** InDamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo, struct FVector* ImpulseDir);
	struct FVector BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekClaw_Owner_Blocking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
