#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InsideTekShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_InsideTekShield.Buff_InsideTekShield_C
// 0x0010 (0x0970 - 0x0960)
class ABuff_InsideTekShield_C : public ABuff_Base_C
{
public:
	TArray<class UClass*>                              PreventBuffs;                                             // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_InsideTekShield.Buff_InsideTekShield_C");
		return ptr;
	}


	void CheckDeactivate(bool* NewParam);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_InsideTekShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
