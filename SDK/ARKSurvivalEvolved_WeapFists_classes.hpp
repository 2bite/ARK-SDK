#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFists_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFists.WeapFists_C
// 0x0000 (0x0D90 - 0x0D90)
class AWeapFists_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFists.WeapFists_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFists(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
