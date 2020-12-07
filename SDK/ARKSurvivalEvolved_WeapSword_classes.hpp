#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSword.WeapSword_C
// 0x0000 (0x0D58 - 0x0D58)
class AWeapSword_C : public AWeapBaseClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSword.WeapSword_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
