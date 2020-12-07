#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVBambooGrenadeWeaponAnimBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVBambooGrenadeWeaponAnimBP_Base.FPVBambooGrenadeWeaponAnimBP_Base_C
// 0x0007 (0x0720 - 0x0719)
class UFPVBambooGrenadeWeaponAnimBP_Base_C : public UFPVGrenadeWeaponAnimBP_Base_C
{
public:
	bool                                               IsRunning_1;                                              // 0x0719(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving_1;                                               // 0x071A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCooking_1;                                              // 0x071B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CookingTime_1;                                            // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVBambooGrenadeWeaponAnimBP_Base.FPVBambooGrenadeWeaponAnimBP_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_FPVBambooGrenadeWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
