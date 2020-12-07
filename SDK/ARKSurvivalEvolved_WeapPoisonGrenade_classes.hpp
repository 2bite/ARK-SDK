#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPoisonGrenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPoisonGrenade.WeapPoisonGrenade_C
// 0x0000 (0x0E68 - 0x0E68)
class AWeapPoisonGrenade_C : public APrimalWeaponGrenade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPoisonGrenade.WeapPoisonGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapPoisonGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
