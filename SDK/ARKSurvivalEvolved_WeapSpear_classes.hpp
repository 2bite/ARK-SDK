#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSpear.WeapSpear_C
// 0x0000 (0x0E80 - 0x0E80)
class AWeapSpear_C : public APrimalWeaponBow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSpear.WeapSpear_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSpear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
