#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventDamageAndTargeting_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PreventDamageAndTargeting.Buff_PreventDamageAndTargeting_C
// 0x0000 (0x08A0 - 0x08A0)
class ABuff_PreventDamageAndTargeting_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PreventDamageAndTargeting.Buff_PreventDamageAndTargeting_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	bool PreventActorTargeting(class AActor** ByActor);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PreventDamageAndTargeting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
