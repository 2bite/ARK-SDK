#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Trust_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Trust.Buff_Trust_C
// 0x0000 (0x0E80 - 0x0E80)
class ABuff_Trust_C : public ABuff_FearCourage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Trust.Buff_Trust_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void OnCourageRoar(bool* canSwitchToCourage, float* amountOverride, bool* useAmountOverride, bool* sendMessageToRider);
	void GetTeamColorForParticles(struct FVector* finalColor);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Trust(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
