#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderOnesidedShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekStriderOnesidedShield.PrimalItemArmor_TekStriderOnesidedShield_C
// 0x0008 (0x0AF0 - 0x0AE8)
class UPrimalItemArmor_TekStriderOnesidedShield_C : public UPrimalItemArmor_TekStriderAttachment_Base_C
{
public:
	float                                              CurrentShieldHealth;                                      // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FullHealth;                                               // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekStriderOnesidedShield.PrimalItemArmor_TekStriderOnesidedShield_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekStriderOnesidedShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
