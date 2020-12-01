#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MeleeStoneWeapon_Impacts_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C
// 0x0008 (0x0800 - 0x07F8)
class AMeleeStoneWeapon_Impacts_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MeleeStoneWeapon_Impacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
