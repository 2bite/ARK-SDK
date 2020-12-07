#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Megatherium_Energized_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Megatherium_Energized.Buff_Megatherium_Energized_C
// 0x0004 (0x0954 - 0x0950)
class ABuff_Megatherium_Energized_C : public APrimalBuff
{
public:
	float                                              damageReceivedMultiplier;                                 // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Megatherium_Energized.Buff_Megatherium_Energized_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Megatherium_Energized(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
