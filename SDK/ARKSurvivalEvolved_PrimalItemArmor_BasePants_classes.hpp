#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BasePants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
// 0x0028 (0x0B08 - 0x0AE0)
class UPrimalItemArmor_BasePants_C : public UPrimalItemArmorGeneric_C
{
public:
	class USoundBase*                                  SoundOverrideProneStart;                                  // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOverrideProneEnd;                                    // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOverrideProneStep;                                   // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOverrideCrouchStart;                                 // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOverrideCrouchEnd;                                   // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C");
		return ptr;
	}


	class USoundBase* OverrideCrouchingSound(class USoundBase** InSound, bool* bIsProne, int* soundState);
	void ExecuteUbergraph_PrimalItemArmor_BasePants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
