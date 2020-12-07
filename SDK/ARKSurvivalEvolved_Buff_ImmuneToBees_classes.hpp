#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToBees_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ImmuneToBees.Buff_ImmuneToBees_C
// 0x0010 (0x0960 - 0x0950)
class ABuff_ImmuneToBees_C : public ABuff_Base_C
{
public:
	TArray<class UClass*>                              ClassesImmuneTo;                                          // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ImmuneToBees.Buff_ImmuneToBees_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ImmuneToBees(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
