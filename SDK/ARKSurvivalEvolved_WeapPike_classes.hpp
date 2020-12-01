#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPike.WeapPike_C
// 0x0000 (0x0D50 - 0x0D50)
class AWeapPike_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPike.WeapPike_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapPike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
