#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBaseClub_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBaseClub.WeapBaseClub_C
// 0x0000 (0x0D58 - 0x0D58)
class AWeapBaseClub_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBaseClub.WeapBaseClub_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBaseClub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
