#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapAlarmTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapAlarmTrap.WeapAlarmTrap_C
// 0x0000 (0x0E00 - 0x0E00)
class AWeapAlarmTrap_C : public AShooterWeapon_Placer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapAlarmTrap.WeapAlarmTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapAlarmTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
