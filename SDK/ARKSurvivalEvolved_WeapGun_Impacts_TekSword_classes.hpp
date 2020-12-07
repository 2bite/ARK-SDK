#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGun_Impacts_TekSword_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C
// 0x0000 (0x0850 - 0x0850)
class AWeapGun_Impacts_TekSword_C : public AWeapGun_Impacts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGun_Impacts_TekSword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
