#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapWhip_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapWhip.WeapWhip_C
// 0x0008 (0x0DE0 - 0x0DD8)
class AWeapWhip_C : public AShooterWeapon_Whip
{
public:
	class USoundCue*                                   GeneralHitSounds;                                         // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapWhip.WeapWhip_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapWhip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
