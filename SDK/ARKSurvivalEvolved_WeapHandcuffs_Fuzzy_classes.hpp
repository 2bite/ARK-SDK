#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHandcuffs_Fuzzy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C
// 0x0000 (0x0D50 - 0x0D50)
class AWeapHandcuffs_Fuzzy_C : public AWeapHandcuffs_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapHandcuffs_Fuzzy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
