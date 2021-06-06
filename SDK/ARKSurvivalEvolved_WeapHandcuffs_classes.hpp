#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHandcuffs_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapHandcuffs.WeapHandcuffs_C
// 0x0000 (0x0D90 - 0x0D90)
class AWeapHandcuffs_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapHandcuffs.WeapHandcuffs_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapHandcuffs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
