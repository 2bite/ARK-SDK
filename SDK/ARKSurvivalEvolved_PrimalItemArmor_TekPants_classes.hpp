#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C
// 0x003F (0x0C40 - 0x0C01)
class UPrimalItemArmor_TekPants_C : public UPrimalItemArmor_Base_Tek_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C01(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundOverrideProneStart;                                  // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOverrideProneEnd;                                    // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOverrideProneStep;                                   // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOverrideCrouchStart;                                 // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOverrideCrouchEnd;                                   // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Cannot_Use_Ability_Description_add_on;                    // 0x0C30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C");
		return ptr;
	}


	class USoundBase* OverrideCrouchingSound(class USoundBase** InSound, bool* bIsProne, int* soundState);
	void ExecuteUbergraph_PrimalItemArmor_TekPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
