#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AmargaSpikeArmorModifier_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C
// 0x000C (0x0984 - 0x0978)
class ABuff_AmargaSpikeArmorModifier_C : public ABuff_Base_C
{
public:
	float                                              ArmorModifierMultValue;                                   // 0x0978(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorModifierMultIncSpeed;                                // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExWildDinoDamageRecMult;                                  // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void STATIC_UpdateBuffDescription();
	void BuffTickClient(float* DeltaTime);
	void BuffTickServer(float* DeltaTime);
	bool STATIC_BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	float STATIC_BPModifyArmorValue(class UPrimalItem** ForItem, float* BaseArmorValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AmargaSpikeArmorModifier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
